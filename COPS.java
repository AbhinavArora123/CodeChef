/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
			Scanner input = new Scanner(System.in);
		int t = input.nextInt();
		while(t-- >0){
		    int M = input.nextInt();
		    int x = input.nextInt();
		    int y = input.nextInt();
		    
		    int arr[] = new int[M];
		    for (int i=0;i<M;i++){
		        arr[i] = input.nextInt();
		    } 
		    int distance = x*y;
		    boolean [] remainingHouses = new boolean[101];
		    int count = 0;
		    for (int i=0;i<M;i++){
		        int left = Math.max(1,arr[i]-distance);
		        int right = Math.min(100,arr[i]+distance);
		        for(int j = left; j <= right;j++){
		            remainingHouses[j] = true;
		        }
		    } 
		    for(int i = 1;i<101;i++){
		        if(!remainingHouses[i]){
		            count++;
		        }
		    }
		    System.out.println(count);
		}
	}
}

