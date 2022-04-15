
/*
	@author: Amir Aghazadeh
*/

import java.util.Scanner;

public class ProblemF {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String word = scan.next();		
		
		if(word.equals(word.toUpperCase())) {System.out.println(word.toLowerCase());}
		else if(
			word.equals(word.substring(0, 1).toLowerCase() + word.substring(1).toUpperCase())
		) {System.out.println(word.substring(0, 1).toUpperCase() + word.substring(1).toLowerCase());}
		else {System.out.println(word);}
	}
}
