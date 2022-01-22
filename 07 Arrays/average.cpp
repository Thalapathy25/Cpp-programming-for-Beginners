#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float sum=0.0, average;

    cout << "Enter the numbers of elements: ";
    cin >> n;
    float num[n];
    cout << endl;

    for(i = 0; i < n; ++i)
    {
        cout << "Enter number " << i + 1 << " : ";
        cin >> num[i];
        sum += num[i];
    }

    average = sum / n;
    cout << endl << "Average = " << average << endl;
    return 0;
}