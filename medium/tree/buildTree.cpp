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

int preIndex = 0;

TreeNode* makeTree(vector<int>& preorder, vector<int>& inorder, int inStart, int inEnd){
	if(inStart > inEnd)
		return NULL;

	int currNode = preorder[preIndex++];
	TreeNode* newTree = new TreeNode(currNode);

	if(inStart == inEnd) //only one node
		return newTree;

	int inorderIndex = m[currNode];
	newTree->left = makeTree(preorder, inorder, inStart, inorderIndex-1);
	newTree->right = makeTree(preorder, inorder, inorderIndex+1, inEnd);
	return newTree;
}

void inorderIndexing(vector<int>& inorder){
	for(int i = 0; i < inorder.size(); ++i){
		m[inorder[i]] = i;
	}
}

TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
	int n = preorder.size();
	inorderIndexing(inorder);
	return makeTree(preorder, inorder, 0, n-1);
}

void printPreorder(TreeNode* root){
	if(root == NULL){
		return;
	}
	cout << root->val << " ";
	printPreorder(root->left);
	printPreorder(root->right);
}

int main(){
	//freopen("tree.in","r",stdin);
    //freopen("tree.out","w",stdout);
    //freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

  	vector<int> preorder{3,9,20,15,7}, inorder{9,3,15,20,7};
   	TreeNode* root =  buildTree(preorder, inorder);
   	cout << root->val <<endl;
   	printPreorder(root);
   	cout << endl;
}