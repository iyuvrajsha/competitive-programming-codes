import java.util.*;

public class Main{
    public static void main(String args[])
    {
        Scanner scn = new Scanner(System.in);
        String s= scn.next();
        System.out.println(s);
        int x[]= new int [3];
        x[0]= 1;
        x[1]= 2;
        x[2]= 3;
        for(int i=0;i<x.length;i+=1)
        {
            System.out.println(x[i]);
        }

        
    }
}