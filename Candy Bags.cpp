#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,i,a;
    cin>>n;
    a=n*n;
   /// cout<<a/2<<endl;
    for(i=1;i<=a;i++)
    {
        cout<<i<<" "<<a<<endl;
        a--;
    }
}
