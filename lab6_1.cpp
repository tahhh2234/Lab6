#include<iostream>
using namespace std;

int main(){
    int x;
    int z;
    int num[x];
    while(num[x] != 0){
        cout << "Enter an integer: ";
        cin >> num[x];
        z++;
    }

    cout << "#Even numbers = ";
    int even = -1;
    int i = 0;
    while(i < z){
        if(num[i]%2 == 0){
            even++;
        }
        i++;
    }
    cout << even << endl;

    cout << "#Odd numbers = ";
    int odd = 0;
    int y = 0;
    while(y < z){
        if(num[y]%2 != 0){
            odd++;
        }
        y++;
    }
    cout << odd;

    return 0;
}
