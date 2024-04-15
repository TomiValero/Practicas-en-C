//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num1, num2, diferencia;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    diferencia = abs(num1 - num2);

    cout << "La diferencia absoluta entre " << num1 << " y " << num2 << " es: " << diferencia;
	cout<<endl;
	system("pause");
	return 0;
}
