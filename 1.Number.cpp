/*   54321
     54321
     54321
     54321
     54321
*/



#include<bits/stdc++.h>   //we have to take n from user and print n lines from n to 1
using namespace std;                          

void pattern(int n)
{
    int i=0;
    while(i<n)
    {
        for(int j=n;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
        i++;
    }
    
}

int main()
{
    int n;
    cout<<"enter the value of pattern";
    cin>>n;
    pattern(n);

}


