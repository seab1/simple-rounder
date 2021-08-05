#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double number, mirror;
    
    cout << "Podaj liczbe:" << endl;
    cin >> number;
    mirror = number;
    
    if (number < 100)
    {
        number = trunc(mirror/10);
        
        while(mirror != 10*number && mirror != 10*(number + 0.5)) mirror--;
    }
    
    if (number >= 100 && number < 200)
    {
        number = trunc(mirror/10);
        
        while(mirror > 10*number) mirror--;
    }
    
    if (number >= 200)
    {
        double i = 5;
        double interval = 0.20;
        number = trunc(mirror/100);
        
        while(mirror < 100*(number + i*interval)) i--;
        while(mirror > 100*(number + i*interval)) mirror--;
    }
    
    cout << mirror;

    return 0;
}
