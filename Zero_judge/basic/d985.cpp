#include <iostream>
#include <sstream>
using namespace std;

string intToChar(int number)
{
    ostringstream oss;

    oss << number;

    return oss.str();
}

int main()
{
    int cinArrayCount, cinArraySubCount;

    cin >> cinArrayCount;

    for (int runCinArrayCount = 0; runCinArrayCount < cinArrayCount; runCinArrayCount++)
    {
        float sumSec = 0;

        int bestLap = 0;

        cin >> cinArraySubCount;

        for (int runCinArraySubCount = 0; runCinArraySubCount < cinArraySubCount; runCinArraySubCount++)
        {
            int cinMinute;

            int cinSecond;

            cin >> cinMinute;

            cin >> cinSecond;

            sumSec += (cinMinute * 60) + cinSecond;

            if (runCinArraySubCount == 0)
            {
                bestLap = (cinMinute * 60) + cinSecond;
            }

            if (bestLap > (cinMinute * 60) + cinSecond)
            {
                bestLap = (cinMinute * 60) + cinSecond;
            }
        }

        cout << "Track " + intToChar(runCinArrayCount + 1) + ":" << endl;

        int minute = bestLap / 60;

        int sec = bestLap % 60;

        cout << "Best Lap: " + intToChar(minute) + " minute(s) " + intToChar(sec) + " second(s)." << endl;

        minute = (sumSec / cinArraySubCount) / 60;

        sec = (int)(sumSec / cinArraySubCount) % 60;

        cout << "Average: " + intToChar(minute) + " minute(s) " + intToChar(sec) + " second(s)." << endl;
    }

    return 0;
}