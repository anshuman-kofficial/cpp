// cpp program to print your input into star patters

#include <iostream>
#include <conio.h>
using namespace std;

// Number of lines for the alphabet's pattern
int height = 5;
// Number of character width in each line
int width = (2 * height) - 1;

// Function to find the absolute value
// of a number D
int abs(int d)
{
    return d < 0 ? -1 * d : d;
}

// Function to print the pattern of 'A'
void printA()
{
    int n = width / 2, i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j <= width; j++)
        {
            if (j == n || j == (width - n) || (i == height / 2 && j > n && j < (width - n)))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
        n--;
    }
}

// Function to print the pattern of 'B'
void printB()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j < width; j++)
        {
            if ((i == 0 || i == height - 1 || i == half) && j < (width - 2))
                cout << "*";
            else if (j == (width - 2) && !(i == 0 || i == height - 1 || i == half))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'C'
void printC()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j < (height - 1); j++)
        {
            if (i == 0 || i == height - 1)
                cout << "*";
            else
                continue;
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'D'
void printD()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j < height; j++)
        {
            if ((i == 0 || i == height - 1) && j < height - 1)
                cout << "*";
            else if (j == height - 1 && i != 0 && i != height - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'E'
void printE()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j < height; j++)
        {
            if ((i == 0 || i == height - 1) || (i == height / 2 && j <= height / 2))
                cout << "*";
            else
                continue;
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'F'
void printF()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j < height; j++)
        {
            if ((i == 0) || (i == height / 2 && j <= height / 2))
                cout << "*";
            else
                continue;
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'G'
void printG()
{
    int i, j;
    width--;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            if ((i == 0 || i == height - 1) && (j == 0 || j == width - 1))
                cout << " ";
            else if (j == 0)
                cout << "*";
            else if (i == 0 && j <= height)
                cout << "*";
            else if (i == height / 2 && j > height / 2)
                cout << "*";
            else if (i > height / 2 && j == width - 1)
                cout << "*";
            else if (i == height - 1 && j < width)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'H'
void printH()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j < height; j++)
        {
            if ((j == height - 1) || (i == height / 2))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'I'
void printI()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0 || i == height - 1)
                cout << "*";
            else if (j == height / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'J'
void printJ()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == height - 1 && (j > 0 && j < height - 1))
                cout << "*";
            else if ((j == height - 1 && i != height - 1) || (i > (height / 2) - 1 && j == 0 && i != height - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'K'
void printK()
{
    int i, j, half = height / 2, dummy = half;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j <= half; j++)
        {
            if (j == abs(dummy))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
        dummy--;
    }
}

// Function to print the pattern of 'L'
void printL()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j <= height; j++)
        {
            if (i == height - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'M'
void printM()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j <= height; j++)
        {
            if (j == height)
                cout << "*";
            else if (j == counter || j == height - counter - 1)
                cout << "*";
            else
                cout << " ";
        }
        if (counter == height / 2)
        {
            counter = -99999;
        }
        else
            counter++;
        cout << "\n";
    }
}

// Function to print the pattern of 'N'
void printN()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j <= height; j++)
        {
            if (j == height)
                cout << "*";
            else if (j == counter)
                cout << "*";
            else
                cout << " ";
        }
        counter++;
        cout << "\n";
    }
}

// Function to print the pattern of 'O'
void printO()
{
    int i, j, space = (height / 3);
    int width = height / 2 + height / 5 + space + space;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j <= width; j++)
        {
            if (j == width - abs(space) || j == abs(space))
                cout << "*";
            else if ((i == 0 || i == height - 1) && j > abs(space) && j < width - abs(space))
                cout << "*";
            else
                cout << " ";
        }
        if (space != 0 && i < height / 2)
        {
            space--;
        }
        else if (i >= (height / 2 + height / 5))
            space--;
        cout << "\n";
    }
}

