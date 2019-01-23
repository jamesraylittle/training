#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    string userName;
    bool answer1;
    string answer2;
    int numberOfComputers;
    string question1;
    string reply1;
    string keepGoing;

    sleep(2);
    cout << "Oh, hello there!" << endl;
    sleep(1);
    cout << "What's your name?" << endl;

    cin >> userName;
    cout << endl;
    sleep(2);

    cout << "Nice to meet you " << userName << "!" << endl;
    sleep(2);
    cout << "Do you want to play a game?" << endl;
    cout << "Enter: 1 for yes" << endl;
    cout << "Enter: 0 for no" << endl;

    cin >> answer1;
    cout << endl;
    sleep(2);

    if(answer1)
    {
        cout << "Great!" << endl;
        sleep(2);
        cout << "Let's play truth or dare!" << endl;
        sleep(1);
        cout << "I will go first." << endl;
        sleep(1);
        cout << "Truth or dare" << endl;

        cin >> answer2;
        sleep(2);

        if (answer2 == "Truth")
        {
            cout << "How many computers do you own?" << endl;

            cin >> numberOfComputers;
            sleep(1);

            if(numberOfComputers < 2)
            {
                cout << "That really isn't much you know." << endl;
            }
            else
            {
                cout << numberOfComputers << " is a lot!" << endl;
            }

            cout << "Okay, your turn!" << endl;

        }
        else
        {
            cout << "I dare you to type 'I stink' in reply." << endl;
            sleep(1);

            cin >> reply1;
            sleep(2);

            cout << "Haha! This is fun!" << endl;
            sleep(2);
            cout << "Okay, want to keep going?" << endl;
            sleep(1);
            cin >> keepGoing;
            while(std::cin.fail()) {
            std::cin.clear();
            cin.ignore(80, '\n');
            cout << "Bad input. Please try again: ";
            cin >> keepGoing;
            }
        }
    }
    else
    {
        cout << "That's too bad." << endl;
    }

    return 0;
}
