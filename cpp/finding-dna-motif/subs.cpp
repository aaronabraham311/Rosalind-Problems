// Including all libraries
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string dnaSequence;
    string motif;
    vector <int> positions; // Stores all positions of motuf occurence
    
    // Getting input
    cin >> dnaSequence;
    cin >> motif;
    
    size_t pos = dnaSequence.find(motif, 0); // Using size_t type to indicate maximum length of string
    
    while (pos != string::npos) // Runs loop until end of string
    {
        positions.push_back(pos);
        pos = dnaSequence.find(motif, pos + 1); // Will find all occurences (first index) and puts into the array
    }
    
    for (int i = 0; i < positions.size(); i ++) // Outputting
    {
        cout << positions[i] + 1 << endl;
    }
    
    return 0;
}
