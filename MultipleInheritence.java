/**
 * Program to implement Multiple Inheritance
 * @author Satrap Rathore 13/CS/48
 * FileName: MultipleInheritance.java 
 * Date of Creation:24 Feb, 2016
 */
class Student
{
	int roll_no;
	// defining constructor for class Student
	 Student(int n)
	{
		roll_no=n;
	}
}
class Exam extends Student
{
	int part1,part2;
	// Defining constructor for class Exam
	Exam(int n,int marks1,int marks2)
	{
		super(n);  // invoking constructor of superclass
		part1=marks1;
		part2=marks2;
	}
	int return_roll_no()
	{
		return roll_no;
	}
}
interface Details
{
	int factor=2;
	int standard=10;
	char sec='A';
}
class Results extends Exam implements Details
{
	Results(int n,int marks1,int marks2)
	{
		super(n,marks1,marks2);	// invoking Constructor of superclass
	}
	int return_value()
	{
		int value = ((part1+part2)*factor);
		if(value<=200)
			return value;
		else return -1;
	}
	char return_sec()
	{
		return sec;
	}
	
}

public class MultipleInheritence 
{
	public static void main(String[] args)
	{
		Results student1=new Results(1,30,40);
		int value=student1.return_value();
		System.out.println("value = " + value);
	}

}
