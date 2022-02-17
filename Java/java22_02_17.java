import java.util.Arrays;

public class java22_02_17 {
	// java 배열 기초 문법
	public static void main(String[] args) {
			// String 배열 문법

		String[] name = new String[] {"park","yi","kim"};
		System.out.println(Arrays.toString(name));
		
			//2차원 배열
		
		int[][] str= {
				{1,2,3},
				{4,5,6},
				{7,8,9}
		};
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				System.out.println("str["+i+"]["+j+"]="+str[i][j]); //2중 for문으로 출력 
			}
		}
		
	
	
	} // main

} // class