#include <vector>
#include<algorithm>
class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        int currentAltitude = 0;
        // Highest altitude currently is 0.
        int highestPoint = currentAltitude;
        
        for (int altitudeGain : gain) {
            // Adding the gain in altitude to the current altitude.
            currentAltitude += altitudeGain;
            // Update the highest altitude.
            highestPoint = std::max(highestPoint, currentAltitude);
        }
        
        return highestPoint;
    }
};