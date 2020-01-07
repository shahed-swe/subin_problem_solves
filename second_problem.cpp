#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    int t,shift;
    char mystring[100],ch;
    cin >> t;
    for(int i = 0;i < t;i++){
        cin >> mystring;
        ch = mystring[strlen(mystring) - 1];
        shift = (int) ch;
        if(shift >= 0){
            if(shift % 2 == 0){
                cout << "even" << endl;
            }
            else
                cout << "odd" << endl;
        }
    }
    return 0;
}
