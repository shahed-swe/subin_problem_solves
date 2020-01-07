#include <iostream>

using namespace std;

int main(){
    int cnt = 0;
    for(int i = 1000 ; i > 0;i--){
        if(cnt >= 5){
            cnt = 0;
            cout << endl;
            cout << i << "\t";
        }
        else{
            cout << i << "\t";
        }
        cnt++;
    }
    cout << endl;
    return 0;
}
