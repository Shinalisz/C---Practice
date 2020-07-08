#include <iostream>
#include "DEF.h"
#include <chrono>
#include <thread>
#include <Windows.h>
#include <shellapi.h>

#pragma comment(lib, "SHELL32.LIB") //pragma directive - allows us to (research more!)

using namespace std;
using namespace header;

void intro()
{
    cout << endl;
    cout << "Welcome to the testing facility.\n";
    cout << "Please answer all the following questions: \n";
}

void Player::AnsweringQuestions()
{        
        AnsweredAll = false;
    
        cout << endl;
        cout << Questions[0] << endl;
        cin.getline(Name, MAX_INPUT_LENGTH);    
    
        cout << Questions[2] << endl;
        cin.getline(Profession, MAX_INPUT_LENGTH);

        cout << Questions[1] << endl;
        cin.getline(Age, MAX_INPUT_LENGTH);

        cout << Questions[3] << endl;
        cin.getline(Married, MAX_INPUT_LENGTH);
        cout << endl;

        AnsweredAll = true;

}

void Player::HiThere()
{
    ofstream PlayerFile("playerfile.txt");

    //PlayerFile << "\nPersonal Details: \n" << player.Name << endl << player.Age << endl << player.Profession << endl << player.Married << endl;
        
    std::cout << "Please look at the following file on your screen.";      
}

void Player::OpenFile()
{       
    ShellExecuteA(NULL, "open", "playerfile.txt", NULL, NULL, SW_SHOWNORMAL); // use filename if same directory, else give path: C:\\Users\\Kat\\Documents\\hifriend.txt
        
}


int main(Player)
{            
    using namespace std::chrono; //to use sleep_
    using namespace std::this_thread; //to use sleep_
    
    Player player;
    string DetailsCorrect;
    intro();
    player.AnsweringQuestions();
    string Answers[4] = {"Name: ", "Age: ", "Profession: ", "Married Y/N: "};
    
    while (player.AnsweredAll == false)
    {
        cin.clear();
        cin.ignore();
    }

    

    if(player.AnsweredAll == true)
    {
        cout << endl;
        cout << "Are these details correct?\n";
        cout << Answers[0] << player.Name << endl;
        cout << Answers[1] << player.Age << endl;
        cout << Answers[2] << player.Profession << endl;
        cout << Answers[3] << player.Married << endl;
        cin >> DetailsCorrect;

        if(DetailsCorrect == "Yes")
        {
            cout << "Thank you for providing your details. We know everything about you now.\n";
            cout << endl;
            cout << "Processing";
            sleep_for(1s);
            cout << ".";
            sleep_for(1s);
            cout << ".";
            sleep_for(1s);
            cout << ".";
            sleep_for(2s);
            cout << endl;
            cout << "\nYou may move onto our processing plant and begin your retraining.\n";
            cout << endl;
            
            player.HiThere();
            sleep_for(2s);
            player.OpenFile();
        }
        else
        {
            /*code*/
        }
        
    }
     
    return 0;
}
