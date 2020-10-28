package Day34;  
public class Main {
    public static void main(String[] args){
        Employee r = new Employee();
        Employee e= new Employee(452);
        System.out.println(e.id);
        System.out.println(r.id);
        e.printSomething("Venkat");
    }
}

class Employee{
    int id;
    Employee(){
        this.id=0;
    }
    Employee(int id){
        this.id=id;
    }
    public void printSomething(String name) {
        System.out.println(name);
    }
}