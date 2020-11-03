#include<iostream>
#include<vector>
#include<cmath> 
#include<algorithm>
#include<unordered_set>
#include<set>
#include<string>
#include<map>
#include<unordered_map>
#include<cstring>
#include<stack>
#include<queue>
#include<climits>

using namespace std;

#define ll long long

const int INF = 1e9+7;
const int mod = 1e9+7;
const int MAX = 1e5+5;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};

TreeNode* makeBST(int start, int end, vector<int>& nums){
	if(start > end)
		return NULL;
	int mid = (start+end)/2;
	TreeNode* root = new TreeNode(nums[mid]);
	root->left = makeBST(start, mid-1, nums);
	root->right = makeBST(mid+1, end, nums);
	return root;
}

TreeNode* sortedArrayToBST(vector<int>& nums) {
	int n = nums.size();
	return makeBST(0, n-1, nums);       
}

void preorder(TreeNode* root){
	if(root == NULL)
		return;
	cout << root->val << " ";
	preorder(root->left);
	preorder(root->right);
}

int main(){
	//freopen("tree.in","r",stdin);
    //freopen("tree.out","w",stdout);
    //freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums{-10, -3, -2, 0, 5, 9};
    TreeNode* root = sortedArrayToBST(nums);
    preorder(root);
}