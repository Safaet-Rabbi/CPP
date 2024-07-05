#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> containers(m);

    for (int i = 0; i < m; ++i) {
        int ai, bi;
        cin >> ai >> bi;
        containers[i] = make_pair(ai, bi);
    }

    // Sort containers based on the number of matches per matchbox (bi)
    sort(containers.begin(), containers.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second; // sort by bi in descending order
    });

    long long total_matches = 0;
    int remaining_matchboxes = n;

    for (int i = 0; i < m && remaining_matchboxes > 0; ++i) {
        int ai = containers[i].first;
        int bi = containers[i].second;

        // Calculate maximum matchboxes we can take from this container
        int matchboxes_taken = min(remaining_matchboxes, ai);

        // Update remaining matchboxes
        remaining_matchboxes -= matchboxes_taken;

        // Add matches to total
        total_matches += (long long)matchboxes_taken * bi;
    }

    // Output the result
    cout << total_matches << endl;

    return 0;
}
