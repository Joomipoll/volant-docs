#include <iostream>
#include <bitset>
#include <string>

int main() {
    std::string key = "kgxewzaclmnnczoynzlcmrdbfvtjiwwp";

    for (char c : key) {
        std::bitset<8> binary(c);
        std::cout << binary << " ";
    }

    return 0;
}
