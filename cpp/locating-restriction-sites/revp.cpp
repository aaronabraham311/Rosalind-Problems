// INCOMPLETE
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool complementCheck(string check);
char complementCharacter(char input);

int main()
{
    string dnaString;
    string complementString;
    int index1, index2, length;
    
    getline(cin, dnaString);
    
    length = dnaString.length();
    
    for (int i = 0; i < length; i ++)
    {
        for (int j = i + 1; j < length; j ++)
        {
            if (dnaString[i] == complementCharacter(dnaString[j]))
            {
                if (j - i >= 4 || j - i <= 12)
                {
                    complementString = dnaString.substr(i, j - i);
                    
                    if (complementCheck(complementString) == true)
                    {
                        cout << i << " " << j - i << endl;
                    }
                }
            }
        }
    }
    return 0;
}

// Checks reverse complement palindrome
bool complementCheck(string check)
{
    string sequence = check;
    bool test = true;
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
    
    // Compares reverse complement string with the original substring
    for (int i = 0; i < sequence.length(); i ++)
    {
        if (sequence[i] != check[i])
        {
            test = false;
            break;
        }
    }
    
    return test;
}

char complementCharacter(char input)
{
    if (input == 'A')
    {
        return 'T';
    }
    else if (input == 'T')
    {
        return 'A';
    }
    else if (input == 'C')
    {
        return 'G';
    }
    else if (input == 'G')
    {
        return 'C';
    }
    
    return 'A';
}
