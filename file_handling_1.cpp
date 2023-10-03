/* File Handling
The fstream library allows us to work with files
These are the three classes included in the fstream library, which are used to create, write or read files:
ofsteam - creates and writes to files
ifstream - Reads from files
fstream - A combination of ofstream and ifstream: creates, reads, and writes to files */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create and open a text file
    ofstream myfile("file.txt");

    // Write to the file
    myfile<<"Files can be tricky, but it is fun enough!";

    // Close the file
    myfile.close();
    return 0;
}