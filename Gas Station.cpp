class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum = 0;
        int diff = 0;
        int pos = -1;
        for(int i=0; i < gas.size(); i++) {
            sum += gas[i] - cost[i];
            diff += gas[i] - cost[i];
            if(diff<0){
                diff = 0;
                pos = i;
            }
        }
        if(sum < 0)
            return -1;
        else
            return pos+1;
    }
};
