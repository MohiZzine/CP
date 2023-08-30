////
//// Created by Mohi
////
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int const UNVISITED = -1;
//int const VISITED = 1;
//typedef vector<int> vi;
//map<char, int> nodes;
////set<int> nodes;
//vector<vi> adjList;
//vi dfs_num;
//
//void dfs(int u) {
//    dfs_num[u] = VISITED;
//
//    for (int i = 0; i < (int)adjList[u].size(); i++) {
//        int v = adjList[u][i];
//        if (dfs_num[v] == UNVISITED) dfs(v);
//    }
//}
//
//int trees = 0, acorns = 0;
//int main() {
//    int TC; cin >> TC;
//    while(TC--) {
//        int count = 0;
//        string s; cin >> s;
//        if (s[0] != '*') {
//            if (!nodes[s[1]] || !nodes[s[3]]) {
//                if (!nodes[s[1]]) {
//                    nodes[s[1]] = count++;
//                    vi list;
//                    list.push_back(s[3]);
//                    adjList.push_back(list);
//                }
//                if (!nodes[s[3]]) {
//                    nodes[s[3]] = count++;
//                    vi list;
//                    list.push_back(s[1]);
//                    adjList.push_back(list);
//                }
//            } else {
//                adjList[nodes[s[1]]].push_back(s[3]);
//            }
//        } else {
//            continue;
//        }
//
//        cin >> s;
//        for (int i = 0; i < s.length(); i += 2) {
//            if (nodes[s[i]]) continue;
//            else {
//                count++;
//                vi list;
//                adjList.push_back(list);
//            }
//        }
//
//        dfs_num.assign(count, UNVISITED);
//        for (int i = 0;i < count; i++) {
//            if (dfs_num[i] == UNVISITED && adjList[i].size() == 0) acorns++;
//            else if (adjList[i].size()) dfs(i), trees++;
//        }
//
//        printf("There are %d tree(s) and %d acorn(s).\n", trees, acorns);
//        adjList.clear(), dfs_num.clear(), nodes.clear();
//        trees = acorns = 0;
//    }
//
//    return 0;
//}

#include <bits/stdc++.h>

using namespace std;

map<char, int> nodes;
int numNodes;
vector<vector<int>> adjList(26);

int main() {
    int t; cin >> t;
    while(t--) {
        numNodes = 0;
        int x, y = 0, e = 0;
        string s;
        while(cin >> s) {
            if (s[0] == '*') break;
            if (nodes[s[1]] == 0) nodes[s[1]] = numNodes++;
            if (nodes[s[3]] == 0) nodes[s[3]] = numNodes++;
            adjList[nodes[s[1]]].push_back(nodes[s[3]]);
            adjList[nodes[s[3]]].push_back(nodes[s[1]]);
        }
        cin >> s;
        for (int i = 0; i < s.length(); i += 2) {
            if (!nodes[s[i]]) nodes[s[i]] = numNodes++;
        }

        for (int i = 0; i < numNodes; i++) {
            e += adjList[i].size();
            if (adjList[i].size() == 1) y++;
        }

        x = numNodes - e;
        for (auto d: nodes) {
            cout << d.first << " " << d.second << endl;
        }
        cout << numNodes << endl;

        for (int i = 0; i < numNodes; i++) {
            cout << s[i];
            for (int j = 0; j < adjList[i].size(); i++) {
                cout << " " << adjList[i][j];
            }
            cout << endl;
        }
        printf("There are %d tree(s) and %d acorn(s).\n", x, y);
        nodes.clear();
        for (int i = 0; i < numNodes; i++) adjList[i].clear();
    }
}