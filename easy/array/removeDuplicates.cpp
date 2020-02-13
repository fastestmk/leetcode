#include<iostream>
#include<vector>
#include<cmath> 
#include<algorithm>
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

// int removeDuplicates(vector<int>& nums) {
//     int n = nums.size();
//     vector<int> vis(n, 0);
//     vector<int> res;
//     for(auto i : nums){
//         if(!vis[i]){
//             res.push_back(i);
//             vis[i] = 1;
//         }
//     }
//     for(auto i : res)
//         cout << i << ' ';
//     cout << endl;
//     return res.size();
// }

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if(n==0)
        return 0;
    int j = 0;
    for(int i = 0; i < n-1; ++i){
        if(nums[i] != nums[i+1]){
            nums[j] = nums[i];
            j++;
        }    
    }
    nums[j++] = nums[n-1]; 
    for(auto i : nums)
        cout << i << " ";
    cout << endl;
    return j;
}

int main(){
	//freopen("tree.in","r",stdin);
    //freopen("tree.out","w",stdout);
    //freopen("input.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> nums{1,2,3,3,4,5,5};
    cout << removeDuplicates(nums)  << endl;

}