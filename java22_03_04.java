
public class java22_03_04 {
		//Ŭ���� ��ü �迭 ���� ����
    public static void main(String[] args) {
    	// ��ü �迭
    	Tv[] tarr = new Tv[3]; // ��ü�� �����ؼ� �迭�� ����
    	Tv[] tarr1= {new Tv(),new Tv(),new Tv()}; // �迭�� �ʱ�ȭ �� ���
    	
    	Tv[] tarr2 = new Tv[100]; // ��ü�� �����ؼ� �迭�� ����
    	for(int i=0;i<tarr.length;i++) { // ���� ��ü�� ���� ���ٸ� for���� ����ϸ� �� 
    		tarr2[i]=new Tv();
    	}
    	
    }
}

class Tv{
	// Tv�� �Ӽ�(�������)
	String color;
	boolean power;
	int channel;
	
	// Tv�� ���(�޼���)
	void power() {power=!power;}
	void channelUp() {++channel;}
	void channelDown() {--channel;}
}