#include <iostream>
#include <cmath>
using namespace std;

float calculateSD(float data[]) {
  float sum = 0.0, mean, standardDeviation = 0.0;
  int i;

  for(i = 0; i < 10; ++i) {
    sum += data[i];
  }

  mean = sum / 10;

  for(i = 0; i < 10; ++i) {
    standardDeviation += pow(data[i] - mean, 2);
  }

  return sqrt(standardDeviation / 10);
}


int main() {
  int i, n;
  cout << "Enter the number of elements : ";
  cin >> n;
  float data[n]; //dynamic allocation
  cout << endl;

  for(i = 0; i < n; ++i) {
    cout << "Enter number " << i + 1 << " : ";
    cin >> data[i];
  }

  cout << endl << "Standard Deviation = " << calculateSD(data) << endl;
  return 0;
}