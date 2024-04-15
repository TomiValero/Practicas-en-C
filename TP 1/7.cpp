//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    float descuento, precioF, venta;
    cout<< "Ingrese el importe de la venta: $";
    cin>> venta;
    cout<< "Ingrese el descuento: %";
    cin>> descuento;
    precioF= venta*(1-(descuento/100));
    cout<< "El precio final es: $" << precioF;
	cout<<endl;
	system("pause");
	return 0;
}
