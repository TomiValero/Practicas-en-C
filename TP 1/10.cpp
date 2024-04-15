//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int horas, dias, totald, horasSo;
    cout<< "Ingrese la cantidad de horas: ";
    cin>> horas;
    totald= horas/24;
    horasSo = horas % 24;
    cout<< "Eso equivale a " << totald << " DIAS y " << horasSo << " HORAS";
	cout<<endl;
	system("pause");
	return 0;
}
