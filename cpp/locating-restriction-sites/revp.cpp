#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string complement(string input);

int main()
{
    string dnaString;
    string complementString;
    int index1, index2, length;
    
    getline(cin, dnaString);
    
    length = dnaString.length();
    complementString = complement(dnaString);
    
    cout << dnaString << endl << complementString << endl;
    
    /*
    for (index1 = 0; index1 < length; index1 ++)
    {
        if (dnaString[index1] == complementString[index1])
        {
            for (index2 = index1; index2 < length; index2 ++)
            {
                if(dnaString[index2 + 1] != complementString[index2 + 1])
                {
                       if ((index2 - index1) < 4 || (index2 - index1) > 12)
                       {
                           break;
                       }
                       else 
                       {
                            cout << index1 << " " << index2 - index1 << endl;   
                       }
                }
            }
        }
    }*/
    
    return 0;   
}

string complement(string input)
{
    string sequence = input;
    reverse(sequence.begin(), sequence.end()); // Reversing string
    
    // Goes through each instance and replaces letters
    for (int i = 0; i < sequence.length(); i ++)
    {
        if (sequence[i] == 'A')
        {
            sequence.replace(i, 1, "T");   
        }
        else if (sequence[i] == 'T')
        {
            sequence.replace(i, 1, "A");
        }
        else if (sequence[i] == 'C')
        {
            sequence.replace(i, 1, "G");
        }
        else if (sequence[i] == 'G')
        {
            sequence.replace(i, 1, "C");
        }
    }
    
    return sequence;
}
