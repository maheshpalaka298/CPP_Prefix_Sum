int longSubarrWthSumDivByK(int arr[], int n, int k)
	{
	    // Complete the function
	    unordered_map<int,int>mp;
	    mp[0]=-1;
	    int maxi=0;
	    int rem;
	    int su=0;
	    for (int i=0;i<n;i++){
	        su+=arr[i];
	        rem=su%k;
	        if (rem<0) rem+=k;
	        if (mp.count(rem))
	        {
    	        maxi=max(maxi,i-mp[rem]);
    	        continue;
	        }
	        mp[rem]=i;
	        
	        
	    }
	    return maxi;
