/*
 Ŭ������ ������;  		//�������� ����
 ������ = new Ŭ������(); // ��ü ���� ��, ��ü �ּҸ� ÷�������� ����
 
 Tv t;			// TvŬ���� Ÿ���� �������� t�� ����
 t = new Tv();	// Tv�ν��Ͻ��� ������ ��, ������ Tv�ν��Ͻ��� �ּҸ� t�� ����
  
 */
public class java22_03_03 {
	
    public static void main(String[] args) {
        Tv t;
        t= new Tv();
        t.channnel=7;
        t.channelDown();
        System.out.println("���� ä����"+t.channel+"�Դϴ�");
        
    }
}

class Tv{
	// Tv�� �Ӽ�(�������)
	String colorString;
	boolean power;
	int channnel;
	
	// Tv�� ���(�޼���)
	void power() {power!=power;}
	void channelUp() {++channel;}
	void channelDown() {--channel;}
}