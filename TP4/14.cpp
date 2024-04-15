//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num;
    int primerimp;
    int segundoimp;
    int cont, pos1, pos2;
    bool a=true, b=false;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while(num!=0){
        cont++;
        if(a==true&&num%2!=0){
            primerimp=num;
            pos1=cont;
            a=false;
            b=true;
        }
        if(b==true&&primerimp!=num&&num%2!=0){
            segundoimp=num;
            pos2=cont;
            b=false;
        }
    cout<<"Ingrese un numero: ";
    cin>>num;
    }
    cout<<"El primer impar es: "<<primerimp<<" en la posicion "<<pos1;
    cout<<endl;
    cout<<"Y el segundo impar es: "<<segundoimp<<" en la posicion "<<pos2;
	cout<<endl;
	system("pause");
	return 0;
}
