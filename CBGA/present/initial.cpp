#include <iostream>
#include <bitset>
#include <string>
#include <vector>

int main() {
    std::string str = "Hello, world!";
    std::vector<std::bitset<8>> binaryValues;

    for (char ch : str) {
        std::bitset<8> binaryValue(ch);
        binaryValues.push_back(binaryValue);
    }

    for (int i = 0; i < binaryValues.size(); i++) {
        std::cout << "Binary value " << i << ": " << binaryValues[i].to_string() << std::endl;
    }

    return 0;
}
