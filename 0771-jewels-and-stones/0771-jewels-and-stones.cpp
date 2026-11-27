class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int res = 0;
        for (auto x: jewels){
            for (auto y: stones){
                if (x == y){
                    res++;
                }
            }
        }
        return res;
    }
};