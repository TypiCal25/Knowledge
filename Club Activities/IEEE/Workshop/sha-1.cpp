#include <cstdint>
#include <iostream>
#include <vector>
#include <array>
#include <sstream>
#include <iomanip>

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
ExtractWordsFromInputBlock(const Bytes* const bytes, int64_t blockNumber)
{
        Words words;
        

        for (size_t i = blockNumber * NUMBER_OF_BYTES_IN_BLOCK, index = 0; i < (blockNumber + 1) * NUMBER_OF_BYTES_IN_BLOCK; i += 4, ++index) {
                uint32_t word = bytes->at(i) << 24;
                word |= bytes->at(i + 1) << 16;
                word |= bytes->at(i + 2) << 8;
                word |= bytes->at(i + 3);

                words.at(index) = word;
        }

        for (int i = 16; i < NUMBER_OF_WORDS_REQUIRED; ++i) {
                words.at(i) = words.at(i - 3) ^ words.at(i - 8) ^ words.at(i - 14) ^ words.at(i - 16);
                uint8_t msb = (words.at(i) & (1 << 31)) >> 31;
                words.at(i) <<= 1;
                words.at(i) = (words.at(i) & 0xFFFFFFFE) | msb;
        }

        return std::move(words);
}

inline uint64_t
ComputeF(uint64_t t, uint64_t b, uint64_t c, uint64_t d)
{
        return t < 20 ? ((b & c) | (b & d) | (c & d)) : b ^ c ^ d;
}

inline uint64_t
ComputeK(uint8_t wordNumber)
{
        return wordNumber < 20 ? 0x8f1bbcdc : 0xca62c1d6;
}


std::string
ProcessBlockFromInputMessage(Bytes* const bytes, int64_t blockNumber)
{
        Words words = ExtractWordsFromInputBlock(bytes, blockNumber);

        uint32_t a = 0x67452301;
        uint32_t b = 0xefcdab89;
        uint32_t c = 0x98badcfe;
        uint32_t d = 0x10325476;
        uint32_t e = 0xc3d2e1f0;

        for (int t = 0; t < NUMBER_OF_WORDS_REQUIRED; ++t) {
                int temp = (a << 5) + ComputeF(t, b, c, d) + e + words.at(t) + ComputeK(t);
                e = d;
                d = c;
                c = b << 30;
                b = a;
                a = temp; 
        }

        uint32_t h0 = 0x67452301 + a;
        uint32_t h1 = 0xefcdab89 + b;
        uint32_t h2 = 0x98badcfe + c;
        uint32_t h3 = 0x10325476 + d;
        uint32_t h4 = 0xc3d2e1f0 + e;

        std::ostringstream hexStream;
        hexStream << std::hex << std::setw(8) << std::setfill('0') << h0;
        hexStream << std::hex << std::setw(8) << std::setfill('0') << h1;
        hexStream << std::hex << std::setw(8) << std::setfill('0') << h2;
        hexStream << std::hex << std::setw(8) << std::setfill('0') << h3;
        hexStream << std::hex << std::setw(8) << std::setfill('0') << h4;
        return hexStream.str();
}

int main()
{
        std::string inputString = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
        Bytes bytes = PadMessage(inputString);

        const size_t numberOfBlocks = bytes.size() / NUMBER_OF_BYTES_IN_BLOCK;
        std::string result = "";
        
        for (int i = 0; i < numberOfBlocks; ++i) {
                result.append(ProcessBlockFromInputMessage(&bytes, i));
        }

        std::cout << result << std::endl;
}