// INCOMPLETE
#include <iostream>

using namespace std;

int main()
{
    float couples[6];
    float total;
    
    for (int i = 0; i < 6; i ++)
    {
        cin >> couples[i];
    }
    
    float firstPheno = couples[0] * 2;
    float secondPheno = couples[1] * 2;
    float thirdPheno = couples[2] * 2;
    float fourthPheno = couples[3] * 2 * 0.75;
    float fifthPheno = couples[4] * 2 * 0.5;
    
    for (int i = 0; i < 6; i ++)
    {
        total += couples[i] * 2;
    }
    
    float output = total * ((firstPheno + secondPheno + thirdPheno + fourthPheno + fifthPheno) / total);
    
    cout << output  << endl;
    
}
