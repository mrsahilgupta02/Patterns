/*

    *
   ***
  *****
 *******
*********


*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=1;
    
    while(i<=n)
    {
        int x=2*(i-1)+1;
        int j=0;
        while(j<n-i)
        {
            cout<<" ";
            j++;
        }
        while(x>0)
        {
            cout<<"*";
            x--;
        }
        i++;
        cout<<endl;
    }
}
int main()
{
    pattern(4);
}