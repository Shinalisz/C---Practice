#include <iostream>
#include <windows.h>

using std::cout;
using std::string;
using std::cin;

void clearScreen(int characterLength)
{
    for (int i = 0; i < characterLength; i++)
    {
        cout << "\b"; //this is backspace
    }
}

const int BLUE = 1;
const int GREEN = 2;
const int RED = 4;
const int WHITE = 15;

void changeColour(int colour) //change colour of console text
{
    HANDLE hConsole;

    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, colour);
}

/*void showLoadingScreen()
{
    int i;
    string closed = "- - -", open = "* * *";
    int colour[] = {RED, GREEN, BLUE};

    cout << "Hi Friends!";

    cout << closed;

    for (i = 0; i < 3; i++)
    {
        Sleep(1000);

        clearScreen(5);
        changeColour(colour[i]);

        cout << open;

        Sleep(1000);

        clearScreen(5);
        changeColour(WHITE);
        cout << closed;
    }

    clearScreen(5);
    changeColour(WHITE);
}*/

void ShowPuzzle()
{
    changeColour(RED);
    cout << "\n+---+---+---+---+---+";
    cout << "\n| S | U | B | M | I |";
    cout << "\n+---+---+---+---+---+";
    Sleep(1000);

    changeColour(RED);
    cout << "ING";
    Sleep(1000);

    changeColour(RED);
    cout << "LIGHTS";
    Sleep(1000);

    changeColour(WHITE);
}

int main(int argc, char** argv)
{
    cout << "\n\n";
    string Solution = "IDEMPOTENCE";
    string Answer;

    Sleep(1000);
    cout << "\033[4mDecipher the following code:\033[0m";
    Sleep(1000);
    cout << " \033[31;1m ME DI RP AT OA CZ\033[0m";
    cout << "\n\n\n";
    
    Sleep(1000);
    ShowPuzzle();

    cout << "\n\n\n";

    cin >> Answer;
    if (Answer == Solution)
    {
        cout << "Well done. You have successfully used Google.";
    }
    
    return 0;
}

/*
playfair cipher!
*/