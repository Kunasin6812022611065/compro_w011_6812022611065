#include <stdio.h>                                             // เรียกใช้ไลบรารีมาตรฐานสำหรับ input และ output เช่น printf, scanf

                                                               // ฟังก์ชันสำหรับรับและแสดงผลคะแนน
void inputAndShow() {                                          // ประกาศฟังก์ชัน inputAndShow สำหรับรับและแสดงผลคะแนน
    int math, physics, chemistry;                              // ประกาศตัวแปร math, physics, chemistry สำหรับเก็บคะแนนแต่ละวิชา

    printf("Enter Math: ");                                    // แสดงข้อความให้ผู้ใช้กรอกคะแนนคณิตศาสตร์
    scanf("%d", &math);                                        // รับค่าคะแนนคณิตศาสตร์จากผู้ใช้เก็บในตัวแปร math

    printf("Enter Physics: ");                                 // แสดงข้อความให้ผู้ใช้กรอกคะแนนฟิสิกส์
    scanf("%d", &physics);                                     // รับค่าคะแนนฟิสิกส์จากผู้ใช้เก็บในตัวแปร physics

    printf("Enter Chemistry: ");                               // แสดงข้อความให้ผู้ใช้กรอกคะแนนเคมี
    scanf("%d", &chemistry);                                   // รับค่าคะแนนเคมีจากผู้ใช้เก็บในตัวแปร chemistry

    printf("\nScores: Math = %d, Physics = %d, Chemistry = %d\n",  // แสดงผลคะแนนทั้งหมดของทั้งสามวิชา
           math, physics, chemistry);                          // แสดงค่าของตัวแปร math, physics, chemistry
}

                                                               // ฟังก์ชันหลัก
int main() {                                                   // ฟังก์ชันหลักของโปรแกรม เป็นจุดเริ่มต้นการทำงาน
    inputAndShow();                                            // เรียกใช้ฟังก์ชัน inputAndShow เพื่อทำงานรับและแสดงผลคะแนน
    return 0;                                                  // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานเสร็จสมบูรณ์
}
