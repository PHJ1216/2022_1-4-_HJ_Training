public class java22_02_27 {
	// Ŭ���� �ν��Ͻ� �������� ���� ����
    public static void main(String[] args) {    
        System.out.println("Ferrari width : "+Ferrari.width);
        System.out.println("Ferrari height : "+Ferrari.height);
        
        Ferrari spider = new Ferrari();  
        spider.color = "red";
        spider.price = 100;
        
        Ferrari roma = new Ferrari();
        roma.color = "black";
        roma.price = 200;
        
        System.out.println("spider�� "+spider.color+","+spider.price+
                "���̸�,ũ��� "+spider.width+","+spider.height+"�Դϴ�.");
        System.out.println("roma�� "+roma.color+","+roma.price+
                "���̸�,ũ��� "+roma.width+","+roma.height+"�Դϴ�.");
        
        spider.width = 2000;
        spider.height = 1000;
        System.out.println("spider�� width�� height�� ���� 2000, 1000���� ����");
        System.out.println("spider�� "+spider.color+","+spider.price+
                "���̸�,ũ��� "+spider.width+","+spider.height+"�Դϴ�.");
        System.out.println("roma�� "+roma.color+","+roma.price+
                "���̸�,ũ��� "+roma.width+","+roma.height+"�Դϴ�.");
        
    }    
}
 
class Ferrari{
    String color; 
    int price;
    static int width = 1000;
    static int height = 500;
}
