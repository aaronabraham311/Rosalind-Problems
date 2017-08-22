#include <iostream>

using namespace std;

int main()
{
    float couples[6]; // Array of population numbers
    
    // Inputting population
    for (int i = 0; i < 6; i ++)
    {
        cin >> couples[i];
    }
    
    // Calculating probabilities
    float firstPheno = couples[0] * 1;
    float secondPheno = couples[1] * 1;
    float thirdPheno = couples[2] * 1;
    float fourthPheno = couples[3] * 0.75;
    float fifthPheno = couples[4] * 0.5;
    
    float finalProb = firstPheno + secondPheno + thirdPheno + fourthPheno + fifthPheno; // Calculating total probability
    
    cout << finalProb * 2 << endl; // Outputting final result. Multiply by 2 as each couple has two kids
    
}
