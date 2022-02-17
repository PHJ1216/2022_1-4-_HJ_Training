import java.util.Arrays;
import java.util.Scanner;

public class java22_02_17 {
	// java 배열 기초 문법
	public static void main(String[] args) {
		// 단어 맞추기 프로그램
		Scanner scn=new Scanner(System.in);
		String word[][] = {
				{"computer","컴퓨터"}, //00 01
				{"chair","의자"},	     //10 11
				{"student","학생"}    //20 21
		};
		for(int i=0;i<word.length;i++) {
			System.out.println("Q"+(i+1)+": "+word[i][0]+"의 답은?");
			String str=scn.nextLine();
			
		if(str.equals(word[i][1])) {
			System.out.println("정답!");
		}else {
			System.out.println("틀렸습니다 정답은"+word[i][1]);
		}
		}
	} // main

} // class