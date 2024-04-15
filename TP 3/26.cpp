//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int i, num, cont=0, primernum;
    for(i=1;i<=10;i++){
        cout<<"Ingrese un numero: ";
        cin>>num;
        if(i==1){
            primernum=num;
        }
        if (i!=1&&num%2!=0&&primernum%2!=0){
            cont++;
          }
        primernum=num;

    }
    cout<<"Hay "<<cont<<" duplas de impares";
	cout<<endl;
	system("pause");
	return 0;
}
