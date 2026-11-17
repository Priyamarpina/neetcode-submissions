class Solution {
public:
    int minBitFlips(int start, int goal) {
        int diff=0;
        while(start!=0 || goal!=0){
            int sModulo = start%2;
            start=start/2;
            int gModulo = goal%2;
            goal=goal/2;
            if(sModulo !=gModulo){
                diff++;
            }
        }
        return diff;
    }
};
