#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        double r;
        int n;
        cin >> r >> n;

        double firstX, firstY;
        cin >> firstX >> firstY;

        double prevX = firstX;
        double prevY = firstY;
        double length = 0;

        for (int i = 1; i < n; i++) {
            double x, y;
            cin >> x >> y;

            length += hypot(x - prevX, y - prevY);

            prevX = x;
            prevY = y;
        }
        length += hypot(firstX - prevX, firstY - prevY);

        double scale = (length - 2 * acos(-1.0) * r) / length;

        if (scale < 0)
            cout << "Not possible\n";
        else
            cout << fixed << setprecision(6) << scale << '\n';
    }

    return 0;
}