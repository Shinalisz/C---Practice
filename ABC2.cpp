#include <iostream>
#include "DEF.h"
#include <chrono>
#include <thread>
#include <Windows.h>
#include <shellapi.h>
#include <string>

#pragma comment(lib, "SHELL32.LIB") //pragma directive - this ine allows us to use shell commands 

using namespace std;
using namespace header; //from DEF.h
using namespace std::chrono; //to use sleep_
using namespace std::this_thread; //to use sleep_

void intro()
{
    cout << endl;
    cout << "Welcome to the testing facility.\n";
    cout << "Please answer all the following questions: \n";
}

void Player::AnsweringQuestions()
{                
        
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
        
}

void Player::HiThere()
{
    ofstream PlayerFile("playerfile.txt");

    PlayerFile << "\nHello there, " << Name << "!" << endl;
    PlayerFile << "\nHere is a little puzzle for you: \n";
    PlayerFile << "You are looking for an access code.";
    PlayerFile << "\n * The number has four digits. \n * All the digits are different. \n * It begins and ends with an odd number and has two even numbers in the middle. \n * 19 and 519 go into it exactly. \n"; 
    PlayerFile << "\n You may use this file for your notes and calculations. I have also proveided a calculator. Once you have the number, enter it in the command line and press Enter. I will be waiting.";   

    std::cout << "Please look at the following file on your screen.\n";      
}

void Player::OpenFile()
{       
    ShellExecuteA(NULL, "open", "playerfile.txt", NULL, NULL, SW_SHOWNORMAL); // use filename if same directory, else give path: C:\\Users\\Kat\\Documents\\hifriend.txt
    ShellExecuteA(NULL, "open", "calc.exe", NULL, NULL, SW_SHOWNORMAL);    
}

void TxtPuzzle(Player player)
{
    int CipherSolution = 9861;
    int CipherGuess;
    string Snark[] = {"\nPlease enter your solution here: ", "\nPlease enter your CORRECT solution here: ", "\nNow you are just guessing.. One more time: ", "\nIf I had any feelings I would say I believe in you. But I do not. Again: "};

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

    do
    {  
        for(int i = 0; i < 5; i++)
        {
            cout << Snark[i] << endl;
            i + 1;
            cin >> CipherGuess;                        

            if (CipherGuess == CipherSolution)
            {
                cout << "\nYour brainfunctions are adequate. You may proceed.\n";
                ShellExecuteA(NULL, "open", "GHI.exe", NULL, NULL, SW_SHOWNORMAL);
                break;
            }      
        }          

    } while ((CipherGuess != CipherSolution));

}

int main(Player)
{                    
    Player player;
    
    intro();     

    string Answers[4] = {"Name: ", "Age: ", "Profession: ", "Married Y/N: "};             
     
    char DetailesCorrect[25];    

    do
    {
        player.AnsweringQuestions();  

        cout << endl;
        cout << endl;
        cout << "Are these details correct? Yes/No\n";
        cout << Answers[0] << player.Name << endl;
        cout << Answers[1] << player.Age << endl;
        cout << Answers[2] << player.Profession << endl;
        cout << Answers[3] << player.Married << endl;      
            
        cin.getline(DetailesCorrect, 25);          

        if(DetailesCorrect != std::string("Yes") && DetailesCorrect != std::string("No"))
        {
            cout << endl;
            cout << "You should be able to read by now. Please answer: Yes or No.";

            cout << endl;
            cout << endl;
            cout << "Are these details correct? Yes/No\n";
            cout << Answers[0] << player.Name << endl;
            cout << Answers[1] << player.Age << endl;
            cout << Answers[2] << player.Profession << endl;
            cout << Answers[3] << player.Married << endl;      
            
            cin.getline(DetailesCorrect, 25);   
        }
        
        if (DetailesCorrect == std::string("Yes"))
        {    
            break;
        }

    } while (DetailesCorrect == std::string("No"));    
    
    TxtPuzzle(player);        
     
    return 0;
}
