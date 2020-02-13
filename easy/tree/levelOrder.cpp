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

vector<vector<int> >res;
void preorder(TreeNode* root, int depth){
	if(root == NULL)
		return;

	if(res.size() == depth){
		res.push_back(vector<int>());
	}
	res[depth].push_back(root->val);	
	preorder(root->left, depth+1);
	preorder(root->right, depth+1);
}

vector<vector<int> > levelOrder(TreeNode* root){
	preorder(root, 0);
	return res;
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
    vector<vector<int> >vec = levelOrder(root);
    for(int i = 0; i < vec.size(); ++i){
    	for(auto i : vec[i])
    		cout << i << " ";
    	cout << endl;	 
    }
}