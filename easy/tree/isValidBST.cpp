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

bool validate(TreeNode* root, TreeNode* &prev){
	if(root == NULL)
		return true;
	if(!validate(root->left, prev))
		return false;
	if(prev != NULL && prev->val >= root->val)
		return false;
	prev = root;
	return validate(root->right, prev);
}

bool isValidBST(TreeNode* root) {
	TreeNode* prev = NULL;
	return validate(root, prev);       
}
int main(){
	//freopen("tree.in","r",stdin);
    //freopen("tree.out","w",stdout);
    //freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TreeNode* root = new TreeNode(8);
    root->left = new TreeNode(5);
    root->right = new TreeNode(12);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(6);
    root->right->left = new TreeNode(10);
    root->right->right = new TreeNode(14);
    cout << isValidBST(root) << endl;
}