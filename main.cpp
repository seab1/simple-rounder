#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number;
    double manipulator, decimalPart;
    
    cout << "Podaj liczbe:" << endl;
    cin >> number;
    
    if (number < 100)
    {
        manipulator = (double) number/10;
        number = (int) manipulator;
        decimalPart = manipulator - number;
        
        if (decimalPart < 0.25) decimalPart = 0;
        else if (decimalPart >= 0.25 && decimalPart < 0.75) decimalPart = 0.5;
        else if (decimalPart >= 0.75) decimalPart = 1.0;
        
        manipulator = 10*number + 10*decimalPart;
        cout << manipulator << endl;
    }
    
    if (number >= 100 && number < 200)
    {
        double indicator;
        
        manipulator = (double) number/100;
        number = (int) manipulator;
        decimalPart = manipulator - number;
        indicator = trunc(decimalPart*10);
        
        if (decimalPart - indicator*0.10 < 0.049) decimalPart = indicator*0.10;
        else decimalPart = indicator*0.10 + 0.10;
        
        manipulator = 100*number + 100*decimalPart;
        cout << manipulator << endl;
    }
    
    if (number >= 200)
    {
        double indicator;
        
        manipulator = (double) number/100;
        number = (int) manipulator;
        decimalPart = manipulator - number;
        indicator = trunc(decimalPart*10);
        
        if ((int) indicator % 2 == 0)
        {
           if (decimalPart - indicator*0.10 < 0.099) decimalPart = indicator*0.10;
           else decimalPart = indicator*0.10 + 0.20; 
        }
        else
        {
            if (decimalPart - indicator*0.10 <= 0) decimalPart = indicator*0.10 - 0.10;
            else decimalPart = indicator*0.10 + 0.10;
        }
        
        manipulator = 100*number + 100*decimalPart;
        cout << manipulator << endl;
    }

    return 0;
}
