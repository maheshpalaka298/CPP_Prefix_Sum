int findMax(int n, int m, int a[], int b[], int k[])
	{
	    // Your code goes here
	    //int maxi=INT_MIN;
	    int A[n+1]={0};
	    int prefix[n+1]={0};
	    int i=0;
	    while(m--){
	        A[a[i]]+=k[i];
	        A[b[i]+1]-=k[i];
	        i++;
	    }
	    prefix[0]=A[0];
	    for (int i=1;i<n;i++){
	        //prefix[i]=prefix
	        prefix[i]=prefix[i-1]+A[i];
	        
	    }
	    //for (int i=0;i<n;)
	    int maxi= *max_element(prefix,prefix+n+1);
	    /*for (int i=0;i<n;i++){
	        maxi=max(maxi,prefix[i]);
	    }*/
	    return maxi;
  
//   N = 5, M = 3, a[] = {0, 1, 2}
// b[] = {1, 4, 3}, k[] = {100, 100, 100}
