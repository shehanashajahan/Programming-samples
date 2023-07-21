class grandfather{
void Salary(){
float a= 20000;
}
}
class son extends grandfather{
void Salary(){
float b=50000;
}
}
class soninlaw extends grandfather{
void Salary(){
float c=90000;
}
}
class daughter extends grandfather{
void Salary(){
float d=30000;
}
}
class daughterinlaw extends grandfather{
void Salary(){
float e=40000;
}
}
class grandson1{
void schoolfees(){
float f=60000;
}
}
class grandson2{
void schoolfees(){
float g=70000;
}
}
class granddaughter{
void schoolfees(){
float h=90000;
}
}
public class family{
public static void main(String[]args){
grandfather g=new grandfather();
System.out.println("THE SALARY OF THE GRANDFATHER:" +g.a);
Son s=new Son();
soninlaw sl=new soninlaw();
daughter d=new daughter();
daughterinlaw dl=new daughterinlaw();
grandson1 gs=new grandson1();
grandson2 gss=new grandson2();
granddaughter gd=new granddaughter();

System.out.println("THE SALARY OF THE SON:" +s.b);
System.out.println("THE SALARY OF THE SONINLAW:" +sl.c);
System.out.println("THE SALARY OF THE DAUGHTER:" +d.d);
System.out.println("THE SALARY OF THE DAUGHTERINLAW:" +dl.e);
System.out.println("THE SCHOOLFEES OF THEGRANDSON1:" +gs.f);
System.out.println("THE SCHOOLFEES OF GRANDSON2:" +gss.g);
System.out.println("THE SCHOOLFEES OF GRANDDAUGHTER" +gd.h);
}
}



