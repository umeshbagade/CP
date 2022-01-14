#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n,rev=0,i,j,temp;
    cin>>n;
    vector<long long> budget(n);
    for(i=0;i<n;i++)
        cin>>budget[i];
    sort(budget.begin(),budget.end());
    for(i=0,j=n;i<n;i++,j--)
        rev = (budget[i]*j>rev)?budget[i]*j:rev;
    cout<<rev;
	return 0;
}
