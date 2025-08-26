#include <iostream>
using namespace std;

int main() {
    int rows = 3;

    // Jagged array using pointers
    int* jagged[3];
    jagged[0] = new int[2];  // Row 0 → 2 cols
    jagged[1] = new int[4];  // Row 1 → 4 cols
    jagged[2] = new int[3];  // Row 2 → 3 cols

    // Fill values
    int value = 1;
    for (int i = 0; i < rows; i++) {
        int cols = (i == 0) ? 2 : (i == 1 ? 4 : 3);
        for (int j = 0; j < cols; j++) {
            jagged[i][j] = value++;
        }
    }

    // Print jagged array
    for (int i = 0; i < rows; i++) {
        int cols = (i == 0) ? 2 : (i == 1 ? 4 : 3);
        for (int j = 0; j < cols; j++) {
            cout << jagged[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
