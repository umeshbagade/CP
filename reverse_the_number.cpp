#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,num,rem,rev;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        rev =0;
        while(num!=0)
        {
        
            rem = num%10;
            num = num/10;
            rev = rev*10+ rem;
        }
        cout<<rev<<endl;
    }
	return 0;
}
