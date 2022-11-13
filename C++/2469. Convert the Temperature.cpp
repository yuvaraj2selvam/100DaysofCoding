class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>v;
        double t=celsius + 273.15;
        double f=celsius * 1.80 + 32.00;
            
            return {t,f};
    }
};
