// Read a file

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // Create a text string, which is used to output the text file
    string mytext;

    // Read from the text file
    ifstream myreadfile("file.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while(getline(myreadfile, mytext))
    {
        // Output the text from the file
        cout<<mytext;
    }

    // Close the file
    myreadfile.close();
    return 0;
}