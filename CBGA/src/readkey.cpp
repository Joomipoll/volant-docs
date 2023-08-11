#include <iostream>
#include <fstream>
#include <string>

using namespace std;

namespace key
{
    void readkey()
    {        
        ifstream file("key.txt");
        string content;

        if(file.is_open())
        { // check if the file could be opened
            string line;
            while(getline(file, line))
            { // read file line by line
                content += line + "\n"; // add each line to a variable
            }

            file.close(); // close the file
        } else {
            cout << "Failed to read key" << endl;
            return 1;
        }
    }
}
