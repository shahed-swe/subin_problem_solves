#include <iostream>

using namespace std;

int main(){
    int n,t;
    cin >> t;
    for(int i = 0;i < t;i++){
        cin >> n;
        if(n % 2 == 0){
            cout << "even" << endl;
        }
        else
            cout << "odd" << endl;
    }
    return 0;
}
