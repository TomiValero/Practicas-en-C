//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
     int num, i=0, cont=0;
    bool a=true;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while(i<num-1){
        i++;
        if(num%i==0){
            cont+=i;
        }
    }
    if(cont==num){
    cout<<"Es perfecto";
	cout<<endl;
    } else {
	cout<<"No es perfecto";
	cout<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
