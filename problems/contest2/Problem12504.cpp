//
// Created by Student on 11/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

set<string> updated, added, removed;

//bool compareStrings(string s1, string s2) {
//    if ()
//}

void solve(map<string, string> old_d, map<string, string> new_d) {
    for (auto x: old_d) {
        if (new_d.count(x.first)) {
            if (new_d[x.first] != x.second) {
                updated.insert(x.first);
            }
        } else {
            removed.insert(x.first);
        }
    }
    for (auto y: new_d) {
        if (old_d.count(y.first)) continue;
        else {
            added.insert(y.first);
        }
    }

    bool no_change = updated.empty() && added.empty() && removed.empty();
    int first = 1;
    if (no_change) {
        cout << "No changes" << endl;
    } else {
        if (!added.empty()) {
            cout << '+';
            for (auto x: added) {
                if (first++ > 1) cout << ",";
                cout << x;
            }
            first = 1;
            cout << "\n";
        }
        if (!removed.empty()) {
            cout << '-';
            for (auto x: removed) {
                if (first++ > 1) cout << ",";
                cout << x;
            }
            first = 1;
            cout << endl;
        }
        if (!updated.empty()) {
            cout << "*";
            for (auto x: updated) {
                if (first++ > 1) cout << ",";
                cout << x;
            }
            first = 1;
            cout << endl;
        }
    }

 }

int main() {
    int cas = 1, i = 0;
    string old, nouv;
    map<string, string> old_dict, new_dict;


    int TC; cin >> TC;
    while(TC--) {
        bool vals;
        cin >> old;
        string key = "", value = "";
        while(i < old.size()) {
            if (i == 0 || old[i] == ',') {
                key = ""; value = "";
                i++; vals = false; continue;
            }
            if (old[i] == '}') break;
            while(old[i] != ':' && !vals) {
                key += old[i];
                i++;
            }
            if (old[i] == ':') {
                vals = true;
                i++;
                while(old[i] != ',' && old[i] != '}') {
                    value += old[i];
                    i++;
                }
                vals = false;
                old_dict[key] = value;
                continue;
            }
        }
        i = 0;
        key = ""; value = "";
        cin >> nouv;
        while(i < nouv.size()) {
            if (i == 0 || nouv[i] == ',') { i++; vals = false; continue;}
            if (nouv[i] != ':' && !vals) {
                key += nouv[i];
                i++;
            } else if (nouv[i] == ':') {
                vals = true;
                i++;
                while(nouv[i] != ',' && nouv[i] != '}'){
                    value += nouv[i];
                    i++;
                }
                vals = false;
                new_dict[key] = value;
                value = ""; key = "";
                i++;
            }
        }
        if (cas++ > 1) cout << "\n";
        solve(old_dict, new_dict);
        old_dict.clear(); new_dict.clear();
        added.clear(); updated.clear(); removed.clear();


    }
    return 0;
}