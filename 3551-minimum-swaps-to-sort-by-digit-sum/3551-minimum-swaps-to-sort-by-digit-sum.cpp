class Solution {
public:
int digitsum(int n){
    int sum=0;
    while(n>0){
        int d=n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}
    int minSwaps(vector<int>& nums) {
      int n=nums.size();
       set<pair<int,int>>s;
        for(int i=0;i<n;i++){
            int d=digitsum(nums[i]);
            s.insert({d,nums[i]});
       }
      vector<int>sorted;
      for(auto i:s){
        sorted.push_back(i.second);
      }
      unordered_map<int,int>pos;
      for(int i=0;i<n;i++){
        pos[sorted[i]]=i;
      }
      vector<bool>visited(n,false);
      int swaps=0;
      for(int i=0;i<n;i++){
        if(visited[i] || pos[nums[i]]==i){
            continue;
        }
        int j=i;
        int cycle_size=0;
        while(!visited[j]){
            visited[j]=true;
            j=pos[nums[j]];
            cycle_size++;
        }
        swaps+=cycle_size-1;
      }
      return swaps;

    }
};