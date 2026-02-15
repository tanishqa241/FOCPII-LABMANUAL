#include <iostream>
using namespace std;

class Game {
    int a, b, c;
public:
    void input() {
        cin >> a >> b >> c;
    }
    void winner() {
        if (a > b && a > c)
            cout << "Player 1 wins";
        else if (b > c)
            cout << "Player 2 wins";
        else
            cout << "Player 3 wins";
    }
};

int main() {
    Game g;
    g.input();
    g.winner();
    return 0;
}
