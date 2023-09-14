         //CODESOFT  INTERSHIP
          //Domain Name - C++ Programming
          //Task - 1 (Generating and Guessing a random no.)
          //Intern Name - MANJU KUMARI
          //Batch - AUGUST Batch 4


#include<iostream>
#include<cstdlib>

//for different value of random number in different run time.
#include<ctime>    
using namespace std;

int main()
{
    int range , random , guess = 0;
    cout << "Enter range of random number:";
    cin >> range ;
    
    //for time varying random number. 
    srand(time(0));
    
    //generating a random number.
    random = (rand () % range ) + 1;
    cout << "Random number:";
    cout << random << endl;

    //using do while loop as we don't known the terminating point of loop.
    do
    {
        cout << "Enter guess number:";
        cin >> guess;

        if (guess == random )
        cout << "Congrats! Correct Guess" << endl;
        else if (guess <0)
        cout << "Guess is invalid!" << endl;
        else if (guess > random)
        cout << "Guess is too high" << endl;
        else 
        cout << "Guess is too low" << endl;
        
    }
    while (guess != random);
    return 0;
}