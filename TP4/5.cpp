//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int num1, num2,  i=1;
    cout<<"Inresar un numero: ";
    cin>>num1;
   cout<<"Inresar un numero: ";
    cin>>num2;
    if(num1>num2){
        i=num2;
    while(i<=num1){
        cout<<"Vuelta: "<<i<<endl;
        i++;
    }} else {
        i=num1;
    while(i<=num2){
        cout<<"Vuelta: "<<i<<endl;
        i++;
    }}
	cout<<endl;
	system("pause");
	return 0;
}
