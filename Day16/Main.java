// package com.employee;
//create employee class
//name,age,city
//two objects and create a function named display
//to show the details
public class Main {
    public static void main(String[] args) {
        //First object
        Employee e1 = new Employee();
        e1.name="Venkat";
        e1.age=19;
        e1.city="Hyderabad";
        e1.display();
        //Second object
        Employee e2 = new Employee();
        e2.name="Unknown";
        e2.age=20;
        e2.city="Indore";
        e2.display();
    }
}