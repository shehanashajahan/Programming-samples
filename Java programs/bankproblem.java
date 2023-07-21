class bank{
    void balance(){
        int a=0;
        System.out.println(a);
    }
}
class bankA extends bank{
    void balance1(){
        int b=1000;
        System.out.println("BANK BALANCE A:"+b);
    }
}
class bankB extends bank{
    void balance2(){
        int c=1500;
        System.out.println("BANK BALANCE B:"+c);
    }
}
class bankc extends bank{
    void balance3(){
        int d=2000;
        System.out.println("BANK BALANCE C:"+d);
    }
}
public class bankproblem{
    public static void main(String[] args){
        bankA a=new bankA();
        a.balance1();
        bankB b=new bankB();
        b.balance2();
        bankc c=new bankc();
        c.balance3();
    }
    
}