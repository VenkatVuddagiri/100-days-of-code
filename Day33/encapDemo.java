class Person{
    private int Id;
    private String name;
    int getId(){
        return this.Id;
    }
    void setId(int newId){
        this.Id=newId;
    }
    String getName(){
        return this.name;
    }
    void setName(String newName){
        this.name=newName;
    }
}

public class encapDemo{
    public static void main(String[] args) {
        Person p = new Person();
        p.setId(52);
        p.setName("Venkat");
        System.out.println(p.getId());
        System.out.println(p.getName());
    }
}
    

/*
                            ENCAPSULATION
    All the properties and behaviours of an entity should exist in that 
    entity only and the properties of an entity should be restricted to that 
    entity only and the values of the properties should be exposed/appeared through
    behaviours/methods  

    An entity is said to be completely encapsulated if it's all attributes are private
    and those attributes will have getters and setters

    Private access modifier

    Why we use encapsulation?
        Because of security
    
    A perfectly encapsulated entity is also known as java bin or use bin


*/
