class Solution {
public:
    int maxBottlesDrunk(int n, int k) {
        int ans=n;
        int val=n;
        while(val>=k){
            val-=k;
            val++;
            ans++;
            k++;
        }
        return ans;
    }
};
