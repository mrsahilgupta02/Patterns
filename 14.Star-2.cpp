/*


****
***
**
*

*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=0;
    while(i<n)
    {int j=i;
        while(j<n)
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
    pattern(4);
}