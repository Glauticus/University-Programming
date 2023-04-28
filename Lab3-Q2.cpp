// Lab3-Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Coin {
private:
    string m_sideUp;
public:
    Coin();
    ~Coin();
    string getSideUp();
    void Toss();
};

Coin::Coin() {
    
    if (rand() % 2 == 0) {
        m_sideUp = "Heads";
    }
    else {
        m_sideUp = "Tails";
    }
}
Coin::~Coin() {

}
string Coin::getSideUp() {

    return m_sideUp;
}
void Coin::Toss() {

    if (rand() % 2 == 0) {
        m_sideUp = "Heads";
    }
    else {
        m_sideUp = "Tails";
    }

}

int main()
{
    srand(time(0));
    Coin coin;
    int tails = 0;
    int heads = 0;
    cout << "The coin is currently on " << coin.getSideUp() << "\nI will now flip the coin 20 times!\n\n";
    for (int i = 0; i < 20; i++) {
        coin.Toss();
        if (coin.getSideUp() == "Heads") {
            cout << "The coin landed on heads!\n";
            heads++;
        }
        else {
            cout << "The coin landed on tails!\n";
            tails++;
        }
    }
    cout << endl << "The coin landed on heads " << heads << " times!" << endl << "The coin landed on tails " << tails << " times!";

}