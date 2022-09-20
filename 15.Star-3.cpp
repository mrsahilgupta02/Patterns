/*


****
 ***
  ** 
   *
   * 

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=0;
    while(i<n)
    {int j=i;
    int x=i;
        while(j>0)
        {
            cout<<" ";
            j--;
        }
        while(x<n)
        {
            cout<<"*";
            x++;
        }
        i++;
        cout<<endl;
    }
}

int main()
{
    pattern(4);

}