// Function to print the pattern of 'P'
void printP()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j < height; j++)
        {
            if ((i == 0 || i == height / 2) && j < height - 1)
                cout << "*";
            else if (i < height / 2 && j == height - 1 && i != 0)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'Q'
void printQ()
{
    printO();
    int i, j, d = height;
    for (i = 0; i < height / 2; i++)
    {
        for (j = 0; j <= d; j++)
        {
            if (j == d)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
        d++;
    }
}

// Function to print the pattern of 'R'
void printR()
{
    int i, j, half = (height / 2);
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j < width; j++)
        {
            if ((i == 0 || i == half) && j < (width - 2))
                cout << "*";
            else if (j == (width - 2) && !(i == 0 || i == half))
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'S'
void printS()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if ((i == 0 || i == height / 2 || i == height - 1))
                cout << "*";
            else if (i < height / 2 && j == 0)
                cout << "*";
            else if (i > height / 2 && j == height - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'T'
void printT()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0)
                cout << "*";
            else if (j == height / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'U'
void printU()
{
    int i, j;
    for (i = 0; i < height; i++)
    {
        if (i != 0 && i != height - 1)
            cout << "*";
        else
            cout << " ";
        for (j = 0; j < height; j++)
        {
            if (((i == height - 1) && j >= 0 && j < height - 1))
                cout << "*";
            else if (j == height - 1 && i != 0 && i != height - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'V'
void printV()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j <= width; j++)
        {
            if (j == counter || j == width - counter - 1)
                cout << "*";
            else
                cout << " ";
        }
        counter++;
        cout << "\n";
    }
}

// Function to print the pattern of 'W'
void printW()
{
    int i, j, counter = height / 2;
    for (i = 0; i < height; i++)
    {
        cout << "*";
        for (j = 0; j <= height; j++)
        {
            if (j == height)
                cout << "*";
            else if ((i >= height / 2) && (j == counter || j == height - counter - 1))
                cout << "*";
            else
                cout << " ";
        }
        if (i >= height / 2)
        {
            counter++;
        }
        cout << "\n";
    }
}

// Function to print the pattern of 'X'
void printX()
{
    int i, j, counter = 0;
    for (i = 0; i <= height; i++)
    {
        for (j = 0; j <= height; j++)
        {
            if (j == counter || j == height - counter)
                cout << "*";
            else
                cout << " ";
        }
        counter++;
        cout << "\n";
    }
}

// Function to print the pattern of 'Y'
void printY()
{
    int i, j, counter = 0;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j <= height; j++)
        {
            if (j == counter || j == height - counter && i <= height / 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
        if (i < height / 2)
            counter++;
    }
}

// Function to print the pattern of 'Z'
void printZ()
{
    int i, j, counter = height - 1;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == 0 || i == height - 1 || j == counter)
                cout << "*";
            else
                cout << " ";
        }
        counter--;
        cout << "\n";
    }
}

int main()
{
    cout << "PRESS SMALL ('s') FOR SPACE BETWEEN TEXTS" << endl;
    int n = 0;
    cout << "enter HOW MANY TEXTS YOU WANT TO ENTER:  " << endl;
    cin >> n;
    n += 1;

    char arr[n];

    for (int i = 1; i < n; i++)
    {
        /* code */
        cout << "enter text." << endl;
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        int a = i;

        if (arr[a] == 'A')
        {
            /* code */
            printA();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'B')
        {
            /* code */
            printB();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'C')
        {
            /* code */
            printC();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'D')
        {
            /* code */
            printD();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'E')
        {
            /* code */
            printE();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'F')
        {
            /* code */
            printF();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'G')
        {
            /* code */
            printG();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'H')
        {
            /* code */
            printH();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'I')
        {
            /* code */
            printI();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'J')
        {
            /* code */
            printJ();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'K')
        {
            /* code */
            printK();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'L')
        {
            /* code */
            printL();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'M')
        {
            /* code */
            printM();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'N')
        {
            /* code */
            printN();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'O')
        {
            /* code */
            printO();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'P')
        {
            /* code */
            printP();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'Q')
        {
            /* code */
            printQ();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'R')
        {
            /* code */
            printR();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'S')
        {
            /* code */
            printS();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'T')
        {
            /* code */
            printT();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'U')
        {
            /* code */
            printU();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'V')
        {
            /* code */
            printV();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'W')
        {
            /* code */
            printW();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'X')
        {
            /* code */
            printX();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'Y')
        {
            /* code */
            printY();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 'Z')
        {
            /* code */
            printZ();
            cout << endl;
            cout << endl;
        }
        else if (arr[a] == 's')
        {
            /* code */
            cout << endl;
            cout << endl;
            cout << endl;
            cout << endl;
        }
        else
        {
            cout << "YOUR NAME IS" << endl;
        }
    }

    return 0;
}
