/*

ABC
BCD
CDE


*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=0;
    while(i<n)
    {int j=0;
    char ch='A'+i;
        while(j<n)
        {
            cout<<ch;
            ch++;
            j++;
        }
        i++;
        cout<<endl;
    }
}

int main()
{
    pattern(5);
}