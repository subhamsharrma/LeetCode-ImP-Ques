class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue<long long>pq;
        long long sum = 0;
        for(int i = 0; i < target.size(); i++){
            pq.push(target[i]);
            sum += target[i];
        }

        while(true){
            long long max = pq.top();
            pq.pop();
            long long rest = sum - max;

            if(max == 1)return true;
            if(rest == 1)return true;

            if(rest == 0 || max <= rest)return false;

            long long prev = max % rest;
            if(prev == 0)
            return false;

            pq.push(prev);
            sum = rest + prev;
        }
    }
};