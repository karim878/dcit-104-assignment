 #include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int i;
    int sum = 0;

    for(int i = 1; i <= 10000 ; i++)
        {
        if(i % 2 == 0)
        {
        sum = sum + i;
        n++;

        }

        }
        int average = sum / n;
        cout << endl << "average is " << average;


    return 0;
}
