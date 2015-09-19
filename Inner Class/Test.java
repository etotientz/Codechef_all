/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package pack;

/**
 *
 * @author MRuser
 */
public class Test {
public static void main(String [] args){
  /*  ElectronicDevice ed=new Television();
    ed.turnOn();
    ed.turnOff();//ed.disp();

    Television t1=new Television();
    if(t1 instanceof ElectronicDevice)
    {
    System.out.println("t1 is an instanc of electronicdevice");
    }
 else
    {
      System.out.println("t1 is not an instanc of electronicdevice");
 }*/
    ObjectOperations obj=new ObjectOperations();
    Television t=new Television();
    Refregirator ref=new Refregirator();
    obj.objectturnOn(t); obj.objectturnOn(ref);
    obj.objectturnOff(t);obj.objectturnOff(ref);

}
}
