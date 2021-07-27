#include <iostream>
using namespace std;


int MDC (int a, int b) {
 while (b != 0)
 {
     int r = a % b;
     a = b;
     b = r;
 }
 return a;

  return 0;
}
  
int MMC (int a, int b) {
    return a / MDC(a, b) * b;

  return 0;
  }

bool saoPrimos (int a, int b) {
if (MDC(a,b) == 1)
{
return true;}
else
return false;
}

int main() {
  int numA, numB;
  cin >> numA >> numB;

  cout << "MDC(" << numA << ", " << numB << ") = "
       << MDC (numA, numB) << endl;
  cout << "MMC(" << numA << ", " << numB << ") = "
       << MMC (numA, numB) << endl;

  cout << numA << " e " << numB;
  bool primos = saoPrimos(numA, numB);
  if (primos == true)
    cout << " sao primos.\n";
  else
    cout << " nao sao primos.\n";

  return 0;
}
