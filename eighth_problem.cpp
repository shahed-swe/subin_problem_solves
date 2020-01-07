#include <iostream>
#include <stdio.h>

using namespace std;

void sorting(int arr[]);

int main(){
    int t,arr[3];
    cin >> t;
    for(int i = 0;i < t;i++){
        for(int j = 0;j < 3;j++){
            cin >> arr[j];
        }
        sorting(arr);
        printf("Case %d: %d %d %d\n",i+1,arr[0],arr[1],arr[2]);
    }
    return 0;
}
void sorting(int arr[]){
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            if(arr[i] < arr[j]){
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
        }
    }
}
