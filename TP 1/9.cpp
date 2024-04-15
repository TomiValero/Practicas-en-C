//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int minutos, horas, totalH, minutosSo;
    cout<< "Ingrese la cantidad de minutos: ";
    cin>> minutos;
    totalH= minutos/60;
    minutosSo = minutos % 60;
    cout<< "Eso equivale a " << totalH << " HORAS y " << minutosSo << " MINUTOS";
	cout<<endl;
	system("pause");
	return 0;
}
