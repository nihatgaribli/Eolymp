#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    unordered_map<int, int> team_map;
    vector<queue<int>> team_queue(t);
    queue<int> main_queue;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;
        for (int j = 0; j < n; ++j)
        {
            int id;
            cin >> id;
            team_map[id] = i;
        }
    }

    string command;
    while (cin >> command)
    {
        if (command == "ENQUEUE")
        {
            int id;
            cin >> id;
            int team_id = team_map[id];
            if (team_queue[team_id].empty())
            {
                main_queue.push(team_id);
            }
            team_queue[team_id].push(id);
        }
        else if (command == "DEQUEUE")
        {
            if (!main_queue.empty())
            {
                int team_id = main_queue.front();
                int student_id = team_queue[team_id].front();
                team_queue[team_id].pop();
                if (team_queue[team_id].empty())
                {
                    main_queue.pop();
                }
                cout << student_id << "\n";
            }
        }
    }

    return 0;
}
