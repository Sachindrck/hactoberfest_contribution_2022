#include <bits/stdc++.h>
using namespace std;

class choice
{
public:
    int p;
    int ch;
    choice()
    {
        p = 1;
    }
};

void winner(choice &x, choice &y)
{
    if (x.ch == 1 && y.ch == 2)
        y.p = 0;
    else if (x.ch == 1 && y.ch == 3)
        x.p = 0;
    else if (x.ch == 2 && y.ch == 1)
        x.p = 0;
    else if (x.ch == 2 && y.ch == 3)
        y.p = 0;
    else if (x.ch == 3 && y.ch == 1)
        y.p = 0;
    else if (x.ch == 3 && y.ch == 2)
        x.p = 0;
}

int main()
{
    int k = 1;
    do
    {
        choice A, B;
        cout << "PLAYER 1 Turn :" << endl
             << "choose one of the following (index number only) :" << endl
             << "1.STONE" << endl
             << "2.SCISSOR" << endl
             << "3.PAPER" << endl;
        cin >> A.ch;
        cout << endl
             << "PLAYER 2 Turn :" << endl
             << "choose one of the following (index number only) :" << endl
             << "1.STONE" << endl
             << "2.SCISSOR" << endl
             << "3.PAPER" << endl;
        cin >> B.ch;
        winner(A, B);
        if (A.p && B.p)
            cout << "its a draw";
        else if (A.p)
            cout << "PLAYER 1 WINS";
        else if (B.p)
            cout << "PLAYER 2 WINS";
        cout << endl
             << "do you want to play another round (1 for YES and 0 for NO):";
        cin >> k;

    } while (k);
    cout << "Thank You";
    return 0;
}