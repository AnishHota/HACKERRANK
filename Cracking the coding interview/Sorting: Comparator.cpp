#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Player {
    string name;
    int score;
};
// Only this function is required in the hackerrank editor
vector<Player> comparator(vector<Player> players) {
    int n,i,j;
    struct Player temp;
    n = players.size();
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(players[j].score<players[j+1].score)
            {
                temp = players[j];
                players[j] = players[j+1];
                players[j+1] = temp;
            }
            if(players[j].score==players[j+1].score && players[j].name>players[j+1].name)
            {
                temp = players[j];
                players[j] = players[j+1];
                players[j+1] = temp;
            }
        }
    }
    return players;
}
int main() {
    int n;
    cin >> n;
    vector< Player > players;
    string name;
    int score;
    for(int i = 0; i < n; i++){
        cin >> name >> score;
        Player p1;
        p1.name = name, p1.score = score;
        players.push_back(p1);
    }

    vector<Player > answer = comparator(players);
    for(int i = 0; i < answer.size(); i++) {
        cout << answer[i].name << " " << answer[i].score << endl;
    }
    return 0;
}
