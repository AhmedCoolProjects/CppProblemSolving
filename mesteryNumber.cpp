// MESTERY NUMBER

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    int nbplayer, nbmystery, score = 0;
    nbmystery = rand() % 501;
    srand((int)time(NULL));

    do
    {
        cout << "Enter a number between 0 and 500: ";
        cin >> nbplayer;
        score++;
        if (nbplayer == nbmystery)
        {
            cout << "GREAT, you got it :) \n";
            cout << "You tried: " << score << " time(s).\n";
        }
        else
        {
            if (nbplayer < nbmystery) cout << "More ! \n";
            else cout << "Less ! \n";
        }


    } while (nbplayer != nbmystery);
    system("pause");
}
