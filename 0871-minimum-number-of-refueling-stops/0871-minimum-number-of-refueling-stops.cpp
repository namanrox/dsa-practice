class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> heap;
        int count = 0;
        for(int i = 0; i < stations.size(); i++) {
            if(startFuel < stations[i][0] and !heap.size())
                return -1;
            else if(startFuel < stations[i][0]) {
                while(heap.size() and startFuel < stations[i][0]) {
                    startFuel += heap.top();
                    count++;
                    heap.pop();
                }
                if(startFuel < stations[i][0])
                    return -1;
            }
            heap.push(stations[i][1]);
        }
        while(heap.size() and startFuel < target) {
            startFuel += heap.top();
            count++;
            heap.pop();
        }
        if(startFuel < target)
            return -1;
        else
            return count;
    }
};