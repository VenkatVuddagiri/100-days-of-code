//Types of inheritance(HW)
//1.single level
//2.multiple inheritance
//3.multlevel
//4.Hierachial
//5.Hybrid
public class inheritanceDemo {
    public static void main(String[] args) {
        Employee e = new Employee();
        e.setAge(20);
        System.out.println(e.getAge());
        e.setName("Venkat");
        System.out.println(e.getName());
    }
}
class Human{
    private int age;
    private String name;
    public void setAge(int Age){
        this.age=Age;
    }
    public int getAge(){
        return this.age;
    }
    public void setName(String name){
        this.name=name;
    }
    public String getName(){
        return this.name;
    }   
}

class Employee extends Human{
    private double salary;
    public void setSalary(double salary){
        this.salary=salary;
    }
    public double getSalary(){
        return this.salary;
    }   
}

/*
                            INHERITANCE

    Getting a specialized entity from generalied entity is known as 
    inheritance

    3 types of entities in java
        Class 
        Enum 
        Interface

    we use some keywords to achieve inheritance in Java
    
    1)extends

    2)implements

    The keywords which has to be used depends on the type of the entities
    inherited

    We use the keyword 'extends' to achieve inheritance between 2 similar
    entities

    We use the keyword 'implements' to achieve inheritance between 2 entities 
    different types

    Syntax:
    class Specialized entity extends General Entity

    The relationship which is established between 2 entities because
    inheritance is known as "is-a relationship"

    Only attributes and methods will be inherited by inheritance

    Private members,constructors and initialization blocks cannot be
    inherited via inheritance

    In general the Generalized entity is known as Super class/Parent class
    and the specialized entity is known as sub class/child class 

    Static members can also be inherited from parent class
*/
