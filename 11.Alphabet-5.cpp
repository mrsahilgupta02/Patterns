/*
for n=4

D
CD
BCD
ABCD



*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=0;
    while(i<n)
    {int j=0;
      char ch='A'+n-i-1;
        while(j<=i)
        {
            cout<<ch;
            j++;
            ch++;
        }
        i++;
        cout<<endl;
    }
}

int main()
{
    pattern(4);
}