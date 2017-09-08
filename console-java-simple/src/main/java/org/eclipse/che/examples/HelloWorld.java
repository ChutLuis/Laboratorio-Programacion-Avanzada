package org.eclipse.che.examples;

public class HelloWorld {
    public static void main(String... argvs) {
        Shape a1, b1 , c1;
        a1= new Rectangle(10,10);//Toma forma de rectangulo - Polimorfismo
        a1.toString();
        b1= new Triangle(10,4);//Toma forma de triangulo - Polimorfismo
        b1.toString();        
        
        
        //Prueva cambio de forma
        c1= new Rectangle(5,5);
        System.out.print(c1.toString());
        c1=b1;
        System.out.print(c1.toString());
        
        
    }
}
