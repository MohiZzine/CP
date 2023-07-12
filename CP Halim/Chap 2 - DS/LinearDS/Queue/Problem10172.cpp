//
// Created by Student on 11/07/2023.
//

#include <bits/stdc++.h>

using namespace std;

int main()
{

    int SETS;
    cin >> SETS;

    while(SETS--)
    {
        int n;
        int s;
        int q;
        cin >> n >> s >> q;

        stack<int> carr;
        vector< queue<int> > st(n);

        for(int i = 0; i < n; ++i)
        {
            int boxes;
            cin >> boxes;

            while(boxes--)
            {
                int t;
                cin >> t;
                st[i].push(t - 1);

            }
        }
        int T = 0;
        bool empty = 0;
        int pos = 0;

        while(!empty)
        {
            while(!carr.empty() && (carr.top() == pos || st[pos].size() < q))
            {
                if(carr.top() != pos)
                    st[pos].push(carr.top());

                ++T;
                carr.pop();
            }

            while(carr.size() < s && !st[pos].empty())
            {
                carr.push(st[pos].front());

                ++T;
                st[pos].pop();
            }

            empty = carr.empty();

            if(empty)
            {
                for(int i = 0; i < n; ++i)
                {
                    if(!st[i].empty())
                    {
                        empty = 0;
                        break;
                    }
                }
            }

            if(!empty)
            {
                T += 2;
                pos = (pos + 1) % n;
            }
        }

        cout << T << "\n";
    }

    return 0;
}


