/*


   1            
  121
 12321
1234321


*/
#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=1;
    while(i<=n)
    {   
        int x=i;
        int j=i;
        int p=1;
        while(j<n)
        {
            cout<<" ";
            j++;
        }
        while(p<=x)
        {
            cout<<p;
            p++;
        }
        x--;
        while(x>0)
        {
            cout<<x;
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
