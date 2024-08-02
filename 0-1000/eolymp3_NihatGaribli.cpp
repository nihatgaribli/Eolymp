/*

This problem (Eolymp-3 -- Match's model) was solved by Garibli Nihat, a 2nd-year student of the Computer Science major of SABAH groups of Baku State University.

--------------------------------------------------------Code-----------------------------------------------------------------------------
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, S = 20, i, j, h = 1;
    cin >> n;

    vector<int> vec = {8, 5};

    if (n == 1)
    {
        cout << 12;
        return 0;
    }

    else if (n == 2)
    {
        cout << 20;
        return 0;
    }

    else
    {
        n -= 2;

        while (n)
        {
            // bir dəfə təkrar edən vektorun daxilindeki elementləri S cəminə əlavə edir
            for (i = 0; i < vec.size(); i++)
            {
                S += vec[i];
                n -= 1;
                if (n == 0)
                {
                    cout << S;
                    return 0;
                }
            }

            // iki dəfə olan təkrarın qurulması üçün vektora {5,3,...} elementlərini əlavə edir
            vec.push_back(5);
            for (j = 1; j <= h; j++)
            {
                vec.push_back(3);
            }

            // artımda iki dəfə təkrar edən vektorları uyğun olaraq S cəminə əlavə edir
            for (j = 0; j < 2; j++)
            {
                for (i = 0; i < vec.size(); i++)
                {
                    S += vec[i];
                    n -= 1;
                    if (n == 0)
                    {
                        cout << S;
                        return 0;
                    }
                }
            }

            // bir dəfə təkrar edən vektorun qurulması üçün {5,3,...} elementlərini əlavə edir
            vec.push_back(5);
            for (j = 1; j <= h; j++)
            {
                vec.push_back(3);
            }

            h++;
        }
    }

    return 0;
}

/*
---------------------------------------------------------ALGORITHM------------------------------------------------------------------------


    1 kub ---- 12
    2 kub ---- 12+8 = S

    3 kub ---- S+8
    4 kub ---- S+8+5
    5 kub ---- S+8+5+8
    6 kub ---- S+8+5+8+5
    7 kub ---- S+8+5+8+5+5
    8 kub ---- S+8+5+8+5+5+3
    9 kub ---- S+8+5+8+5+5+3+8
    10 kub --- S+8+5+8+5+5+3+8+5
    11 kub --- S+8+5+8+5+5+3+8+5+5
    12 kub --- S+8+5+8+5+5+3+8+5+5+3
    13 kub --- S+8+5+8+5+5+3+8+5+5+3+8
    14 kub --- S+8+5+8+5+5+3+8+5+5+3+8+5
    15 kub --- S+8+5+8+5+5+3+8+5+5+3+8+5+5
    16 kub --- S+8+5+8+5+5+3+8+5+5+3+8+5+5+3
    17 kub --- S+8+5+8+5+5+3+8+5+5+3+8+5+5+3+5
    18 kub --- S+8+5+8+5+5+3+8+5+5+3+8+5+5+3+5+3
    ...
    ...
    ...


------------------------------------------------------------------------------------------------------------------------------------------

    Artim: (3-cu kubdan baslayaraq)

    8 5|
    8 5| 5 3|
    8 5| 5 3|
    8 5| 5 3| 5 3|
    8 5| 5 3| 5 3| 5 3 3|
    8 5| 5 3| 5 3| 5 3 3|
    8 5| 5 3| 5 3| 5 3 3| 5 3 3|
    8 5| 5 3| 5 3| 5 3 3| 5 3 3| 5 3 3 3 3|
    8 5| 5 3| 5 3| 5 3 3| 5 3 3| 5 3 3 3 3|
    8 5| 5 3| 5 3| 5 3 3| 5 3 3| 5 3 3 3 3| 5 3 3 3 3|
    ...
    ...
    ...

------------------------------------------------------------------------------------------------------------------------------------------
*/