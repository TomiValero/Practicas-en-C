//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
   int numero, cifra;
    cout << "Ingresa un numero: ";
    cin >> numero;

    while (numero > 0) {
        cifra = numero % 10;
        cout << cifra << ", ";
        numero /= 10;
    }

    cout << endl;
    system("PAUSE");
    return 0;

	cout<<endl;
	system("pause");
	return 0;
}
