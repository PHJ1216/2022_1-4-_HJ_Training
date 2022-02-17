import java.util.Arrays;
import java.util.Scanner;

public class java22_02_17 {
	// java 배열 기초 문법
	public static void main(String[] args) {
		
		// toString  deepToString 1차원과 다차원 쓰임의 차이
		
		int[] arr= {1,2,3,4};
		int[][] arr1= {{1,2},{3,4}};
		int[][] arr2= {{1,2},{3,4}};
		System.out.println(Arrays.toString(arr));
		System.out.println(Arrays.deepToString(arr1));
		
		// equals  deepEquals  1차원 과 다차원 쓰임의 차이
		System.out.println(Arrays.deepEquals(arr1,arr2));
		
		// copyOf()  copyOfRange()
		
		int[] ex_arr= {1,2,3,4};
		int[] ex_arr1=Arrays.copyOf(ex_arr, ex_arr.length);
		System.out.println(Arrays.toString( ex_arr1));
		
		int[] ex_arr2=Arrays.copyOf(ex_arr, 3);
		System.out.println(Arrays.toString( ex_arr2));

		int[] ex_arr3=Arrays.copyOfRange(ex_arr, 0,3);
		System.out.println(Arrays.toString( ex_arr3));
		
		// sort() 배열 정렬 메서드
		
		int[] ex_sort= {9,6,3,8,1,2,0,3,2,7,5,6,4};
		Arrays.sort(ex_sort);
		System.out.println(Arrays.toString(ex_sort));
	} // main

} // class