/*


1
23
456
78910


*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{int i=1;
int count=1;
    while(i<=n)
    {
        int j=0;
        while(j<i)
        {
            cout<<count;
            count++;
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