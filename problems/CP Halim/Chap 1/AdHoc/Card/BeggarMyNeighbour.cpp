//
// Created by Student on 15/07/2023.
//

#include <bits/stdc++.h>

using namespace std;
map<int, int> upCards = {{1, 26}, {2, 26}};
set<char> face = {'J', 'Q', 'K', 'A'};
map<char, int> covers = {{'J', 1}, {'Q', 2}, {'K', 3}, {'A', 4}};

void coverFaceCard(char card) {
    while(face.count(card))
}

int main() {
    int winner, winner_hand, cur, turn;

    stack<string> dealer, nonDealer;
    string nonDealerCard, dealerCard;
    while(cin >> nonDealerCard >> dealerCard && nonDealerCard != "#") {
        nonDealer.push(nonDealerCard);
        dealer.push(dealerCard);
    }

    turn = 2;  // Non Dealer's turn, otherwise dealer's turn
    while(upCards[1] != 0 && upCards[2] != 0) {
        nonDealerCard = nonDealer.top();
        dealerCard = dealer.top();
        if (face.count(nonDealerCard[1])) {
            int i = 0;
            while (i < covers[nonDealerCard[1]] && !face.count(dealerCard[1])) {
                upCards[turn]--;
                i++;
            }
        } else {
            upCards[turn]--;
        }

    }
//    if (nonDealerCard.empty()) {
//        winner = 1; break;
//    }
//    else if (dealerCard.empty()) {
//        winner = 1; break;
//    }


    return 0;
}