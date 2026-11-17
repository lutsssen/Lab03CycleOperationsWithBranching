/*************************************
*Автор: Луцаев Владислав Николаевич  *
*Циклы с пред- и постусловиями       *
*Группа: ПИ-261                      *
*Вариант: 14                         *
*************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double height;
  double riseTime;
  double averageTemperature;
  double startOfCounting = 10.0;
  double countingTime = 0.5;
  double multiplyForHeight = 4.87;
  double limitForHeight = 11.0;
  double multiplyLowHeight = 6.55;
  double multiplyHighHeight = 0.01;
  double heightScore1 = 15.2;
  double heightScore2 = -56.6;
  double outputTime = 0.5;
  double limitOfCycle = 5.0;
  double startOfCycle = 1.0;

  for (riseTime = 0.5; riseTime <= startOfCounting; riseTime += countingTime) {

    height = multiplyForHeight * sqrt(riseTime);

    if (height < limitForHeight) {
      averageTemperature = heightScore1 - multiplyLowHeight * height;
    } else {
      averageTemperature = heightScore2 + multiplyHighHeight * height;
    }

    for (int i = startOfCycle; i < limitOfCycle; ++i) {
      if (riseTime == outputTime) {
        cout << "Rise time = " << riseTime << endl
        << "Height = " << height << endl
        << "Average temperature = " << averageTemperature << endl;
      }

    if (i == 1) outputTime = 1.0;
    else if (i == 2) outputTime = 2.0;
    else if (i == 3) outputTime = 5.0;
    else if (i == 4) outputTime = 10.0;
    }
  }
  return 0;
}