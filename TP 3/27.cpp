//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, o, e;
    int num, contn=0, contc=0, contp=0;
    int ultprimo=0, posicionpri=0, contpl=0;
    int contimp=0;
    for(i=1;i<3;i++){
        cout<<"Inreso de datos del grupo i: ";
        ultprimo=0;
        for(o=1;o<6;o++){
            cout<<"Ingrese un numero: ";
            cin>>num;
            for(e=1;e<=num;e++){
                if(num%e==0) {
                    contpl++;
                }}
                if(contpl==2){
                    ultprimo=num;
                    posicionpri=o;
                }
                contpl=0;

                 if(num%2!=0){
                    contimp++;
                }
                if (num>0) {
                    contp++;
                }
                if (num<0) {
                    contn++;
                }
                if (num==0) {
                    contc++;
                }
            }
    cout<<"A)Los positivos son: "<<contp;
    cout<<endl;
    cout<<"Los negativos son: "<<contn;
    cout<<endl;
    cout<<"los ceros son: "<<contc;
    cout<<endl;
    contp=0;
    contn=0;
    contc=0;
    if(ultprimo!=o){
    cout<<"B) El ultimo primo es: "<<ultprimo;
    cout<<endl;
    cout<<"Y esta en la posicion: "<<posicionpri;
    cout<<endl;
    } else {
        cout<<"No hubo numeros primos en ese grupo.";
        cout<<endl;
    }
    }
    cout<<"c) Hay: "<<contimp<<" numeros impares en total";
	cout<<endl;
	system("pause");
	return 0;
}
