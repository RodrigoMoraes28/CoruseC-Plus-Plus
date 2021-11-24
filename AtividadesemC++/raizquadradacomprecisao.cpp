#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

    int n;
    float num,raiz;

    cin >> n;

    for(int i=0; i<n; i++){ // esse for aqui eh para ler os numeros n vezes e depois ele executa
        cin >> num;
        raiz = sqrt(num);
    	cout << fixed << setprecision (4); //raiz quadrada porem escolhendo a precisão do resultado da raiz, ae no caso foi de 4 , mas poderia ser de qualquer outro numero
        cout << raiz << endl ;
}

 return 0;
}
