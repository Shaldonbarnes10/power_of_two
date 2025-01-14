#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the digit to check : "<< endl;
    cin >> n;
    if (n>0 && (n & (n-1))){
        cout << "The given number is a power of 2"<<endl;
    }
    else{
        cout << "The given number is not a power of 2"<<endl;
    }
    return 0;
}