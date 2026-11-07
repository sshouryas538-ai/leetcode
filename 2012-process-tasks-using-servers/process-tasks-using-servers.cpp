class Solution {
public:
    vector<int> assignTasks(vector<int>& servers, vector<int>& tasks) {
        vector<int>ans;
       priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > available;
        priority_queue<
            tuple<long long,int,int>,
            vector<tuple<long long,int,int>>,
            greater<tuple<long long,int,int>>
        > busy;
        for(int i=0;i<servers.size();i++){
            available.push({servers[i],i});
        }
        long long currentTime = 0;
        for(int i=0;i<tasks.size();i++){
            currentTime = max(currentTime, (long long)i);

            while(!busy.empty() && get<0>(busy.top()) <= currentTime){
                auto [time, weight, idx] = busy.top();
                busy.pop();
                available.push({weight, idx});
            }

            if(available.empty()){
                currentTime = get<0>(busy.top());
                while(!busy.empty() && get<0>(busy.top()) <= currentTime){
                    auto [time,weight,idx] = busy.top();
                    busy.pop();
                    available.push({weight,idx});
                }
            }

            auto [weight, idx] = available.top();
            available.pop();
            ans.push_back(idx);
            long long finishTime = currentTime + tasks[i];
            busy.push({finishTime, weight, idx});
        }
        return ans;
    }
};