#include <iostream>
#include <cmath>
using namespace std;
int calc(int d, int l) {
    if (d < 0) return 0;
    double lado = sqrt((d*d) - (l*l));
    if (static_cast<int>(lado) == lado) return static_cast<int>(lado) + l;
    return calc(d, l-1);
}

int main() {
    int casos;
    cout << "Dame la cantidad de casos casos: " << endl;
    cin >> casos;

    int distancia;
    while (casos-- != 0) {
        cout << "Dame la distancia: "<< endl;
        cin >> distancia;
        cout << "La distancia mínima que habrá recorrido el taxi para llevar al turista a su destino es :  " << endl <<calc(distancia, distancia-1) << endl;
    }

    return 0;
}
