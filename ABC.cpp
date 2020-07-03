#include <iostream>
#include <fstream>
#include "DEF.cpp"
#include <chrono>
#include <thread>


using namespace std;

class Player
{
    public:
        const static int MAX_INPUT_CHAR_LENGTH = 100;
        bool AnsweredAll = false;
        char Name[MAX_INPUT_CHAR_LENGTH], 
             Profession[MAX_INPUT_CHAR_LENGTH],
             Age[MAX_INPUT_CHAR_LENGTH],
             Married[MAX_INPUT_CHAR_LENGTH];
        

};

void intro()
{
    cout << endl;
    cout << "Welcome to the testing facility.\n";
    cout << "Please answer all the following questions: \n";
}    

void AnsweringQuestions(Player player)
{
    player.AnsweredAll = false;

    string Questions[4] = {"What is your name?", "How old are you?", "What is your profession?", "Are you married? Y/N"};       

    cout << endl;
    cout << Questions[0] << endl;
    cin.getline(player.Name, player.MAX_INPUT_CHAR_LENGTH);    
    
    cout << Questions[2] << endl;
    cin.getline(player.Profession, player.MAX_INPUT_CHAR_LENGTH);

    cout << Questions[1] << endl;
    cin >> player.Age;

    cout << Questions[3] << endl;
    cin >> player.Married;
    cout << endl;

    player.AnsweredAll = true;

}

int main(Player player)
{
    
    using namespace std::chrono; //to use sleep_
    using namespace std::this_thread; //to use sleep_
     
    string Answers[4] = {"Name: ", "Age: ", "Profession: ", "Married Y/N: "};    
    string DetailsCorrect;

    intro();

    AnsweringQuestions(player);

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
    }
    if(DetailsCorrect == "Yes" || "yes")
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
        
        HiThere();
        sleep_for(2s);
        OpenFile();

    }
    else if(DetailsCorrect == "No" || "no")
    {
        player.AnsweredAll = false;
        AnsweringQuestions(player);
    }
    else
    {
        cout << "Please answer with a 'Yes' or 'No'";        
    }
    
   
     
    return 0;
}        
   





