#include <iostream>
using namespace std;

#define MAX 52

int main()
{
    int A[MAX] = { 0, };

    srand((unsigned int)time(0));

    // 생성
    for (int i = 0; i < MAX; ++i)
    {
        A[i] = i;
    }

    //shuffle
    for (int i = 0; i < MAX * 2; ++i)
    {
        int FirstNumber = rand() % MAX;
        int SecondNumber = rand() % MAX;

        //Swap
        int Temp = A[FirstNumber];
        A[FirstNumber] = A[SecondNumber];
        A[SecondNumber] = Temp;
    }

    // 카드 종류
    string sign;
    string number;

    // 플레이어 3장 배열
    int Player[3] = {};
    
    // 봇 3장 배열
    int AI[3] = {};

    // 출력

    for (int i = 0; i < MAX; ++i)
    {
        switch (A[i]/13)
        {
        case 0:
            sign = "♥";
            switch (A[i]%13)
            {
            case 0:
                number = "A";
                break;
            case 10:
                number = "J";
                break;
            case 11:
                number = "Q";
                break;
            case 12:
                number = "K";
                break;
            default:
                number = (A[i] % 13);
                break;
            }
            break;
        case 1:
            sign = "♠";
            switch (A[i] % 13)
            {
            case 0:
                number = "A";
                break;
            case 10:
                number = "J";
                break;
            case 11:
                number = "Q";
                break;
            case 12:
                number = "K";
                break;
            default:
                number = (A[i] % 13);
                break;
            }
            break;
        case 2:
            sign =  "♣";
            switch (A[i] % 13)
            {
            case 0:
                number = "A";
                break;
            case 10:
                number = "J";
                break;
            case 11:
                number = "Q";
                break;
            case 12:
                number = "K";
                break;
            default:
                number = (A[i] % 13);
                break;
            }
            break;
        case 3:
            sign = "◈";
            switch (A[i] % 13)
            {
            case 0:
                number = "A";
                break;
            case 10:
                number = "J";
                break;
            case 11:
                number = "Q";
                break;
            case 12:
                number = "K";
                break;
            default:
                number = (A[i] % 13);
                break;
            }
            break;
        }
    }

    // player and ai gets 3 cards randomly
    for (int i = 0; i < 3; i++)
    {
        Player[i] = A[rand() % MAX];
        AI[i] = A[rand() % MAX];
    }

    // add player's 3 cards' value
    int PlayerSum = 0;
    for (int i = 0; i < 3; i++)
    {
        PlayerSum += Player[i] % 13;
    }

    // add ai's 3 cards' value
    int AISum = 0;
    for (int i = 0; i < 3; i++)
    {
        AISum += AI[i] % 13;
    }

    // winner decision
    if (PlayerSum > 21)
    {
        cout << "Player Lost: greater than 21" << endl;
        cout << "Player: " << PlayerSum << endl;
        return -1;
    }
    if (AISum > 21)
    {
        cout << "AI Lost: greater than 21" << endl;
        cout << "AI: " << AISum << endl;
        return -1;
    }
    else if (PlayerSum == AISum)
    {
        cout << "Tie: Player - " << PlayerSum << " & AI - " << AISum << endl;
    }
    else if (PlayerSum > AISum)
    {
        cout << "Winner: Player " << PlayerSum << endl;
        cout << "AI: " << AISum << endl;
    }
    else
    {
        cout << "Winner: AI " << AISum << endl;
        cout << "Player: " << PlayerSum << endl;
    }

    return 0;
}