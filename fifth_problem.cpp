
#include <iostream>

using namespace std;

void make_box(int n);

int main()
{
    int n,t;
    cin >> t;
    for(int m = t; m > 0; m--)
    {
        cin >> n;
        make_box(n);
        if(m > 1){
            cout << endl;
        }
    }
    return 0;
}

void make_box(int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
}
