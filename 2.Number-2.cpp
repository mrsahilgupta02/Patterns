/*
123
456
789
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=0;
    
    int x=1;
    while(i<n)
    {
        int j=0;
        while(j<n)
         {
            cout<<x<<" ";
            x++;
            j++;
         }
         i++;
        // x=x+n;
         cout<<endl;

    }
}
int main()
{
    pattern(5);
}