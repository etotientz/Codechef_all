/**
 * Program to implement Multilevel Inheritance and Dynamic Method Dispatch	
 * @author Satrap Rathore 13/CS/48
 * Date of creation : 09 March, 2016
 * FileName: MultilevelInheritence.java
 */
class Car		//superclass1
	{
		
		public String vehicleType()
		{
			return "Car";
		}
	}
	class Jaguar extends Car	//subclass2 superclass1
	{
		int level1;
		public Jaguar(int var1)
		{
			// constructor of the class used to initialise level1
			level1=var1;
		}
		public String brand()
		{
			return "Brand: Jaguar";
		}
		public String speed()
		{
			// This method is exclusive to class Jaguar
			return "Max: 90Kmph";
		}
	}
	
	class JaguarXZ extends Jaguar	//subclass2
	{
		int level2;
		public JaguarXZ(int var1,int var2)
		{
			//constructor for class JaguarXZ used to initialise level2;
			super(var1);	//used to call superclass constructor
			level2=var2;
		}
		public String speed()
		{
			//This method is exclusive to class JaguarXZ
			 	System.out.println(super.speed());
			 	return "Max: 100Kmph";
		}
	}
public class MultilevelInheritence
{
	static JaguarXZ obj=new JaguarXZ(1,2);
	public static void main(String[] args)
	{
		 System.out.println(obj.vehicleType());	
		 System.out.println(obj.brand());
		 System.out.println(obj.speed());

	}

}
