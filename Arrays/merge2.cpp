// Q.1 (a) Merge two sorted arrays by removing duplicates
#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeWithoutDuplicates(const vector<int>& a, const vector<int>& b) {
    int i = 0, j = 0;
    vector<int> result;

    while (i < a.size() && j < b.size()) {
        // If both are equal, add once and move both
        if (a[i] == b[j]) {
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++;
            j++;
        }
        else if (a[i] < b[j]) {
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++;
        }
        else {
            if (result.empty() || result.back() != b[j])
                result.push_back(b[j]);
            j++;
        }
    }

    // Add remaining elements from a
    while (i < a.size()) {
        if (result.empty() || result.back() != a[i])
            result.push_back(a[i]);
        i++;
    }

    // Add remaining elements from b
    while (j < b.size()) {
        if (result.empty() || result.back() != b[j])
            result.push_back(b[j]);
        j++;
    }

    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 5, 7};
    vector<int> arr2 = {2, 3, 4, 6, 7, 8};

    vector<int> merged = mergeWithoutDuplicates(arr1, arr2);

    cout << "Merged array without duplicates: ";
    for (int val : merged) {
        cout << val << " ";
    }
}
