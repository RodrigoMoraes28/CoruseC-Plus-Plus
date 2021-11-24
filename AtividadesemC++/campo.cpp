#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main(){

    int n;
    float num,raiz;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> num;
        raiz = sqrt(num);
    	cout << fixed << setprecision (4);
        cout << raiz << endl ;
}

 return 0;
}
