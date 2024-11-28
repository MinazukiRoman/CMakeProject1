#include<iostream>
#include<math.h>

int main() {
    using namespace std;

    string departureTime, arrivalTime;

    bool checkingForErrors;

    int departureHours;
    int departureMinutes;
    int arrivalHours;
    int arrivalMinutes;

    do {
        checkingForErrors = true;
        cout << "Input departure time (HH:MM): ";
        cin >> departureTime;

        if (departureTime.length() != 5 || departureTime[2] != ':'
            || departureTime[0] > '2' || departureTime[0] < '0'
            || departureTime[1] > '9' || departureTime[1] < '0'
            || departureTime[3] > '5' || departureTime[3] < '0'
            || departureTime[4] > '9' || departureTime[4] < '0') {
            checkingForErrors = false;
        }
        else {
            departureHours = 10 * (departureTime[0] - '0') + (departureTime[1] - '0');
            departureMinutes = 10 * (departureTime[3] - '0') + (departureTime[4] - '0');
            if (departureHours > 23 || departureMinutes > 59) {
                checkingForErrors = false;
            }
        }
    } while (checkingForErrors == false);

    do {
        checkingForErrors = true;
        cout << "Input arrival time (HH:MM): ";
        cin >> arrivalTime;

        if (arrivalTime.length() != 5 || arrivalTime[2] != ':'
            || arrivalTime[0] > '2' || arrivalTime[0] < '0'
            || arrivalTime[1] > '9' || arrivalTime[1] < '0'
            || arrivalTime[3] > '5' || arrivalTime[3] < '0'
            || arrivalTime[4] > '9' || arrivalTime[4] < '0') {
            checkingForErrors = false;
        }
        else {
            arrivalHours = 10 * (arrivalTime[0] - '0') + (arrivalTime[1] - '0');
            arrivalMinutes = 10 * (arrivalTime[3] - '0') + (arrivalTime[4] - '0');
            if (arrivalHours > 23 || arrivalMinutes > 59) {
                checkingForErrors = false;
            }
        }
    } while (checkingForErrors == false);

    int hoursOnTheWay = 0;
    int minutesOnTheWay = 0;

    int differenceInMinutes = arrivalMinutes - departureMinutes;
    int differenceInHourse = arrivalHours * 60 - departureHours * 60;
    int allDifferenceInMinutes = differenceInMinutes + differenceInHourse;

    hoursOnTheWay = differenceInHourse <= 0 ? 24 - abs(differenceInHourse / 60) : differenceInHourse / 60;
    minutesOnTheWay = differenceInMinutes < 0 ? 60 - abs(differenceInMinutes) : differenceInMinutes;
    if (hoursOnTheWay == 24) {
        hoursOnTheWay = differenceInMinutes < 0 ? 23 : 0;
    }if (differenceInMinutes < 0 && differenceInHourse > 0) {
        hoursOnTheWay -= 1;
    }if (differenceInMinutes < 0 && differenceInHourse < 0) {
        hoursOnTheWay -= 1;
    }

    cout << "The trip took: " << hoursOnTheWay << " hours " << minutesOnTheWay << " minutes.";
}