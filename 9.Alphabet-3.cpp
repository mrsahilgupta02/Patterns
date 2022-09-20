#include<bits/stdc++.h>
using namespace std;

void pattern(int n)
{
    int i=0;
    char ch='A';
    while(i<n)
    {int j=0;
        while(j<n)
        {
            cout<<ch;
            j++;
            ch++;
        }
        i++;
        cout<<endl;
    }

}

int main()
{
    pattern(3);
}