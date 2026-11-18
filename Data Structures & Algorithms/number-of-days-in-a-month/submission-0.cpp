class Solution {
public:
    int numberOfDays(int year, int month) {
        int isLeap=0;
        if((year%4==0 && year%100!=0)|| (year%400==0)){
            isLeap=1;
        }
        vector<int> months = {31,28,31,30,31,30,31,31,30,31,30,31};
        months[1]=months[1]+isLeap;
        return months[month-1];
    }
};
