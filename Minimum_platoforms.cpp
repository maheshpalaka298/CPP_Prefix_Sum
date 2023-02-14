

int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<int>vc(2401,0);
    	for (int i=0;i<n;i++){
    	    vc[arr[i]]+=1;
    	    vc[dep[i]+1]-=1;
    	}
    	
    	//prefix sum
    	for (int i=1;i<2401;i++){
    	    vc[i]=vc[i-1]+vc[i];
    	}
    	int ma=*max_element(vc.begin(),vc.end());
    	return ma;
 
  
//   n = 6 
// arr[] = {0900, 0940, 0950, 1100, 1500, 1800}
// dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
