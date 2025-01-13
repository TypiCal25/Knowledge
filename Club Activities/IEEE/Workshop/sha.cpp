#include <string>
#include <cstdint>

const enum STATUS{
        SUCCESSFUL,
        FAILED
};

std::string
ConvertNumberToBinaryString(uint8_t letter)
{
        std::string binaryRepresentation = "";
        while (letter != 0) {
                binaryRepresentation = (letter & 1 == 0 ? "0" : "1") + binaryRepresentation;
                letter >>= 1;
        }
        return binaryRepresentation;
}

std::string
ConvertToBitwiseString(const std::string_view message)
{
        std::string bitwiseRepresentation = "";
        for (char digit : message) {
                bitwiseRepresentation.append(ConvertNumberToBinaryString(digit));
        }
        return bitwiseRepresentation;
}

std::string
PadInputMessage(const std::string_view message)
{
        std::string paddedString = ConvertToBitwiseString(message);
        uint64_t length = paddedString.length();
        while (message.length() % 512 == 448) {
                paddedString += "0";
        }
        
        std::string lengthPadding = "";
        while (length != 0) {
                lengthPadding = (length & 1 == 0 ? "0" : "1") + lengthPadding;
                length >>= 1;
        }
                
        paddedString.append(lengthPadding);
        return paddedString;
}



int main()
{
        
}