// Problem: Finding the Closest Pair

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Number of points?: ";
    cin >> n;

    int points[n][2];

    // input points
    cout << "Enter the points (x y) one by one separated by space:\n";
    for (int i = 0; i < n; i++) {
        cout << "Point " << i + 1 << " (x y): ";
        cin >> points[i][0] >> points[i][1];
    }

    int minDistSq = 1e9;
    int p1 = 0, p2 = 1;

    // compare every pair
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            int dx = points[j][0] - points[i][0];
            int dy = points[j][1] - points[i][1];

            int distSq = dx * dx + dy * dy;

            if (distSq < minDistSq) {
                minDistSq = distSq;
                p1 = i;
                p2 = j;
            }
        }
    }

    cout << "\nClosest Points:\n";
    cout << "Point " << p1 + 1 << " ("
         << points[p1][0] << ", "
         << points[p1][1] << ")\n";

    cout << "Point " << p2 + 1 << " ("
         << points[p2][0] << ", "
         << points[p2][1] << ")\n";

    cout << "Minimum Distance Squared: " << minDistSq << endl;

    return 0;
}
