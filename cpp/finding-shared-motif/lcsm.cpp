#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
    // Declaring all variables
    string line, name, content;
    string listNames[100], listContent[100];
    int i = 0;
    
    ifstream input("rosalind_lcsm.txt"); // Getting file into ifstream object
    
    while (getline(input, line)) // Runs loop until end of file. Continually collects lines
    {
        if (line[0] == '>') // If line starts with '>', it must be a line containing the DNA sequence name
        {
            if (!name.empty()) // If name is already full, it indicates you are on the next DNA sequence
            {
                // Stores temporary variable in array, clears all temporary variables, and starts next DNA sequence
                listNames[i] = name;
                listContent[i] = content;
                name.clear();
                content.clear();
                i ++;
            }
            
            name = line.substr(1); // Gets name
        }
        else
        {
            content += line; // If not beginning with '>', it is a DNA sequence. Stores it
        }
    }
    
    if (!name.empty() || !content.empty()) // Used to account for last DNA sequences
    {
        listNames[i] = name;
        listContent[i] = content;
    }
    
    
    
    return 0;
}
