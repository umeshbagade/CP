#include<iostream>
using namespace std;

int main()
{
  int t,j,g,i,n,q;
  cin>>t;
  while(t>0)
  {
    cin>>g;
    for(j=0;j<g;j++)
    {
      cin>>i>>n>>q;
      //print value
      if(n%2==0)
      {
        cout<<n/2<<endl;
      }
      else
      {
        if(i==q)
        {
          cout<<n/2<<endl;
        }
        else
          cout<<(n+1)/2<<endl;
      }
    }
    t--;
  }
}
