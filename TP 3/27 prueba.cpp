//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, i, e, ultprimo=0, contpl, posicionpri=0;
    //for(i=1;i<=1;i++){
    cout<<"Ingrese un numero: ";
    cin>>num;
    for(e=1;e<=num;e++){
    if(num%e==0) {
        contpl++;
            }}
    if(contpl==2){
        ultprimo=num;
        posicionpri=e;
        contpl=0;
    }
    cout<<"B) El ultimo primo es: "<<ultprimo;
    cout<<endl;
    cout<<"Y esta en la posicion: "<<posicionpri;
    cout<<endl;
    ///}
	cout<<endl;
	system("pause");
	return 0;
}
