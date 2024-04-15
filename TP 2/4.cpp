//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int n1, n2, dif;
    cout<<"ingrese un numero: ";
    cin>>n1;
    cout<<"ingrese un numero: ";
    cin>>n2;
    if (n2>0&&n1>0){
        dif=n2-n1;
        cout<<dif;
    }
    else{
        if(n2>0&&n1<n2&&n1<0){
        dif=n2+n1;
        cout<<dif;
        }
        else{
        if(n2<0&&n1<n2&&n1<0){
        dif=n2+n1;
        cout<<dif;
        }
    }}
	cout<<endl;
	system("pause");
	return 0;
}
