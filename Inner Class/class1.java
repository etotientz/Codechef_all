/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package aa;

import java.util.HashMap;
import java.util.Map;

/**
 *
 * @author MRuser
 */
public class class1 {
public static void main(String [] args)
    {
    Map p=new HashMap();
    p.put("f", "Amit Verma");
    p.put("b", "sumit singh");
    p.put("c", "Amar Pratap");

    System.out.println(p.entrySet());
    System.out.println(p.values());
    System.out.println(p.keySet());
    System.out.println(p.get("b"));
}
}
