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
        A[i] = i + 1;
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

    char sign;
    int number;

    // 출력
    for (int i = 0; i < MAX; ++i)
    {
        switch (A[i]/13)
        {
        case 0:
            cout << "♥";
            switch (A[i]%13)
            {
            case 0:
                cout << "A" << endl;
                break;
            case 10:
                cout << "J" << endl;
                break;
            case 11:
                cout << "Q" << endl;
                break;
            case 12:
                cout << "K" << endl;
                break;
            default:
                cout << A[i] % 13 << endl;
                break;
            }
            break;
        case 1:
            cout << "♠";
            switch (A[i] % 13)
            {
            case 0:
                cout << "A" << endl;
                break;
            case 10:
                cout << "J" << endl;
                break;
            case 11:
                cout << "Q" << endl;
                break;
            case 12:
                cout << "K" << endl;
                break;
            default:
                cout << A[i] % 13 << endl;
                break;
            }
            break;
        case 2:
            cout << "♣";
            switch (A[i] % 13)
            {
            case 0:
                cout << "A" << endl;
                break;
            case 10:
                cout << "J" << endl;
                break;
            case 11:
                cout << "Q" << endl;
                break;
            case 12:
                cout << "K" << endl;
                break;
            default:
                cout << A[i] % 13 << endl;
                break;
            }
            break;
        case 3:
            cout << "◈";
            switch (A[i] % 13)
            {
            case 0:
                cout << "A" << endl;
                break;
            case 10:
                cout << "J" << endl;
                break;
            case 11:
                cout << "Q" << endl;
                break;
            case 12:
                cout << "K" << endl;
                break;
            default:
                cout << A[i] % 13 << endl;
                break;
            }
            break;
        }
    }

    return 0;
}