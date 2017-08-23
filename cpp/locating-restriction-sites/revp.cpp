// Including libraries
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Protyping functions
bool complementCheck(string check);
char complementCharacter(char input);

// Logic: Go on each character --> find complement character further down string  --> make substring and check reverse complement --> palindrome program
int main()
{
    // Declaring all variables
    string dnaString;
    string complementString;
    int length;
    
    // Getting all input. NOTE: Use FASTA format
    cin >> dnaString;
    
    length = dnaString.length(); // Getting length of string
    
    // Puts first character and finds next character that is a complement
    for (int i = 0; i < length; i ++)
    {
        for (int j = i + 1; j < length; j ++) // Using nested loop to find next complement
        {
            if (dnaString[i] == complementCharacter(dnaString[j])) // Checking if characters are equal complements
            {
                if (j - i + 1 >= 4 && j - i + 1 <= 12) // Putting restriction
                {
                    complementString = dnaString.substr(i, j - i + 1); // Making a substring
                    
                    if (complementCheck(complementString) == true) // Checks if substring is a reverse palindrome
                    {
                        cout << i + 1 << " " << j - i + 1 << endl; // Output
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

// Returns complement character
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
