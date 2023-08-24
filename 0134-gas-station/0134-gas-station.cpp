class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost){
            int totalGas = 0;
    int currentGas = 0;
    int startIdx = 0;

    for (int i = 0; i < gas.size(); ++i) {
        totalGas += gas[i] - cost[i];
        currentGas += gas[i] - cost[i];

        if (currentGas < 0) {
            currentGas = 0;
            startIdx = i + 1;
        }
    }

    if (totalGas < 0) {
        return -1;
    } else {
        return startIdx;
    }
    }
};