/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package pack;

/**
 *
 * @author MRuser
 */
public class ObjectOperations {
 public void objectturnOn(Object o){
     if(o instanceof ElectronicDevice)
     {
         ElectronicDevice x=(ElectronicDevice)o;
         x.turnOn();
     }

    }
 public void objectturnOff(Object o){
     if(o instanceof ElectronicDevice)
     {
         ElectronicDevice x=(ElectronicDevice)o;
         x.turnOff();
     }
}
}
