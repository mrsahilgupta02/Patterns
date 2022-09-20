/*

*
**
***
****
*****

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=1;
    while(i<=n)
    {
        int j=0;
        while(j<i)
        {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }
}

int main()
{
    pattern(6);
}