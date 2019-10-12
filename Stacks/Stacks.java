//stacks in java
import java.io.*;
import java.util.*;
class Stacks
{
public static void main(String args[])
{
Stack<Integer> s=new Stack<Integer>();
s.push(1);
s.push(2);
s.push(3);
Integer i=(Integer)s.pop();
System.out.println("the poped element is "+i);
Integer p=(Integer)s.peek();
System.out.println("the peek element is "+p);
Integer pos=(Integer)s.search(2);
System.out.println("the pos of element is "+pos);
}
}