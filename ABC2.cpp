#include <iostream>;

using namespace std;

void intro()
{
    cout << endl;
    cout << "Welcome to the testing facility.\n";
    cout << "Please answer all the following questions: \n";
}

class Player
{
    public:
    const static int MAX_INPUT_LENGTH = 100;
    bool AnsweredAll;       
    char Name[MAX_INPUT_LENGTH], Profession[MAX_INPUT_LENGTH], Age[MAX_INPUT_LENGTH], Married[MAX_INPUT_LENGTH];
    string Questions[4] = {"What is your name?", "How old are you?", "What is your profession?", "Are you married? Y/N"};

    void AnsweringQuestions()
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


};   


int main(Player)
{            
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
            //do nothing
        }
        else
        {
            
        }
        
    }
     
    return 0;
}
