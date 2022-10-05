//Problem Statement: You are given an array of integers 'candidates' and an integer 'target'. You have to find out all the possible combinations of 'candidates' elements that sum to give 'target'. You may use the element in 'candidate' any number of times. 

#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>& candidates, int target, int ind, vector<int>& output, vector<vector<int>>& ans){
        if(ind == candidates.size()){
            if(target==0)
                ans.push_back(output);
            return ;
        }
        
        if(candidates[ind]<=target){
         
            output.push_back(candidates[ind]);
            solve(candidates,target-candidates[ind],ind,output,ans);
            output.pop_back();
        }
        
        solve(candidates,target,ind+1,output,ans);
}
    
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;   
        vector<int> output;   
        int ind = 0; 

        solve(candidates,target,ind,output,ans);
        return ans;
}

int main() {
    
    vector<int> candidates = {2,3,4,5};
    int target = 7;   //target of each combination sum
   
    vector<vector<int>> ans = combinationSum(candidates,target);
    
    for(int i=0;i<ans.size();i++){
        cout<<"[";
        for(int j=0;j<ans[i].size();j++){
            if(j==ans[i].size()-1) cout<<ans[i][j];
            else cout<<ans[i][j]<<",";
        }
        cout<<"]"<<" ";
    }
    
    return 0;
}
