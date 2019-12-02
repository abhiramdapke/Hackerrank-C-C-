#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    // Complete the code.
    int a,b,n;
    cin>>a;
    cin>>b;
    string words[] = {"one" ,"two" ,"three", "four", "five", "six", "seven","eight","nine"};
    for (int n=a;n<=b;n++)
        if (n<=9)
            cout<<words[n-1] << endl;
        else if (n>9 && n%2==0)
            cout<< "even" << endl;
        else if (n>9 && n%2!=0)
            cout<< "odd" << endl;
    return 0;
}

