#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int nwd(int a, int b){
    int tmp;
    while(b != 0){
        tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{

    fstream file("liczby.txt");
    if(file)
    {
        long int tab[500];
        for (int i = 0; i < 500; i++)
        {
            file >> tab[i];
        }
        file.close();

        int divmax = 0, firstmax = 0 lengthmax = 0;
        int N = 500;

        for (int j = 0; j < N - 1; j++)
        {
            int length = 1;
            int first = tab[j];
            int localnwd = tab[j];
            for(int k = j+1; k < N; k++)
            {
                int n = nwd(localnwd, tab[k]);
                if(n > 1)
                {
                    localnwd = n;
                    length++;
                }
                if(n == 1 || k == N - 1)
                {
                    if(lengthmax < dl)
                    {
                        divmax = localnwd;
                        lengthmax = length;
                        firstmax = first;
                    }
                    break;
                }
            }
        }

        cout << firstmax << " " << lengthmax << " " << divmax   << " ";

    }
    else
    {
        cout << "ERROR!";
    }
    return 0;
}
