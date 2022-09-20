/*

for n=3;

AAA
BBB
CCC


*/


#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=0;
    while(i<n)
    {
    char ch = 'A'+i;

        int j=0;
        while(j<n)
        {
            cout<<ch;
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