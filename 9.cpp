/* print the sum from 1 to n */

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    int i = 1;
    while (i<=n) {
        sum= sum+i;
        i = i+1;
    }
    cout<<"sum from "<< 1 << "to "<< n << "= "<<sum<<endl;
    return 0;
}