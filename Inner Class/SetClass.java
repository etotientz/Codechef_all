/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package pack;

import java.util.HashSet;
import java.util.Set;
import java.util.TreeSet;

/**
 *
 * @author MRuser
 */
public class SetClass {
public static void main(String [] args){
    Set s=new HashSet();
    s.add(10);
    s.add(52);s.add(23);
    s.add(10);
    s.add(87);

    System.out.println(s);
}
}
