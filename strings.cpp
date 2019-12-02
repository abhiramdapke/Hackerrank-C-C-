#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
    cin>>a;
    cin>>b;
    string c = a+b;
    int i,j;
    i = a.size();
    j = b.size();
    cout<<i<<' '<<j<<endl;
    cout<<c<<endl;
    char temp =a[0];
    a[0]=b[0];
    b[0] = temp;
    cout<<a<<' '<<b<<endl;

  
    return 0;
}
