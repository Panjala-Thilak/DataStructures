//Reverse Substrings Between Each Pair of Parentheses
import java.util.*;
class ReverseSubstrings{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
       String s=sc.next();
       Stack<Character> st=new Stack<>();
       Queue<Character> q = new ArrayDeque();  
       for(int i=0;i<s.length();i++)
       {
           if(s.charAt(i)!=')')
           {
           st.push(s.charAt(i));
           }
           else
           {
               while(st.peek()!='(')
               {
                q.add(st.pop());
               }
               st.pop();
               while(!q.isEmpty())
               {
                  st.push(q.remove());
               }
           }
       }
       Iterator<Character> it=st.iterator();
       while(it.hasNext())
       System.out.print(it.next());
    }
}
/*
OUTPUT
(gnidoc(love)i)
ilovecoding
*/