/*


   *
  **
 ***
****


*/

#include<bits/stdc++.h>

using namespace std;


void pattern(int n)
{
    int i=1;
    while(i<=n)
    {int j=i;
     int x=i;
        while(j<n)
        {
            cout<<" ";
            j++;
        }
        while(x>0)
        {
            cout<<"*";
            x--;
        }
        cout<<endl;
        i++;
    }
}

int main()
{
    pattern(4);
}