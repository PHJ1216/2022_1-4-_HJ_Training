public class java22_02_28 {
	// Ŭ���� �ν��Ͻ� �������� ���� ����
    public static void main(String[] args) {    
        System.out.println("��� ��Ʈ�� : "+ramen.natryum);
        System.out.println("��� Į�θ� : "+ramen.kcal);
        
        ramen sin_ramen = new ramen();  
        sin_ramen.spicy = "nomal hot";
        sin_ramen.price = 850;
        
        ramen yeol_ramen = new ramen();
        yeol_ramen.spicy = "so hot";
        yeol_ramen.price = 950;
        
        System.out.println("�Ŷ���� �ʱ�� "+sin_ramen.spicy+"�̰�, "+sin_ramen.price+
                "���̸�, ��Ʈ���� Į�θ��� "+sin_ramen.natryum+","+sin_ramen.kcal+"�Դϴ�.");
        System.out.println("������� �ʱ�� "+yeol_ramen.spicy+"�̰�, "+yeol_ramen.price+
                "���̸�, ��Ʈ���� Į�θ��� "+yeol_ramen.natryum+","+yeol_ramen.kcal+"�Դϴ�.");
        
        sin_ramen.natryum = 2000;
        sin_ramen.kcal = 1000;
        System.out.println("�Ŷ���� ��Ʈ���� Į�θ��� ���� 2000, 1000���� ����");
        System.out.println("�Ŷ���� �ʱ�� "+sin_ramen.spicy+"�̰�, "+sin_ramen.price+
                "���̸�, ��Ʈ���� Į�θ��� "+sin_ramen.natryum+","+sin_ramen.kcal+"�Դϴ�.");
        System.out.println("������� �ʱ�� "+yeol_ramen.spicy+"�̰�, "+yeol_ramen.price+
                "���̸�, ��Ʈ���� Į�θ��� "+yeol_ramen.natryum+","+yeol_ramen.kcal+"�Դϴ�.");
    }    
}
 
class ramen{
    String spicy; 
    int price;
    static int natryum = 1000;
    static int kcal = 500;
}
