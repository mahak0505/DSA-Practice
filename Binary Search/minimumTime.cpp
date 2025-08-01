//Find the minimum time (in minutes) after which the total number of trips completed by all buses is at least totalTrips.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long low = 1;
        long long high = 1LL * (*min_element(time.begin(), time.end())) * totalTrips;

        while (low < high) {
            long long mid = low + (high - low) / 2;
            long long trips = 0;

            for (int t : time) {
                trips += mid / t;
            }

            if (trips >= totalTrips) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};

int main() {
    Solution sol;

    // Example test case:
    vector<int> time = {1, 2, 3};
    int totalTrips = 5;

    long long result = sol.minimumTime(time, totalTrips);
    cout << "Minimum time to complete " << totalTrips << " trips: " << result << endl;

    return 0;
}
