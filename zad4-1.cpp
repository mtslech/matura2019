#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    fstream file("liczby.txt");
    if(file)
    {
        int number, counter = 0;

        for(int i = 0; i < 500; i++)
        {
            bool pow3 = true;
            file >> number;
            while(number > 1)
            {
                if(number % 3 == 0)
                {
                    number /= 3;
                }
                else
                {
                    pow3 = false;
                    break;
                }

            }
            if(pow3)
                counter++;
        }

        cout << counter;



        file.close();
    }
    else
    {
        cout << "ERROR!";
    }
    return 0;
}
