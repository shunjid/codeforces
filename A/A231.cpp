#include <bits/stdc++.h>
using namespace std;

int sum(int x, int y, int z) {
    return x + y + z;
}

int main(int argc, char const *argv[])
{
    int n;
    int total = 0;
    int x, y, z;

    cin >> n;

    while(n--) {
        cin >> x >> y >> z;
        if(sum(x, y, z) >= 2) total++;
    }

    cout << total << endl;

    return 0;
}
