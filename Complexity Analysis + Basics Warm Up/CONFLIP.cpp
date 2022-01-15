#include<iostream>
using namespace std;

int main()
{
  int t,j,g,i,n,q,answer;
  cin>>t;
  while(t>0)
  {
    cin>>g;
    for(j=0;j<g;j++)
    {
      cin>>i>>n>>q;
      answer = (n%2==0 || i==q)?n/2:(n+1)/2;
      cout<<answer<<endl;
    }
    t--;
  }
}
