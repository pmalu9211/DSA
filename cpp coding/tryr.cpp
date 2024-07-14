#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int z = 0;
        for (int i = 0; i < a; i++) {
            int l, m, n;
            cin >> l >> m >> n;
            // cout << "l = " << l << " m = " << m << endl;
            // cout << "l = " << l << " m = " << m << endl;

            if (n > b) {
                break;
            }
            // cout << "z = " << z << endl;
            // cout << "l = " << l << " m = " << m << endl;
            z = max(z, l * m);
            // cout << "z = " << z << endl;
        }
        if (z == 0)
            cout << "no tablet" << "\n";
        else
            cout << z << "\n";
    }
    return 0;
}
