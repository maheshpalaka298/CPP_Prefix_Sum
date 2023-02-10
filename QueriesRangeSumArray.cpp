#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int arr[]={2,4,7,5,1,3,8,9};
    int n=8;
    vector<int>vc(n,0);
    int q;
    cin>>q;
    while(q)
    {
        int l,r,x;
        cin>>l>>r>>x;
        vc[l]+=x;
        vc[r+1]-=x;
        q--;
    }
    for (int i=1;i<n;i++)
        {
            vc[i]=vc[i-1]+vc[i];

        }
    for (int i=0;i<n;i++){
            cout<<arr[i]+vc[i]<<" ";
        }
}
