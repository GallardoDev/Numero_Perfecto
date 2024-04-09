
#include <iostream>
#include <vector>

using namespace std;

vector<int> divisores(int n) {
    vector<int> divs;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
        }
    }
    return divs;
}

bool es_perfecto(int n) {
    vector<int> divs = divisores(n);
    int sum = 0;
    for (int div : divs) {
        sum += div;
    }
    return sum == n;
}

int main() {
    int a;
    cout<<"Introduce el valor ENTERO hasta el cual deseas buscar el número perfecto: "<<endl;
    cin>>a;
    for (int i = 1; i <= a; i++) {
        if (es_perfecto(i)) {
            cout << i << endl;
        }
    }
    return 0;
}
