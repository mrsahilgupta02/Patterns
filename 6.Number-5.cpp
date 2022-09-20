/*

1
21
321
4321


*/






#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=1;
    while(i<=n)
    {int j=i;
        while(j>0)
        {
            cout<<j;
            j--;
        }
        i++;
        cout<<endl;
    }
}
int main()
{
    pattern(9);
}