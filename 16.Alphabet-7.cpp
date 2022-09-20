/*

1234
 234
  34
   4


*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=0;
    while(i<n)
    {
        int j=i+1;
        int x=i;
        while(x>0)
        {
            cout<<" ";
            x--;
        }
        while(j<=n)
        {
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
}

int main()
{
    pattern(4);
}