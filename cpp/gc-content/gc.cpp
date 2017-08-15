// Declaring libraries
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

float gcPercent (string input);

// Program finding GC percentage, implement in function
int main()
{
    // Declaring all variables
    string line, name, content;
    string listNames[100], listContent[100];
    float biggestGC = 0;
    int index, i = 0;
    
    ifstream input("rosalind_gc.txt"); // Getting file into ifstream object
    
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
    
    for (int i = 0; i < 100; i ++) // Finds biggest GC percentage and corresponding name
    {
        if (gcPercent(listContent[i]) > biggestGC)
        {
            biggestGC = gcPercent(listContent[i]);
            index = i;
        }
    }
    
    
    cout << listNames[index] << endl << biggestGC << endl; // Outputs name and percentage
    
    return 0;
}

float gcPercent (string input)
{
    float gcNum = 0;
    
    // Finding number of 'G' or 'C' characters there are
    for (int i = 0; i < input.length(); i ++)
    {
        if (input[i] == 'G' || input[i] == 'C')
        {
            gcNum ++;
        }
    }
    
    return (gcNum/input.length()) * 100;
}
