#include<iostream>
using namespace std;

#define N 3

class Distance
{
    private:
        int m, cm;

    public:
        void read()
        {
            cin >> m >> cm;
        }

        Distance calcAvg(Distance d[])
        {
            Distance total;
            total.m = 0;
            total.cm = 0;

            for (int i = 0; i < N; i++)
            {
                total.m += d[i].m;
                total.cm += d[i].cm;
            }

            total.m += total.cm / 100;
            total.cm = total.cm % 100;

            // Calculate average
            total.m /= N;
            total.cm /= N;

            return total;
        }

        void show()
        {
            cout << m << " m and " << cm << " cm" << endl;
        }
};

int main()
{
    Distance d[N], avg;
    cout << "Enter distance in meters & centimeters:\n";
    for (int i = 0; i < N; i++)
    {
        cout << "Enter distance " << i + 1 << " : ";
        d[i].read();
    }

    avg = avg.calcAvg(d); // Calculate the average of distances
    cout << "Average Distance = ";
    avg.show(); // Display the average distance

    return 0;
}

