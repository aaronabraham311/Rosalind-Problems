// Declaring libraries
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

float gcPercent (string input);

// IDEA: Getline --> see if line[0] is '>' --> if so, put line as names (use substr) --> else, add to content --> if next line begins with '>', go to next index!


// Program finding GC percentage, implement in function
int main()
{
    string line, name, content;
    string listNames[100], listContent[100];
    float biggestGC = 0;
    int index, i = 0;
    
    ifstream input("rosalind_gc.txt");
    
    while (getline(input, line).good())
    {
        if (line[0] == '>')
        {
            if (!name.empty())
            {
                listNames[i] = name;
                listContent[i] = content;
                name.clear();
                content.clear();
                i ++;
            }
            
            name = line.substr(1);
        }
        else 
        {
            content += line;   
        }
    }
    
    for (int i = 0; i < 100; i ++)
    {
        if (gcPercent(listContent[i]) > biggestGC)
        {
            biggestGC = gcPercent(listContent[i]);
            index = i;
        }
    }
    
    
    cout << listNames[index] << endl << biggestGC << endl;
    
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
