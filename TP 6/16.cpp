//Ejercicio:
//Autor:
//Fecha:
//Comentario:

# include<iostream>
# include<cstdlib>

using namespace std;


int main(){
    int art[20], num, cant, i, artma, maxi=0,nov[20], p;
    bool band=true;
     for(i=0;i<21;i++){
       art[i]=0;
    }
     for(p=0;p<21;p++){
       nov[p]=0;
    }
    cout<<"Ingrese un numero de articulo: ";
    cin>>num;
    cout<<"Ingrese la cantidad vendida: ";
    cin>>cant;
    while (num!=0){
        art[num]+=cant;
        cout<<"Ingrese un numero de articulo: ";
        cin>>num;
        cout<<"Ingrese la cantidad vendida: ";
        cin>>cant;
    }
     for(i=0;i<21;i++){
        if(band==true){
            maxi=art[i];
            artma=i;
            band=false;
        }
        if(band==false&&maxi<art[i]){
            maxi=art[i];
            artma=i;
        }
     }
        p=0;
    for(i=0;i<21;i++){
            if(art[i]==0){
                nov[p]=i;
                p++;
            }
        }
    cout<<"B) Art No vent: "<<endl;
     for(p=0;p<21;p++){
            if(nov[p]!=0){
                cout<<nov[p]<<endl;
            }
        }
	cout<<"A) Art max: "<<artma<<endl;
	cout<<"C) Ventas del art 10: "<<art[10]<<endl;
	system("pause");
	return 0;
}
