#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int silnia(int liczba)
{
    if(liczba > 1)
        return liczba * silnia(liczba-1);
    else
        return 1;
}

int main()
{

    fstream file("liczby.txt");
    if(file)
    {
        for (int i = 0; i < 500; i++)
        {
            int suma = 0;
            string linia;
            file >> linia;

            for(int j = 0; j < linia.length(); j++)
            {
                int x;
                stringstream chr;
                chr << linia[j];
                chr >> x;

                suma += silnia(x);
            }

            if(suma == atoi(linia.c_str()))
            {
                cout << suma << endl;
            }
        }

        file.close();
    }
    else
    {
        cout << "ERROR!";
    }
    return 0;
}
