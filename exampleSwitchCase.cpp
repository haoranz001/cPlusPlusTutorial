#include<iostream>
using namespace std;

int main(){
    int day = 5;
    
    const int tu = 2;
    int wed = 3;
    switch (day) {
      case false:
        cout << "Monday";
        break;
      case tu:
        cout << "Tuesday";
        break;
      case wed:
        cout << "Wednesday";
        break;
      case 't':
        cout << "Thursday";
        break;
      case 5:
        cout << "Friday";
        break;
    }
}
