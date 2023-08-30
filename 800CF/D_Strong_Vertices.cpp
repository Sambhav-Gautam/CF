#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

void dfs(int v, vector<vector<int>>& adj_list, vector<bool>& visited) {
    stack<int> st;
    st.push(v);
    visited[v] = true;

    while (!st.empty()) {
        int u = st.top();
        st.pop();

        for (int neighbor : adj_list[u]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                st.push(neighbor);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        vector<vector<int>> adj_list(n + 1);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i] >= a[j] && b[i] >= b[j]) {
                    adj_list[i + 1].push_back(j + 1);
                } else if (a[j] >= a[i] && b[j] >= b[i]) {
                    adj_list[j + 1].push_back(i + 1);
                }
            }
        }

        vector<int> strong_vertices;

        for (int i = 1; i <= n; i++) {
            vector<bool> visited(n + 1, false);
            if (!visited[i]) {
                dfs(i, adj_list, visited);
            }
        }

        for (int i = 1; i <= n; i++) {
            if (visited[i]) {
                strong_vertices.push_back(i);
            }
        }

        cout << strong_vertices.size() << endl;
        for (int v : strong_vertices) {
            cout << v << " ";
        }
        cout << endl;
    }

    return 0;
}
