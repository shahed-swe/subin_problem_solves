#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int number,takeOver,t_case;
    float sqrt, temp = 0;
    cin >> t_case;
    for(int i = 0; i < t_case; i++)
    {
        cin >>  number;
        sqrt = number / 2;
        while(sqrt != temp)
        {
            temp = sqrt;
            sqrt = (number / temp + temp) / 2;
        }
        takeOver = (int) sqrt;
        if(sqrt - takeOver == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
