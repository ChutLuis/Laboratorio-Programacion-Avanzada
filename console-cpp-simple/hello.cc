// Simple Hello World
 
#include <iostream>
 
 int sumar(int a, int b)
 {
     return a+b;
     
 }
 int restar(int a, int b)
 {
     return a-b;
     
 }
 int multiplicar(int a, int b)
 {
     return a*b;
     
 }
 double dividir(double a, double b)
 {
     return a/b;
     
 }
 void sumapuntero(int,int,int*);
 void restapuntero(int,int,int*);
 void multpuntero(int,int,int*);
 void divpuntero(double,double,double*);
 void tablamultiplicar()
 {
     int foo[11]={};
  for(int i=1;i<11;i++)
  {
      
      foo[i]=5*i;
      std::cout << "Tabla del 5: 5* " <<i<<"=" << foo[i]<< std::endl;
  }
 }
int main()
{
  int resultados=-1;
  int resultador=-1;
  int resultadom=-1;
  double resultadod=-1;
  sumapuntero(5,7,&resultados);
  restapuntero(11,7,&resultador);
  multpuntero(5,7,&resultadom);
  divpuntero(27,13,&resultadod);
  
  std::cout << "No quiero perder la clase :(" << std::endl;
  std::cout << sumar(5,7) << std::endl;
  std::cout << restar(11,7) << std::endl;
  std::cout << multiplicar(5,7) << std::endl;
  std::cout << dividir(27,13) << std::endl;
  std::cout << "Resultado de la suma por referencia es " << resultados << std::endl;
  std::cout << "Resultado de la resta por referencia es " << resultador << std::endl;
  std::cout << "Resultado de la multiplicacion por referencia es " << resultadom << std::endl;
  std::cout << "Resultado de la división por referencia es " << resultadod << std::endl;
  tablamultiplicar();
  return 0;
}
void sumapuntero(int a, int b, int* resultado)
{
    *resultado=a+b;
}
void restapuntero(int a, int b, int* resultado)
{
    *resultado=a-b;
}
void multpuntero(int a, int b, int* resultado)
{
    *resultado=a*b;
}
void divpuntero(double a, double b, double* resultado)
{
    *resultado=a/b;
}