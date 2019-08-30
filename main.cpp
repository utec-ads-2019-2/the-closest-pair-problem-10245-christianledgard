#include <iostream>
#include <cmath>
#include <float.h>
#include <iomanip>


using namespace std;

double distanciaDosPuntos(int x1, int y1, int x2, int y2){
    return sqrt( pow(x2-x1,2)  + pow(y2-y1,2));
}


int main() {

    int n;
    while(cin>>n){
        if(n == 0) continue;
        int puntos[n][2], punto;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < 2; ++j) {
                cin >> punto;
                puntos[i][j] = punto;
            }
        }

        double menor = DBL_MAX;

        for (int l = 0; l < n; ++l) {
            for (int k = 0; k <= n; ++k) {
                if (puntos[l][0] != puntos[k][0] and puntos[l][1] !=  puntos[k][1]){
                    auto dis = distanciaDosPuntos(puntos[l][0],puntos[l][1],puntos[k][0],puntos[k][1]);
                    if(dis < menor  and dis != 0){
                        menor = dis;
                    }
                }
            }
        }

        if(menor<10000){
            cout << fixed << setprecision(4) << menor << endl;
        }else{
            cout << "INFINITY" << endl;
        }
    }
    return 0;
}