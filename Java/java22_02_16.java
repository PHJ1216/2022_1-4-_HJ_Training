import java.util.Arrays;

public class java22_02_16 {
	// java �迭 ���� ����
	public static void main(String[] args) {

		int arr[] = new int[5] ; //�迭 �����
		for (int i = 0; i < 5; i++) {
			arr[i] = i;
			System.out.println(arr[i]);

		}
		System.out.println(Arrays.toString(arr)); //�迭 �������� ���
		System.out.println(arr); //�迭�� ����Ű�� �ּ�
	} // main

} // class
