#include <iostream>
using namespace std;
int main(){

    int N;
    int campo[55];

    cin >> N;
    
    // aq o campo entra num for
    for (int i=0;i<N;i++){
         cin >> campo[i];
    }
    //aq verifica a quantidade
    for (int i=0;i<N;i++){
        int quantidade = 0;
        quantidade = quantidade +campo [i];

        if (i < N-1){
        quantidade = quantidade +campo [i+1];
        }
        if(i>0){
        quantidade = quantidade +campo [i-1];
    }
        cout << quantidade << endl; //aq imprime a quantidade

    }

return 0;
}
