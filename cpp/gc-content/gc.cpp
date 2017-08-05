// Declaring libraries
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

float gcPercent (string input);

// Program finding GC percentage, implement in function
int main()
{
    string gcInput;
    string biggestName;
    string tempName;
    float biggestGC = 0;
    
    ifstream fileInput ("rosalind_gc.txt");
    
    while (!fileInput.eof())
    {
        getline(fileInput, tempName);
        getline(fileInput, gcInput);
        
        if (gcPercent(gcInput) > biggestGC)
        {
            biggestGC = gcPercent(gcInput);
            biggestName = tempName;
        }
    }
    
    cout << biggestName << endl;
    cout << biggestGC << endl;
    
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
