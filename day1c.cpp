#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    for(i=0,j=10,k=20;(i+j+k)<100;k--,j++,i+=k)
    cout<<i<<" "<<j<<" "<<k<<endl;
}