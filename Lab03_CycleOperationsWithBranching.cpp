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
  double timeHours;
  double heightKm;
  double averageTemperature;
  double heightCoefficient = 4.87;
  double heightLimit = 11.0;
  double temperatureAtLowHeight = 15.2;
  double temperatureCoefficientLow = 6.55;
  double temperatureAtHighHeight = -56.6;
  double temperatureCoefficientHigh = 0.01;

  cout << "Enter rise time (0.5, 1, 2, 5 or 10): ";
  cin >> timeHours;

  if (timeHours != 0.5 && timeHours != 1.0 && timeHours != 2.0 && timeHours != 5.0 && timeHours != 10.0) {
      cout << "Incorrect time!" << endl;
      return 0;
  }

  heightKm = heightCoefficient * sqrt(timeHours);

  if (heightKm < heightLimit) {
    averageTemperature = temperatureAtLowHeight - (temperatureCoefficientLow * heightKm);
  } else {
    averageTemperature = temperatureAtHighHeight + (temperatureCoefficientHigh * heightKm);
  }

  cout << "Time = " << timeHours << " hours" << endl
  << "Height = " << heightKm << " km" << endl
  << "Average temperature = " << averageTemperature << endl;

  return 0;
}