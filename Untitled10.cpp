#include <iostream>
using namespace std;

void decToOctal(int n)
{
 
   
    int octalNum[100];
 
    int i = 0;
    while (n != 0) {
 
     
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
        cout << octalNum[j];
        cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    
    decToOctal(n);
 
    return 0;
}
