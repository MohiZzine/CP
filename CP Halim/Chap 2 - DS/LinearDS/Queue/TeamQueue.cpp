//
// Created by Student on 10/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int teamBelongTo[1000001];
queue<int> teamQueue[1001];

//int find_team(int x, vector<unordered_set<int>> teams) {
//    for (int i = 0; i < teams.size(); i++) {
//        if (teams[i].count(x)) return i;
//    }
//}

int main() {
    int T, cas = 0;
    while(scanf("%d", &T), T) {
        for (int i = 0; i < T; i++) {
            int t;
            cin >> t;
            while(!teamQueue[i].empty())
                teamQueue[i].pop();
            for (int j = 0; j < t; j++) {
                int elem;
                cin >> elem;
                teamBelongTo[elem] = i;
            }
        }

        queue<int> combinedQueue;

        printf("Scenario #%d\n", ++cas);

        string s;
        while (cin >> s && s[0] != 'S') {
            if (s[0] == 'E') {
                int n;
                cin >> n;
                int team = teamBelongTo[n];
                if (teamQueue[team].empty()) {
                    combinedQueue.push(team);
                }
                teamQueue[team].push(n);
            } else if (s[0] == 'D') {
                int team = combinedQueue.front();
                int num = teamQueue[team].front();
                teamQueue[team].pop();
                if (teamQueue[team].empty())
                    combinedQueue.pop();
                printf("%d\n", num);
            }
        }
        printf("\n");
    }









//    int T, i = 0;
//    while(scanf("%d", &T), T) {
//        vector<unordered_set<int>> teams;
//        for (int i = 0; i < T; i++) {
//            int n; cin >> n;
//            unordered_set<int> team;
//            while(n--) {
//                int player; cin >> player;
//                team.insert(player);
//            }
//            teams.push_back(team);
//        }
//        printf("Scenario %d\n", ++i);
//        int nb_teams = 0;
//        queue<int> rank;
//        string s;
//        vector<queue<int>> q(T);
//        while(cin >> s && s != "STOP") {
//            int n; cin >> n;
////            queue<int> q, printed;
//            if (s == "ENQUEUE") {
//                int team = find_team(n, teams);
//                if (q[team].empty()) { q[team].push(n); nb_teams++; }
//                else { q[team].push(n); }
//            }
//            else if (s == "DEQUEUE") {
//                for (int k = 0; k < nb_teams; k++) {
//                    if (!q[k].empty()) {
//                        printf("%d\n", q[k].front());
//                        q[k].pop();
//                        break;
//                    }
//                    else k++;
//                }
////                int n = printed.front(); printed.pop();
////                printf("%d\n", n);
//            }
//        }
//    }
    return 0;
}
