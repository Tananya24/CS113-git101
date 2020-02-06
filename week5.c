#include <stdio.h>
void addTen(int*numbers,int n)// nคือ passbyvalue ส่วน number เป้น passbyreference
{
    for(int i=0;i<n;i++){
        printf("numbers + %d addr = %p,%d\n",i,numbers+i,*(numbers+i));
        *(numbers+i)+=10; // number เป้นint *(numbers+i)เอาค่าที่ในindexนั้นมา+10
    }
}
int addTwenty(int *n){ //รับค่าเเบบpointer
    *n+=20; //บวกค่าเเล้วเราก้เก็บค่าในตัวเเปรn
    return 1;
}
int main(){
    int numbers[] = {5,6,7,8,9,0};
    int n = 6;
    int *ptr = &n; // มันสามารถreverse ค่ากลับได้ไป
    addTen(&numbers[0],n);//ส่งด้วย address รับค่าด้วยpointer
    for(int i = 0;i<6;i++){
        printf("numbers[%d] = %d\n",i,numbers[i]);
    }
    addTwenty(&n);
    printf("n = %d\n",n); // ค่าออกมาจะเป้น 26 เพราะเอาค่า 6(มาจากใน int)+20 ถ้าส่งเเบบpointer มันจะเปลี่ยนเเปลงค่าaddress ได้โดยตรง
    addTwenty(ptr);   // ส่งค่าทีี่อยู่ใน addressนั้นออกมาshow เเต่ถ้าเป็น *ptr มัุนจะส่งค่า 6 ออกไปเพราะ *ptr เก้บค่า 6
    printf("n = %d\n",n);
}