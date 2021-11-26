#include<iostream>
using namespace std;

int main(){
    int num, even = -1, odd = 0;;
    cout << "Enter an integer: ";
    cin >> num;
        if(num%2 == 0){
            even++;
        }else{
            odd++;
        }
        
    while(num != 0){
        cout << "Enter an integer: ";
        cin >> num;
        if(num%2 == 0){
            even++;
        }else{
            odd++;
        }
        
    }

    cout << "#Even numbers = ";
    cout << even << endl;
    cout << "#Odd numbers = ";
    cout << odd;

    return 0;
}
