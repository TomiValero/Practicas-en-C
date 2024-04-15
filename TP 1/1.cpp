//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int horas;
    float paga, sueldo;
    cout<< "Ingrese la cantididad de horas trabajadas: ";
    cin>> horas;
    cout<< "Ingrese la paga por hora: $";
    cin>> paga;
    sueldo=horas*paga;
    cout<< "Este es el sueldo: $"<< sueldo;
	cout<<endl;
	system("pause");
	return 0;
}
