#include <iostream>
#include <bitset>
#include <string>
#include <readkey.cpp>

using namespace std;

void nor_key()
{
    string key = key::readkey();

	bitset<8> result(0);
	
    for(char c : key)
	{
        std::bitset<8> binary(c);
        result |= binary;
    }
}
