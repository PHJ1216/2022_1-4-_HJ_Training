import java.util.Arrays;

public class java22_02_16 {
	// java �迭 ���� ����
	public static void main(String[] args) {
			// �迭 ��� ���ϱ�
		int[] arr={100,90,80,70,60};
		int sum=0;
		for(int i=0;i<5;i++) {
			sum+=arr[i];
		}
		System.out.println(sum/(float)arr.length); // float�� �Ǽ��� ����ȯ
		
	} // main

} // class
