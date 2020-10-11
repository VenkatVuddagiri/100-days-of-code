import java.util.Scanner;
class Employee{
    public static void main(String[] args) {
        String employee_name;
        int DOB,MOB,YOB;
        long monthly_salary;
        int age;
        long yearly_salary;
        long tax;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter your name");
//        s.nextLine();
        employee_name=s.next();
        System.out.println("Enter your date of birth");
        DOB=s.nextInt();
        System.out.println("Enter your month of birth");
        MOB=s.nextInt();
        System.out.println("Enter your year of birth");
        YOB=s.nextInt();
        System.out.println("Enter your monthly salary");
        monthly_salary = s.nextLong();
        System.out.println("Your name is "+employee_name);
        age=ageCalculator(YOB);
        if(YOB>0){
            System.out.println("Your age is "+age);
        }
        yearly_salary=monthly_salary*12;
        System.out.println("Your annual salary is "+yearly_salary);
        if(yearly_salary<=200000){
            tax=0;
        }
        else if(yearly_salary<=300000 && yearly_salary>200000){
            tax=(5/100)*yearly_salary;
        }
        else if(yearly_salary<=400000){
            tax=(10/100)*yearly_salary;
        }
        else if (yearly_salary<=500000){
            tax=(15/100)*yearly_salary;
        }
        else{
            tax=(28/100)*yearly_salary;
        }
        System.out.println("The tax amount applicable is "+tax);
        s.close();
    }
    public static int ageCalculator(int year){
        int presentYear=2020;
        if(presentYear==year){
            System.out.println("Invalid age");
            return 0;
        }
        else {
            return presentYear-year;
        }
    }
}
