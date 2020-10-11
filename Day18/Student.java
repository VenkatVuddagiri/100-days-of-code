package com.student;
import java.util.Scanner;
public class Student {
    public static void main(String[] args){
        int hindi,english,maths,science,social;
        double percent;
        Scanner s = new Scanner(System.in);
        System.out.println("Enter hindi marks");
        hindi=s.nextInt();
        System.out.println("Enter english marks");
        english=s.nextInt();
        System.out.println("Enter maths marks");
        maths=s.nextInt();
        System.out.println("Enter science marks");
        science=s.nextInt();
        System.out.println("Enter social marks");
        social=s.nextInt();
        int sum = hindi+english+maths+science+social;
        percent = (sum/500.0)*100;
//        System.out.println(sum);
        if(percent>90 && percent<=100){
            System.out.println("Grade is A+ and percent is "+percent);
        }
        else if (percent>80 && percent<=90){
            System.out.println("Grade is A and percent is "+percent);
        }
        else if (percent>70 && percent<=80){
            System.out.println("Grade is B and percent is "+percent);
        }
        else if (percent>60 && percent<=70){
            System.out.println("Grade is C and percent is "+percent);
        }
        else if (percent>50 && percent<=60){
            System.out.println("Grade is E and percent is "+percent);
        }
        else{
            System.out.println("Grade is F and percent is "+percent);
        }
    }
}
