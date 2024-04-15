//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num, ant;
    bool ind=false, a=true;
    cout<<"Ingrese un numero: ";
    cin>>num;
    ant=num;
    while(num!=0){
        if (a==true&&num>=ant){
            ant=num;
        }else{
            a=false;
        }
        cout<<"Ingrese un numero: ";
        cin>>num;
    }
    if(a==false){
        cout<<"Conjunto NO ordenado"<<endl;
    } else {
        cout<<"Conjunto ordenado"<<endl;
    }
	cout<<endl;
	system("pause");
	return 0;
}
