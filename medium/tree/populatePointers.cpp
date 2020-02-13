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
	TreeNode* next;
	TreeNode(int x): val(x), left(NULL), right(NULL), next(NULL) {}
};

TreeNode* getNextNode(TreeNode* node){
	TreeNode* nextNode = node->next; // node in current level
	while(nextNode){
		if(nextNode->left)
			return nextNode->left;
		if(nextNode->right)
			return nextNode->right;
		nextNode = nextNode->next;
	}
	return NULL;
}

TreeNode* connect(TreeNode* root){
	if(root == NULL)
		return NULL;
	root->next = NULL;
	while(root){
		TreeNode* temp = root;
		while(temp){
			if(temp->left){
				if(temp->right)
					temp->left->next = temp->right;
				else
					temp->left->next = getNextNode(temp);
			}
			if(temp->right)
				temp->right->next = getNextNode(temp);
			temp = temp->next; // next in current level
		}
		if(root->left)
			root = root->left;
		else if(root->right)
			root = root->right;
		else
			root = getNextNode(root);
	}
	return root;	
}

void perorder(TreeNode* root){
	if(root == NULL)
		return;
	cout << root->val << " ";
	perorder(root->left);
	perorder(root->right);
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
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    TreeNode* node = connect(root);

    perorder(node);
    cout << endl;
}