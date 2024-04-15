//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    float Pdescuento, Pnormal, descuento;
    cout<< "Ingrese el importe de la venta con descuento: $";
    cin>> Pdescuento;
    cout<< "Ingrese el importe de la venta sin descuento: $";
    cin>> Pnormal;
    descuento= 100-((Pdescuento*100)/Pnormal);
    cout<< "El descuento fue de: " << descuento;
	cout<<endl;
	system("pause");
	return 0;
}
