import java.util.Arrays;

public class java22_02_17 {
	// java �迭 ���� ����
	public static void main(String[] args) {
			// String �迭 ����

		String[] name = new String[] {"park","yi","kim"};
		System.out.println(Arrays.toString(name));
		
			//2���� �迭
		
		int[][] str= {
				{1,2,3},
				{4,5,6},
				{7,8,9}
		};
		for(int i=0;i<3;i++) {
			for(int j=0;j<3;j++) {
				System.out.println("str["+i+"]["+j+"]="+str[i][j]); //2�� for������ ��� 
			}
		}
		
	
	
	} // main

} // class