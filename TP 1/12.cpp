//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int huevoca, cajas, huevoso;
    float preciofin;
    cout<< "Ingrese la cantidad de huevos: ";
    cin>> huevoca;
    cajas= huevoca/12;
    huevoso = huevoca % 12;
    preciofin= (huevoso*12)+(cajas*100);
    cout<< "Es un total de : $" << preciofin;
	cout<<endl;
	system("pause");
	return 0;
}
