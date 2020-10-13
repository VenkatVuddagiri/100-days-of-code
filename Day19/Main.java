import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        Person p1=new Person();
        int option;
        String newName;
        int newAge;
        int newHeight;
        int newWeight;
        String newDOB;
        String newGender;
        String newCountry;
        do{
            System.out.println("*******************************************");
            System.out.println("Enter a number between 1 & 14 and 0 to exit");
            System.out.println("1.Get name of the person");
            System.out.println("2.Set name of the person");
            System.out.println("3.Get age of the person");
            System.out.println("4.Set age of the person");
            System.out.println("5.Get height of the person");
            System.out.println("6.Set height of the person");
            System.out.println("7.Get weight of the person");
            System.out.println("8.Set weight of the person");
            System.out.println("9.Get DOB of the person");
            System.out.println("10.Set DOB of the person");
            System.out.println("11.Get Gender of the person");
            System.out.println("12.Set Gender of the person");
            System.out.println("13.Get country of the person");
            System.out.println("14.Set country of the person");
            System.out.println("15.Create a new object with default attributes");
            System.out.println("*******************************************");
            option = s.nextInt();
            switch(option){
                case 0:
                    System.out.println("Exiting the loop...");
                    break;
                case 1:
                    if(p1.getName()!=null){
                        System.out.println("The name of the person is "+p1.getName());
                    }
                    else{
                        System.out.println("The name of the person is not set");
                    }
                    break;
                case 2:
                    System.out.println("Enter the new name of the person");
                    newName = s.next();
                    p1.setName(newName);
                    break;
                case 3:
                    if(p1.getAge()!=0){
                        System.out.println("The age of the person is "+p1.getAge());
                    }
                    else{
                        System.out.println("The age of the person is not set");
                    }
                    break;
                case 4:
                    System.out.println("Enter the new age of the person");
                    newAge = s.nextInt();
                    p1.setAge(newAge);
                    break;
                case 5:
                    if(p1.getHeight()!=0){
                        System.out.println("The height of the person is "+p1.getHeight()+"cm");
                    }
                    else{
                        System.out.println("The height of the person is not set");
                    }
                    break;
                case 6:
                    System.out.println("Enter the new height of the person");
                    newHeight = s.nextInt();
                    p1.setHeight(newHeight);
                    break;
                case 7:
                    if(p1.getWeight()!=0){
                        System.out.println("The weight of the person is "+p1.getWeight()+"kgs");
                    }
                    else{
                        System.out.println("The weight of the person is not set");
                    }
                    break;
                case 8:
                    System.out.println("Enter the new weight of the person");
                    newWeight = s.nextInt();
                    p1.setWeight(newWeight);
                    break;
                case 9:
                    if(p1.getDOB()!=null){
                        System.out.println("The DOB of the person is "+p1.getDOB());
                    }
                    else{
                        System.out.println("The DOB of the person is not set");
                    }
                    break;
                case 10:
                    System.out.println("Enter the new DOB of the person");
                    newDOB=s.next();
                    p1.setDOB(newDOB);
                    break;
                case 11:
                    if(p1.getGender()!=null){
                        System.out.println("The gender of the person is "+p1.getGender());
                    }
                    else{
                        System.out.println("The gender of the person is not set");
                    }
                    break;
                case 12:
                    System.out.println("Enter the updated gender of the person");
                    newGender = s.next();
                    p1.setGender(newGender);
                    break;
                case 13:
                    if(p1.getCountry()!=null){
                        System.out.println("The country of the person is "+p1.getCountry());
                    }
                    else{
                        System.out.println("The country of the person is not set");
                    }
                    break;
                case 14:
                    System.out.println("Enter new country of the person");
                    newCountry=s.next();
                    p1.setCountry(newCountry);
                    break;
                case 15:
                    p1 = new Person("Venkat",19,170,67,"05/08/2001","Male","India");
                    break;
                default:
                    System.out.println("Please enter a valid option");
                    break;
            }
        }while(option!=0);
        s.close();
    }    
}
class Person{
    private String name;
    private int age;
    private int height;
    private int weight;
    private String DOB;
    private String gender;
    private String country;
    Person(){

    }
    Person(String name,int age,int height,int weight,String DOB,String gender,String country){
        this.name=name;
        this.age=age;
        this.height=height;
        this.weight=weight;
        this.DOB=DOB;
        this.gender=gender;
        this.country=country;
        System.out.println("New object created");
    }
    public void setName(String name){
        this.name=name;
        System.out.println("Person's name updated successfully");
    }
    public String getName(){
        return this.name;
    }
    public void setAge(int age){
        this.age=age;
        System.out.println("Person's age updated successfully");
    }
    public int getAge(){
        return this.age;
    }
    public void setHeight(int height){
        this.height=height;
        System.out.println("Person's height updated successfully");
    }
    public int getHeight(){
        return this.height;
    }
    public void setWeight(int weight){
        this.weight = weight;
        System.out.println("Person's weight updated successfully");
    }
    public int getWeight(){
        return this.weight;
    }
    public void setDOB(String DOB){
        this.DOB=DOB;
        System.out.println("Person's DOB updated successfully");
    }
    public String getDOB(){
        return this.DOB;
    }
    public void setCountry(String country){
        this.country=country;
        System.out.println("Person's Country updated successfully");
    }
    public String getCountry(){
        return this.country;
    }
    public void setGender(String gender){
        this.gender=gender;
        System.out.println("Person's Gender updated successfully");
    }
    public String getGender(){
        return this.gender;
    }
}





