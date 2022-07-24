#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#define MIN 1
#define MAX 1000

int main()
{
    srand((unsigned) time(0));
    
    int n = MIN + MAX * rand() / (RAND_MAX + 1);
    
    int x;
    cout << "Please guess the number which is created by random" << endl;
    cin >> x;
    
    while (x != n)
    {
        if (x > n) cout << "Your number is bigger, please try again." << endl;
        else cout << "Your number is smaller, please try again." << endl;
        cin >> x;
    }
    
    cout << endl << "Congratulations! You get the true answer!" << endl;
    cout << endl;
    return 0;
}