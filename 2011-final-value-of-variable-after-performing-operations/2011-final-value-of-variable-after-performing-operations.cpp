class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int res = 0;
        for (string x: operations){
            if  (x[0] == '+' || x[2] == '+'){
                res++;
            }else{
                res--;
            }
        }
        return res;
    }
};