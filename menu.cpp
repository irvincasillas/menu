#include <iostream>
#include <string>
using namespace std;
//Desarrollar un programa que permita hacer lo siguiente, para su ejecución, debe mostrar un menú para que el usuario elija la opción
//1.- Leer un numero y mostrar un mensaje que diga si el numero es primo o no lo es, un numero es primo siempre que solo sea divisible por 1 y por el mismo.
//2.- Leer un numero y mostrar su factorial, el factorial de un numero n, se expresa así n! y se obtiene multiplicando todos los numeros positivos de 1 hasta el numero: 5! = 1 x 2 x 3 x 4 x 5
//3.- Leer calificaciones y promediar todo, el sistema preguntara una calificación, y dejara de pedir calificaciones para poder obtener el promedio cuando reciba un numero -1
//0.- Salir
int main()
{
  int op ; 
do{

  cout<<"Menu"<<endl;
  cout<<"1.Numeros Primos"<<endl;
  cout<<"2.Factorial de un numero"<<endl;
  cout<<"3.Promedio de calificaciones"<<endl;
  cout<<"0.Salir"<<endl;
  cout<<"Opcion: ";
  cin>>op;
  
  switch(op)
  {
    case 1: {
        int a = 0 , n ;
        cout<<"Numeros primos"<<endl;  
        cout<<"Ingrese numero"<<endl;
        cin>>n;
        for(int i=1; i<(n+1) ; i++){
         if(n%i==0) a++;
        }
        if(a!=2)
              cout<<"No es primo";
        else
            cout<<"Si es primo";
        cout<<endl;
        break ; 
    }
      
    case 2: {
        int n , f , i ;
        f = 1 ;
        cout<<"Factorial de un numero"<<endl;
        cout<<"Ingresa un numero";
        cin>>n;
        for (i = 1; i <= n; i++)
            f = f * i;
        cout<<"El factorial de " <<n<<" es " << f <<endl; 
         
        break;
    }
        
    case 3: {
        int x = 0 , n , suma=0;
        float promedio ;
        do{
            cout<<"Ingresa calificacion:" ;
            cin>>n ; 
            if(n!=-1){
                suma = n + suma;
                x++;
            }
        }while(n!=-1); 
        promedio = suma / x ;
        cout<<"El promedio es "<<promedio<<endl;
        
        break;
    }
    case 0: break;
   return 0 ;
	}
 }while(op!=0);
}