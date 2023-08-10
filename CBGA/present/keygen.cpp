#include <iostream>
#include <random>
#include <bitset>

using namespace std;

string generateKey()
{
    // Initializing the random number generator
    random_device rd;
    mt19937 gen(rd());
    cin >> "Enter key size: " >> size;
    
    // Random key generation
    uniform_int_distribution<> dis(97, 122); // ASCII character range
    string key;
    for (int i = 0; i < size; i++) { // 8 bits per ASCII character
        key += static_cast<char>(dis(gen));
    }
    
    return key;
}

int main()
{
    string key = generateKey();
    
    cout << "Generated key: " << key << std::endl;
    
    return 0;
}
