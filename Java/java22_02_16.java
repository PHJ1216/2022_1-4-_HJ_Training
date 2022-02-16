import java.util.Arrays;

public class java22_02_16 {
	// java 배열 기초 문법
	public static void main(String[] args) {
			// 배열 평균 구하기
		int[] arr={100,90,80,70,60};
		int sum=0;
		for(int i=0;i<5;i++) {
			sum+=arr[i];
		}
		System.out.println(sum/(float)arr.length); // float로 실수형 형변환
		
	} // main

} // class
