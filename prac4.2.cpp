#include<iostream>
#include<iomanip>
using namespace std;

inline int multi(int,int);

int main()
{
int a,b;
a=5;
b=6;
cout<<multi(a,b);
    return 0;
}
inline int multi(int x, int y){
return(x*y);
}