/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package pack;

/**
 *
 * @author MRuser
 */
public class Car {
    private int x=10;
    private boolean running=false;
    private Engine eg=new Engine();
    private void disp(){
        System.out.println("The value of x"+x);

    }
    private class Engine{
        public void start(){
            running=true;
                    System.out.println("The value of Running is"+running);
                    disp();
        }
    }
    public void start(){
        eg.start();
    }
  


}
