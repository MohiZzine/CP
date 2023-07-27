//
// Created By MOHI
//
#include <bits/stdc++.h>

using namespace std;

const int NCARDS = 52;
const int NSUITS = 4;

char suits[] = {'c', 'd', 'h', 's'};

char values[] = {'2', '3', '4', '5', '6', '7', '8', '9', 'T', 'Q', 'K', 'A'};

int rank_card(char value, char suit) {
    int i, j;
    for (i = 0; i < (NCARDS/NSUITS); i++)
        if (values[i] == value)
            for (j = 0; j < NSUITS; j++)
                if (suits[j] == suit)
                    return (i * NSUITS + j + 1);
}

char suit(int card) {
    return suits[card % NSUITS];
}

char value(int card) {
    return values[card / NSUITS];
}

void printCard(int card) {
    string st, val;
    if (suit(card) == 'c') st = "Clubs";
    else if (suit(card) == 'd') st = "Diamonds";
    else if (suit(card) == 'h') st = "Hearts";
    else st = "Spades";

    if (value(card) == '2') val = "2";
    else if (value(card) == '3') val = "3";
    else if (value(card) == '4') val = "4";
    else if (value(card) == '5') val = "5";
    else if (value(card) == '6') val = "6";
    else if (value(card) == '7') val = "7";
    else if (value(card) == '8') val = "8";
    else if (value(card) == '9') val = "9";
    else if (value(card) == 'T') val = "10";
    else if (value(card) == 'Q') val = "Queen";
    else if (value(card) == 'K') val = "King";
    else val = "Ace";

    cout << val << " of " << st << endl;
}

int main() {
    int T; cin >> T;
    while(T--) {
        int n, app = 0; cin >> n;
        int shuffles[n + 1][53], applied[n + 1], res[n];
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= 52; j++)
                cin >> shuffles[i][j];

        for (int i = 1; i <= 2; i++) {
            cin >> applied[i];
            app++;
        }

        int i = 1;
        for (int j = app; j > 0; j--) {
            int x = i;
            for (i = 1; i <= 52; i++) {
                int x = shuffles[app][x];
            }
            printCard(x);
        }
    }
    return 0;
}