//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int e, num, contpl=0, ultprimo=0, posicionpri=0;
    cout<<"INGRESE UN NUMERO: ";
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
	cout<<ultprimo<<endl<<posicionpri<<endl;
	system("pause");
	return 0;
}
