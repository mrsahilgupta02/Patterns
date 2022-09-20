/*
for n=4


12344321
123**321
12****21
1******1

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=1;
    while(i<=n)
    {
        int j=1;
      int z=n-i+1;
      int x=2*(i-1);
     
        while(j<=n-i+1)
        {
            cout<<j;
            j++;
        }
        while(x)
        {
            cout<<"*";
            x--;
        }
        while(z)
        {
            cout<<z;
            z--;
        }
        i++;
        cout<<endl;


    }
}
int main()
{
    pattern(4);
}