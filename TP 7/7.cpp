//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
void divisor(int x){
    for(int i=1;i<=x;i++){
        if(x%i==0){
            cout<<i<<endl;
        }
    }
}

int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    divisor(num);
	cout<<endl;
	system("pause");
	return 0;
}
