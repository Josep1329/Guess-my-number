#include <iostream>
#include<cstdlib> //Trabaja con números random
#include <string>

int Limits(string question, int min, int max = 1);

using namespace std;

int main()
{

    srand(static_cast<unsigned int>(time(0)));
    //srand(time(NULL));
    int randomNumber = rand();
    int secretNumber = (randomNumber % 100) + 1;
    int guess;
    int tries = 0;
    int veryClose;
    int Limits(int min, int max);
    cout << "GUESS MY NUMBER" << endl;
    cout << "Adivina el número en el menor número de intentos posible." << endl;

    //Depurar
    cout << secretNumber;
    do
    {
        guess = Limits("\nAdivina un numero", 100);

        tries++;

        veryClose = secretNumber - guess;

        if (veryClose <= 5 && veryClose >= -5 && veryClose != 0)
        {
            cout << "muy cerca\n";
        }

        if (guess > secretNumber) {
            cout << "Muy Alto\n\n";
        }
        else if (guess < secretNumber) {
            cout << "Muy Bajo\n\n";
        }
        else {
            cout << "Excelente lo hiciste en -- " << tries << "-- intentos";

        }
    } while (guess != secretNumber);
}

int Limits(string question, int min, int max = 1)
{
    int guess;
    do
    {
        cout << question << "entre" << min << " y " << max << endl; 
        cin >> guess;
    } while (guess > max || guess < min);

    return guess;
}


