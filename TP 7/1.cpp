//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;
void tresveces(int x){
    for(int i=0;i<3;i++){
        cout<<x<<endl;
    }
}

int main(){
    int num;
    cout<<"Ingrese un numero: ";
    cin>>num;
    tresveces(num);
	cout<<endl;
	system("pause");
	return 0;
}
