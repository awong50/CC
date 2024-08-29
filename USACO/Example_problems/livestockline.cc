#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

int main() {
    // ifstream inFile("lineup.in");
    // ofstream outFile("lineup.out");

    int N;
    cin >> N;

    map<string, set<string>> adjacencyList;
    map<string, int> inDegree;

    // Initialize inDegree and adjacencyList
    vector<string> cows = {"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy", "Sue"};
    for (const string& cow : cows) {
        inDegree[cow] = 0;
    }

    // Read constraints and build the graph
    for (int i = 0; i < N; ++i) {
        string x, mustBe, milked, beside, y;
        cin >> x >> mustBe >> milked >> beside >> y;
        adjacencyList[x].insert(y);
        inDegree[y]++;
    }

    // Perform topological sorting
    set<string> result;
    queue<string> q;

    for (const auto& entry : inDegree) {
        if (entry.second == 0) {
            q.push(entry.first);
        }
    }

    while (!q.empty()) {
        string currentCow = q.front();
        q.pop();
        result.insert(currentCow);

        for (const string& neighbor : adjacencyList[currentCow]) {
            inDegree[neighbor]--;
            if (inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    // Output the result to file
    for (const string& cow : result) {
        cout << cow << endl;
    }

    return 0;
}