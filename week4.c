#include <stdio.h>
#include <stdlib.h>
int main(){
    // int x = 100;
    // int a = 0144;//อยู่ในฐาน 8
    // int b = 0x64; // 0x คือฐาน 16
    // printf("x = %d\n",x);
    // printf("reference of x =%lu\n", &x); // เป้นการดึงค่าตัวเเปรนั้นออกมา  %p คืออยู่ในรูปฐาน 16
    // printf("reference of x = %p\n", &x);  // 0 คือฐาน 8 0b คือฐาน 2 
    
    // int number[] = {7,8,9,10,11}; // เราต้องกำหนดขนาดให้มัน
    // // int number[100] = {7,8,9,10,11};
    // // int number[5]; //เป้นการ inisialค่า หรือเอาค่ามาจากglobal
    // number[3000]=200;
    // printf("index 3 = %d",number[3000]);
    // printf("reference index 3 = %p\n", &number[3]); // ดูว่ามีค่าaddress เท่าไหร่
    // // ถ้าเราไม่ได้กำหนดค่าคื
    // printf("reference index 0 = %p\n",&number[0]);// อันนี้ไม่ใช่pointer
    // printf("reference index 0 = %p\n",number+3000);// number คือ pointer 
    // int *ptr = &x;
    // int *arrPtr;
    // arrPtr = number; // ประกาสaddress ให้กับpointer
    // arrPtr = arrPtr+1; // ชี้indexที่ 1 บวกตามขนาด
    // *arrPtr = *arrPtr+1; //indexที่ 1+1 เเล้ว assignค่ากลับไปยังตัวเเปรเดิม
    // // * คือ dereferencing
    // printf("arrPtr = %p, *arrPtr = %d\n", arrPtr,*arrPtr);
    // printf("number[1] = %p ,number[1],number[1]",&number[1],number[1]);
    // // &x = 50; ห้ามทำเพราะเปลี่ยนค่ารไม่ได้
    // // ptr = x; // x ต้องเป่นarrayหรือว่าเป้น &x เท่านั้น
    // // *ptr = 50; // เป้นการเปลี่ยนค่าอื่นๆ
    // int number[] = {7,8,9,10,11}; 
    // // char input[50];//ไม่จำเป้นต้องวนถึง50 รอบ เราจะวนลูปไปถึง\0ที่เจอ เพราะเราจะเผื่อที่ให้\0 ในmemmory
    // for(int*ptr = number; ptr<= &number[4]; ptr++){ // อาจจะวนเเบบธรรมดาก้ได้คือ วนตั้ังเเต่ 0-4 ก้ได้
    //     printf("[%p] = %d\n",ptr,*ptr);
    // }
    // char input[50];
    // int count = 0;
    // char c;
    // while ((c = getchar())!='\n'){ // เอาค่าcมาเทียบกับค่า\nคือการเเทนค่าตั้งเเต่เริ่มจนถึง \c
    // // %s วิ่งไปเรื่อยถึง\0 ใช้fgets,getsมันจะรับค่า\0มาให้
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0'; // เป้นตัวกันว่าถึง\0
    // printf("input = %s\n",input);
    // for (char*cPtr = input;*cPtr != '\0';cPtr++){
    //     printf("%c\n",*cPtr);
    // }
    int a;
    char c;
    char s[50];
    scanf("%c-%d-%s",&c,&a,s); // aกับc เป้นตัวธรรมดา s เป้นaddressอยู่เเล้ว
    printf("%c  %d  %s",c,a,s); // ตอนปริ้นไม่ต้องมี&
    // ต้องใช้ %c ตรงกับ ค่าที่เราต้องการ
// ข้อสอบเก่า lab 5 เเลบ 8 
// นับว่ามีบันใดที่ขั้น
//เเลป 6 มีอะไรอยู่ตนไหนบ้าง
// address รับอันไหนก็ต้องรับpointer นั้น
}