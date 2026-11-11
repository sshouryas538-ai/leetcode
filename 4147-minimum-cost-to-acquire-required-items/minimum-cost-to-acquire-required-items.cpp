class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long checkboth = min(need1 , need2);
        long long costofboth = checkboth*costBoth + (need1 - checkboth)*cost1 + (need2 - checkboth)*cost2;
        long long cost = 1LL*cost1*need1 + 1LL*cost2*need2;
        long long check = 1LL*costBoth*max(need1,need2);
        return min({costofboth,check,cost});
    }
};