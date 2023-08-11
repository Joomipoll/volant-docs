#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
    string key = key::readkey();

    for (char c : key) {
        std::bitset<8> binary(c);
        std::cout << binary << " ";
    }

    return 0;
}
