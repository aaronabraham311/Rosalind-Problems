// INCOMPLETE

#include <iostream> 
#include <string>
using namespace std;

// Logic: Substrings of 3 --> compare to 2D array that takes codon and gives protein letter --> puts in new string using .append()

int main()
{
    string rnaSequence, aaSequence, codon;
    string codonArray[20][2] =
    {
        {"UUU", "F"},
        {"UUC", "F"},
        {"UUA", "L"},
        {"UUG", "L"},
        {"UCU", "S"}
    }; // Put in list
    int answer[100]; // Stores answer
    
    cin >> rnaSequence;
    
    for (int i = 0; i < rnaSequence.length(); i += 3)
    {
        codon = rnaSequence[i] + rnaSequence[i + 1] + rnaSequence[i + 2]
        
    }
    
    return 0;
}
