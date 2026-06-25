class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>>cars(speed.size());
        for(int i=0; i<speed.size(); i++){
            double arriveTime= (double)(target-position[i])/ (double) speed[i];
            pair<int, double>newPair= {position[i], arriveTime};
            cars[i]= newPair;
        }
        sort(cars.begin(), cars.end());
        int numFleets=1;
        double earliestArrive= cars.back().second;
        for(int i=cars.size()-2; i>=0; i--){
            if(cars[i].second>earliestArrive){
                numFleets++;
                earliestArrive= cars[i].second;
            }
        }
        return numFleets;
    }
};
