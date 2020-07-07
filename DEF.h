// Can I open and run code from other files? Yes I can!
// Can I create and open a text file? Yes!
// Can I open an application?
#include <iostream>
#include <fstream>
#include <Windows.h>
#include <shellapi.h>

#pragma once
#pragma comment(lib, "SHELL32.LIB") //pragma directive - allows us to (research more!)

using namespace std;

namespace header
{
    class Player
    {
        public:
        const static int MAX_INPUT_LENGTH = 100;
        bool AnsweredAll;       
        char Name[MAX_INPUT_LENGTH], Profession[MAX_INPUT_LENGTH], Age[MAX_INPUT_LENGTH], Married[MAX_INPUT_LENGTH];
        string Questions[4] = {"What is your name?", "How old are you?", "What is your profession?", "Are you married? Y/N"};
    
        void AnsweringQuestions();

    };
}


void HiThere()
{   
    
    ofstream PlayerFile("playerfile.txt");

    //PlayerFile << "\nPersonal Details: \n" << player.Name << endl << player.Age << endl << player.Profession << endl << player.Married << endl;
    
    std::cout << "Please look at the following file on your screen.";          
}

void OpenFile()
{       
     ShellExecuteA(NULL, "open", "playerfile.txt", NULL, NULL, SW_SHOWNORMAL); // use filename if same directory, else give path: C:\\Users\\Kat\\Documents\\hifriend.txt
    
}
