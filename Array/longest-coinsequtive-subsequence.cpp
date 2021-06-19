int findLongestConseqSubseq(int arr[], int N)
    {
      set<int> _set;
      for(int i=0;i<N;i++)
        
        _set.insert(arr[i]);
        int ans = INT_MIN;
      for(int i=0;i<N;i++)
      {
          if(_set.find(arr[i]-1)==_set.end())
          {
              int j = arr[i]+1;
              while(_set.find(j)!=_set.end())
              j++;
              ans= max(ans, j-arr[i]);
          }
      }
      return ans;
    }
};