#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    if(a>b && a>c && a>d)
        return a;
    else if(b>a && b>c && b>d)
        return b;
    else if(c>a && c>b && c>d)
        return c;
    else
        return d;
}
int main() {
    int maxi,a,b,c,d;
    cin>>a>>b>>c>>d;
    maxi=max_of_four(a,b,c,d);
    cout<<maxi<<endl;
    return 0;
}
