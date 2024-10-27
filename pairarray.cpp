#include<bits/stdc++.h>
using namespace std;
void findPair(int nums[], int n , int target)
{
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        if(mp.find(target - nums[i])!=mp.end()) {
            cout<<"Pair found "<<nums[mp[target-nums[i]]]<<" "<<nums[i]<<endl;
            return;
        }
        mp[nums[i]] = i;
    }
    cout<<"pair couldn't found"<<endl;
}
int main()
{
    int nums[] = {  8, 7, 2, 5, 3, 1 };
    int target = 10;

    int n = sizeof(nums)/sizeof(nums[0]);
    findPair(nums, n, target);
    return 0;
}
