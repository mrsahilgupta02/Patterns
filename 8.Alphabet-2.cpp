/*

ABC
ABC
ABC
*/

#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=0;
    while(i<n)
    {
        int j=0;
        
        while(j<n)
        {
            char ch='A'+j;
            cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern(n);
}
