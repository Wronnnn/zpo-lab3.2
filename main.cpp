#include <iostream>

using namespace std;

template <typename T>
T najwiekszyElement(T *tab, int n){
    T naj = tab[0];
    for(int i=1;i<n;i++){
        if(tab[i]>naj){
            naj = tab[i];
        }
    }
    return naj;
}


int main() {
    int n = 10;
    int tab[n] = {34, 12, 35, 12, 54, 23 ,5 ,23 ,12 ,43};
    cout<<najwiekszyElement(tab, n);
    return 0;
}