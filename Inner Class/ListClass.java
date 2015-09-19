/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package pack;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.LinkedList;
import java.util.List;

/**
 *
 * @author MRuser
 */
public class ListClass {
public static void main(String [] args){
    List  list=new LinkedList();
    list.add(10);
    list.add(45);
    list.add(8);
    list.add(87);
    list.add(10);
list.set(1, 9999);
   // Iterator it=list.iterator();
    System.out.println("Objects from  the collections are ::");
//    while(it.hasNext()){
//        System.out.println(it.next());
//    }
//Collections.sort(list);
System.out.println("Ascending Order.....") ;
for(Object s:list){
        System.out.println(s);
    }
Collections.reverse(list);
System.out.println("Descending Order.....") ;
for(Object s:list){
        System.out.println(s);
    }


System.out.println("Size of hte collection is ::"+list.size());

}
}
