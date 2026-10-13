/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
  TreeNode* solve(vector<int>& inorder, vector<int>& postorder,int &index,int inorderStart,int inorderEnd,int n,map<int,int>& findpos){
    if(index<0 || inorderStart>inorderEnd) return NULL;
    int ele=postorder[index--];
      TreeNode*root=new TreeNode (ele);
      int pos=findpos[ele];
       root->right=solve(inorder,postorder,index,pos+1,inorderEnd,n,findpos);
        root->left=solve(inorder,postorder,index,inorderStart,pos-1,n,findpos);
       return root;
  }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        int index=n-1;
        map<int,int> findpos;
        for(int i=0;i<n;i++){
            findpos[inorder[i]]=i;
        }
        return solve(inorder,postorder,index,0,n-1,n,findpos);
    }
};