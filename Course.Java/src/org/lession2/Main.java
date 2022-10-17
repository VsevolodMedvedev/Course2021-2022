package org.lession2;

public class Main {
    public static void main(String[] args) {
        Car toyota = new Car("Toyota", Colour.WHITE, false);
        toyota.setPrice(5000);
        System.out.println(toyota);

        toyota.calculate(toyota, 1000);
        System.out.println(toyota.getPrice());


    }
}