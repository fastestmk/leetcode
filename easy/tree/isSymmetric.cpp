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

bool check(TreeNode* root_1, TreeNode* root_2){
	if(root_1 == NULL && root_2 == NULL)
		return true;
	if(root_1 && root_2 && root_1->val == root_2->val)
		return check(root_1->left, root_2->right) && check(root_1->right, root_2->left);
	return false;
}

bool isSymmetric(TreeNode* root){
    return check(root, root);
}

int main(){
	//freopen("tree.in","r",stdin);
    //freopen("tree.out","w",stdout);
    //freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);
    cout << isSymmetric(root) << endl;
}