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

unordered_map<int, int> m;

struct TreeNode{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x): val(x), left(NULL), right(NULL){}
};


int idx = 1;
int element;
void Inorder(TreeNode* root, int k){
	if(root == NULL){
		return;
	}
	Inorder(root->left, k);
	if(idx++ == k)
		element = root->val;
	Inorder(root->right, k);
}

int kthsmallest(TreeNode* root, int k){
	Inorder(root, k);
	return element;
}


int main(){
	//freopen("tree.in","r",stdin);
    //freopen("tree.out","w",stdout);
    //freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

 	TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(3);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(2);
    root->left->right = new TreeNode(4);
    root->left->left->left = new TreeNode(1);

   	cout << kthsmallest(root, 3) << endl;
}