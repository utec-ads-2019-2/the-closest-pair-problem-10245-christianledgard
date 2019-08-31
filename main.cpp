#include <iostream>
#include <cmath>
#include <float.h>
#include <iomanip>


using namespace std;

long double distanciaDosPuntos(pair<long double,long double>p1,pair<long double,long double>p2){
    return sqrt(pow(p1.first-p2.first,2)  + pow(p1.second-p2.second,2));
}

int main() {
    int n;
    while(cin>>n){
        if(n == 0) continue;

        long double distanciaMinima = DBL_MAX;

        pair<long double, long double> Puntos[n];

        for (int i = 0; i < n; ++i)
            cin >> Puntos[i].first >> Puntos[i].second;

        for (int l = 0; l < n; ++l)
            for (int k = l + 1; k < n; ++k)
                distanciaMinima = min(distanciaDosPuntos(Puntos[l],Puntos[k]),distanciaMinima);


        if(distanciaMinima<10000)
            cout << fixed << setprecision(4) << distanciaMinima << endl;
        else
            cout << "INFINITY" << endl;

    }
    return 0;
}