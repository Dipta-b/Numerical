#include <bits/stdc++.h>
using namespace std;

double f1(double y, double z)
{
    return (5 - y - z) / 2;
}
double f2(double x, double z)
{
    return (15 - 3 * x - 2 * z) / 5;
}
double f3(double x, double y)
{
    return (8 - 2 * x - y) / 4;
}

int main()
{
    float x0 = 0, y0 = 0, z0 = 0, x1, y1, z1, e1, e2, e3, e;

    cout << setprecision(3) << fixed;

    cout << "Enter tolerable error: ";
    cin >> e;

    cout << endl
         << "Count\tx\t\ty\t\tz" << endl;

    do
    {
        x1 = f1(y0, z0);
        y1 = f2(x1, z0);
        z1 = f3(x1, y1);

        e1 = abs(x0 - x1);
        e2 = abs(y0 - y1);
        e3 = abs(z0 - z1);

        cout << x0 << " " << y0 << " " << z0 << endl;

        x0 = x1;
        y0 = y1;
        z0 = z1;

    } while (e1 > e && e2 > e && e3 > e);

    cout << endl
         << "Solution: x = " << x1 << ", y = " << y1 << " and z = " << z1;
    return 0;
}