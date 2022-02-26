//ทบทวนตัวเเปร 

int A = 10;  //ประกาศตัวเเปร ชนิดจำนวนเต็ม A มีค่าเป็น 10
int B = 0;
int C = A+B;
float D = 3.6;  //ประกาศตัวเเปร ชนิดทศนิยม D มีค่าเป็น 3.6
boolean E = false;  //ประกาศตัวเเปร ชนิดพีชคณิตบูลีน A มีค่าเป็น 0 หรือ false
boolean F = false;
int G = 40;
int H = 0;


int i=0;
  void setup(){


Serial.begin(9600);                                                                  //ประกาศช่องสัญญาณสื่อสารความเร็ว 9600

    
Serial.println("==========================================================");              //เเสดงข้อความใน Serial ชนิดเว้นบรรทัด
           
Serial.println("    A      B      C      D      E      F      G      H    ");              //เเสดงข้อความใน Serial ชนิดเว้นบรรทัด

  }
  void loop (){
while(i==0){                           //ตรวจสอบเเบบ loop ถ้าค่าในวงเล็บเป็นจริงจะยกเลิกการทำงานในปีกกา
Serial.print("    ");                   //เเสดงข้อความใน Serial ชนิดไม่เว้นบรรทัด
Serial.print(A);
Serial.print("     ");
Serial.print(B);
Serial.print("     ");
Serial.print(C);
Serial.print("     ");
Serial.print(D);
Serial.print("    ");
Serial.print(E);
Serial.print("     ");
Serial.print(F);
Serial.print("      ");
Serial.print(G);
Serial.print("      ");
Serial.print(H);

Serial.println(" ");
delay(2000);                           //หน่วงเวลา 2000ms 
i=1;                                    //set ค่า i เป็น 1
}


  }
