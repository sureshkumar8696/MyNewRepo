#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int factorial= 1;
    // while (n>0)
    // {
    //     factorial = factorial*n;
    //     n--;
    // }
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial*i;
    }
    
    cout<<factorial;
    return 0;
}
