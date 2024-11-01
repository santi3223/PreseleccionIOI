#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vl vector<ll>
#define pb push_back
#define ff(i, p, x) for (ll i = p; i < x; i++)
#define all(a) (a).begin(), (a).end()
#define ed "\n"
//me faltan declarar los vectores xd

void Init(int N_) {
  n = (long long)N_;
  Grafo.assign(n, vector<long long>());
}

void Link(ll A, ll B){
    A--; B--;
    gra[A].push_back(B);
    gra[B].push_back(A);
    grado[A]++;
    grado[B]++;
}

void dfs(ll nodo){
    visitado[nodo] = true;
    for(auto &vecino : gra[nodo]){
        if(!visitado[vecino]){
            dfs(vecino);
        }
    }
}

bool esCadena(ll excluido){
    fill(visitado.begin(), visitado.end(), false);
    ll componentes = 0;
    ff(i, 0, N){
        if(i != excluido && !visitado[i]){
            componentes++;
            dfs(i);
        }
    }

    return componentes == 1; // Solo debe haber un componente conectado ..?
}

int CountCritical(){
    ll criticos = 0;
    ff(i, 0, N){
        if(grado[i] <= 2){
            if(esCadena(i)){
                criticos++;
            }
        }
    }

    return criticos;
}

int main() {
    // Ejemplo de uso
    Init(7);
    cout << CountCritical() << ed; // Debería devolver 7
    Link(1, 2);
    cout << CountCritical() << ed; // Debería devolver 7
    Link(0, 5);
    cout << CountCritical() << ed; // Debería devolver 7
    Link(2, 0);
    cout << CountCritical() << ed; // Debería devolver 7
    Link(3, 2);
    cout << CountCritical() << ed; // Debería devolver 4
    Link(3, 5);
    cout << CountCritical() << ed; // Debería devolver 3
    Link(4, 3);
    cout << CountCritical() << ed; // Debería devolver 2

    return 0;
}

//Por ahí va la idea, seguro da comp error, pero algo asi es la solución
