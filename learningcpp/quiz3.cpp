#include <iostream>
using namespace std;
int main()
{ double zero {0.0};
double pi {5.0/zero};
cout << pi << "\n";
double ni {-5.0/zero};
cout << ni << "\n";
double z1 {zero/pi};
cout << z1 << "\n";
double z2 {zero/ni};
cout << z2 << "\n";
double nan {zero/zero};
cout << nan << "\n";
  return 0;
}