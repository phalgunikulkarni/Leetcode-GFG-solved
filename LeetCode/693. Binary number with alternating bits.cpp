class Solution {
public:
    bool hasAlternatingBits(int n) {
        bool res= false;

        if(n == 1){
            return true;
        }

        int a = n & 1;
        n = n>>1;
        
        while(n!=0){
        int b = n & 1;
        n>>=1;
        if(b!=a){
                res= true;
                a = b;
            }
        else{
            res= false;
            break;
        }}
        return res;
    }
};
