#include <cstdint>
#include <iostream>
#include <vector>
#include <array>
#include <memory>

static const uint8_t NUMBER_OF_BITS_IN_DIGIT = 8;
static const uint8_t NUMBER_OF_BYTES_IN_BLOCK = 512 / 8;
static const uint8_t NUMBER_OF_WORDS_REQUIRED = 40;

typedef std::vector<uint8_t> Bytes;
typedef std::array<uint32_t,  NUMBER_OF_WORDS_REQUIRED> Words;

Bytes
PadMessage(const std::string_view inputMessage)
{
        Bytes binaryMessage = Bytes();
        
        // Convert into bitwise representation
        for (char digit : inputMessage)
                binaryMessage.push_back(digit);
        
        const uint8_t INITIAL_PADDING = 0b10000000;
        binaryMessage.push_back(INITIAL_PADDING);
        while ((binaryMessage.size() * 8) % 512 != 448)
                binaryMessage.push_back(0);

        uint64_t length = inputMessage.length() * NUMBER_OF_BITS_IN_DIGIT;
        for (int8_t byteNumber = 7; byteNumber >= 0; --byteNumber) {
                const uint8_t paddingByte = static_cast<uint8_t>((length >> (byteNumber * 8)) & 0xFF);
                binaryMessage.push_back(paddingByte);
        }

        return std::move(binaryMessage);
}

Words
ExtractWordsFromInputMessage(const Bytes* const bytes, int64_t blockNumber)
{
        Words words;
        

        for (size_t i = blockNumber * NUMBER_OF_BYTES_IN_BLOCK, index = 0; i < (blockNumber + 1) * NUMBER_OF_BYTES_IN_BLOCK; i += 4, ++index) {
                uint32_t word = bytes->at(i) << 24;
                word |= bytes->at(i + 1) << 16;
                word |= bytes->at(i + 2) << 8;
                word |= bytes->at(i + 3);

                words.at(index) = word;
        }

        for (int i = 16; i < NUMBER_OF_WORDS_REQUIRED; ++i)
                words.at(i) = words.at(i - 3) ^ words.at(i - 8) ^ words.at(i - 14) ^ words.at(i - 16);

        return std::move(words);
}

inline uint64_t
ComputeF(uint64_t t, uint64_t b, uint64_t c, uint64_t d, uint8_t wordNumber)
{
        return wordNumber < 20 ? ((b & c) | (b & d) | (c & d)) ? b ^ c ^ d;
}

inline uint64_t
ComputeK(uint8_t wordNumber)
{
        return wordNumber < 20 ? 0x8f1bbcdc : 0xca62c1d6;
}

ProcessIterativeStep()

std::string
ProcessBlockFromInputMessage(Bytes* const bytes, int64_t blockNumber)
{
        Words words = ExtractWordsFromInputMessage(bytes, blockNumber);
}