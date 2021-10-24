#include <iostream>
using namespace std;
char number[10] = {'o','1','2','3','4','5','6','7','8','9'};
int window()
{
    if (number[1] == number[2] && number[2] == number[3])
        return 1;
    else if (number[4] == number[5] && number[5] == number[6])
        return 1;
    else if (number[7] == number[8] && number[8] == number[9])
        return 1;
    else if (number[1] == number[4] && number[4] == number[7])
        return 1;
    else if (number[2] == number[5] && number[5] == number[8])
        return 1;
    else if (number[3] == number[6] && number[6] == number[9])
        return 1;
    else if (number[1] == number[5] && number[5] == number[9])
        return 1;
    else if (number[3] == number[5] && number[5] == number[7])
        return 1;
    else if (number[1] != '1' && number[2] != '2' && number[3] != '3' && number[4] != '4' && number[5] != '5' && number[6] != '6' && number[7] != '7' && number[8] != '8' && number[9] != '9')
        return 0;
    else
        return -1;
}
void board()
{
    system("cls");
    cout << "\n\n\t\t\t\t      Just for Fun\n\n";
    cout << "\t\t Player 1 =(X)    \t\t\t\t\t Player 2 =(O)" << endl << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t\t  " << number[1] << "  |  " << number[2] << "  |  " << number[3] << endl;
    cout << "\t\t\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t\t  " << number[4] << "  |  " << number[5] << "  |  " <<number[6] << endl;
    cout << "\t\t\t\t\t\t_____|_____|_____" << endl;
    cout << "\t\t\t\t\t\t     |     |     " << endl;
    cout << "\t\t\t\t\t\t  " << number[7] << "  |  " << number[8] << "  |  " << number[9] << endl;
    cout << "\t\t\t\t\t\t     |     |     " << endl << endl;
}
int main()
{
	int player = 1,i,choice;
    char mark;
    do
    {
        board();
        player=(player%2)?1:2;
        cout << "Player " << player <<endl<<endl<<" choose a number:  ";
        cin >> choice;
        mark=(player == 1) ? 'X' : 'O';
        if (choice == 1 && number[1] == '1')
            number[1] = mark;
        else if (choice == 2 && number[2] == '2')
            number[2] = mark;
        else if (choice == 3 && number[3] == '3')
            number[3] = mark;
        else if (choice == 4 && number[4] == '4')
            number[4] = mark;
        else if (choice == 5 && number[5] == '5')
            number[5] = mark;
        else if (choice == 6 && number[6] == '6')
            number[6] = mark;
        else if (choice == 7 && number[7] == '7')
            number[7] = mark;
        else if (choice == 8 && number[8] == '8')
            number[8] = mark;
        else if (choice == 9 && number[9] == '9')
            number[9] = mark;
        else
        {
            cout<<"Invalid move ";
            player--;
            cin.ignore();
            cin.get();
        }
        i=window();
        player++;
    }while(i==-1);
    board();
    if(i==1)
        cout<<"\aPlayer "<<--player<<" winner ";
    else
        cout<<"\aGame draw";
    cin.ignore();
    cin.get();
    return 0;
}


