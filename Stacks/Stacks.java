//stacks in java
import java.io.*;
import java.util.*;
class Stacks
{
  public static void main(String args[])
    {
        Stack<Integer> s=new Stack<Integer>();
        boolean se=s.empty();
        if(se)
        System.out.println("the stack is empty");
        s.push(1);
        s.push(2);
        s.push(3);
        Iterator<Integer> it=s.iterator();
        System.out.println("the elements in the stack are ");
        while(it.hasNext())
            System.out.println(it.next());
        Integer i=(Integer)s.pop();
        System.out.println("the poped element is "+i);
        Integer p=(Integer)s.peek();//topmost element
        System.out.println("the peek element is "+p);
        Integer pos=(Integer)s.search(1);// position of the element from the top of the stack
        System.out.println("the position of element 1 is "+pos);
        se=s.empty();
        if(se)
            System.out.println("the stack is empty");
        else
            System.out.println("the stack is not empty");
    }
}
/*
OUTPUT
the stack is empty
the elements in the stack are 
1
2
3
the poped element is 3
the peek element is 2
the position of element 1 is 2
the stack is not empty
*/
