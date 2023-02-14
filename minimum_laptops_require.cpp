tatic bool comp(const pair<int,int>&a,const pair<int,int>&b)
    {
      if(a.first==b.first)
        return a.second<b.second;
      return a.fi
        
        //N = 3
start[] = {1, 2, 3}
end[] = {4, 4, 6}rst<b.first;
    }
    int minLaptops(int N, int start[], int end[]) {
        // Code here
        //int x=sizeof(start)/sizeof(start[0]);
        int t=0;
        vector<pair<int,int>>prefix;
        for (int i=0;i<N;i++){
            prefix.push_back({start[i],1});
            prefix.push_back({end[i],-1});
        }
        
        sort(prefix.begin(),prefix.end(),comp);
        int cnt=0;
        int maxi=0;
        for (int i=0;i<2*N;i++){
            maxi+=prefix[i].second;
            cnt=max(cnt,maxi);
        }
        
        return cnt;
      
        
 //GREEDY
        
        
  sort(start,start+N);
        sort(end,end+N);
        
        int cnt=1;
        int j=0;
        for (int i=1;i<N;i++){
            if (start[i]<end[j]){
                cnt++;
            }
            else{
                j++;
            }
        }
        return cnt;
        
//  N = 3
// start[] = {1, 2, 3}
// end[] = {4, 4, 6}
//       Expected Time Complexity: O(N*logN)
// Expected Auxiliary Space: O(N)
