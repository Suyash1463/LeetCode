class Solution {
public:
    bool isPossible(vector<int>& dist, int speed, double hour){
        double totalTime = 0;
        for(int i = 0; i < dist.size(); i++){
            double time = (dist[i] * 1.0) / speed;
            if (i != dist.size() - 1){
                totalTime += ceil(time);
            }
            else{
                totalTime += time;
            }
        }
        if(totalTime <= hour){
            return true;
        }else{
            return false;
        }
        
    }
    int minSpeedOnTime(vector<int>& dist, double hour) {
        int start = 1;
        int end = 1e7;
        int minSpeed = -1;
        while(start <= end){
            int mid = (start + end)/2;
            if(isPossible(dist, mid, hour)){
                minSpeed = mid;
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }
        return minSpeed;
    }
};
