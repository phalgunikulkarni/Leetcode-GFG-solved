class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0, res = x ^ y;
        while(res!=0){
           int last = res & 1;
            if(last == 1)
                count++;
            res = res>>1;
        }
        return count;
    }
};
