package org.eclipse.che.examples;

public class Rectangle implements Shape {
    private double width;
    private double length;
    
    
    public Rectangle(double length, double width) {
      
      this.length = length;
      this.width = width;
   }
    
    public double getArea() {
      return length*width;
   }
    public String toString() {
      return "Rectangle[length=" + length + ",width=" + width + "," + super.toString() + "]";
   }
   
    
}
