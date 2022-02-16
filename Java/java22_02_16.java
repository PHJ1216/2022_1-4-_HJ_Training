import java.util.Arrays;

public class java22_02_16 {
	// java 배열 기초 문법
	public static void main(String[] args) {

		int arr[] = new int[5] ; //배열 선언부
		for (int i = 0; i < 5; i++) {
			arr[i] = i;
			System.out.println(arr[i]);

		}
		System.out.println(Arrays.toString(arr)); //배열 보기좋게 출력
		System.out.println(arr); //배열이 가리키는 주소
	} // main

} // class
