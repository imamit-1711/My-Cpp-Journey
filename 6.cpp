/* Program to compare to 2 numbers */

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<" Enter the value of a: ";
    cin >> a;
    cout<<"Enter the value of b: ";
    cin >> b;

    if(a>b){
        cout<<"a is greater than b"<<endl;
    }
    if(a<b){
        cout<<"b is greater than a"<<endl;
    }
    return 0;
}