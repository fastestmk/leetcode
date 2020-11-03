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

vector<vector<int>> res;

void makeZigzag(TreeNode* root, int depth){
	if(root == NULL)
		return;
	if(res.size() == depth)
		res.push_back(vector<int>());
	res[depth].push_back(root->val);
	makeZigzag(root->left, depth+1);
	makeZigzag(root->right, depth+1);
}

vector<vector<int> > zigzagLevelOrder(TreeNode* root){
	makeZigzag(root, 0);
	bool flag = false;
	for(int i = 0; i < res.size(); ++i){
		if(flag){
			reverse(res[i].begin(), res[i].end());
			flag = false;
		}
		else{
			flag = true;
			continue;
		}
	}
	return res;
}

void preorder(TreeNode* root){
	if(root == NULL)
		return;
	cout << root << " ";
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

    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->left->left = new TreeNode(10);
    root->left->left->left = new TreeNode(11);
    root->left->left->right = new TreeNode(12);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    vector<vector<int>> ans = zigzagLevelOrder(root);
    for(int i = 0; i < ans.size(); ++i){
    	for(auto j : ans[i])
    		cout << j << " ";
    	cout << endl;
    }
}