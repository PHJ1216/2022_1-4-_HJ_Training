class Name{
    static void print() { //Ŭ���� �޼ҵ�
	System.out.println("My name is HyeonJun");
    }

    void print2() { //�ν��Ͻ� �޼ҵ�
	System.out.println("I'm 2nd grade");
    }
}

public class java22_03_02 {
	
    public static void main(String[] args) {
        Name.print(); //�ν��Ͻ��� �������� �ʾƵ� ȣ���� ����
    	
        Name name = new Name(); //�ν��Ͻ� ����
        name.print2(); //�ν��Ͻ��� �����Ͽ��߸� ȣ���� ����
    }
}