class Solution {
public:
    bool isHappy(int n) {
        while (n != 1){
            int c = 0;
            while (n > 0){
                c += pow((n % 10), 2);
                n = n / 10;
            }
            n = c;
            if (n == 89){
                return false;
            }
        }
        return true;
    }
};