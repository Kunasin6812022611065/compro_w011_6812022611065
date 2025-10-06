#include <stdio.h>                                             // เรียกใช้ไลบรารีมาตรฐานสำหรับ input และ output เช่น printf, scanf

// ฟังก์ชันคำนวณค่าเฉลี่ย
float average(int a, int b, int c) {                           // ประกาศฟังก์ชัน average โดยรับพารามิเตอร์ a, b, c
    return (a + b + c) / 3.0;                                 // คืนค่าผลเฉลี่ยของตัวเลขทั้งสามในรูปแบบทศนิยม
}

int main() {                                                   // ฟังก์ชันหลักของโปรแกรม เป็นจุดเริ่มต้นการทำงาน
    int math, physics, chemistry;                              // ประกาศตัวแปร math, physics, chemistry สำหรับเก็บคะแนนแต่ละวิชา
    float avg;                                                 // ประกาศตัวแปร avg สำหรับเก็บค่าคะแนนเฉลี่ย

    printf("Enter Math score: ");                              // แสดงข้อความให้กรอกคะแนนคณิตศาสตร์
    scanf("%d", &math);                                        // รับค่าคะแนนคณิตศาสตร์จากผู้ใช้เก็บในตัวแปร math

    printf("Enter Physics score: ");                           // แสดงข้อความให้กรอกคะแนนฟิสิกส์
    scanf("%d", &physics);                                     // รับค่าคะแนนฟิสิกส์จากผู้ใช้เก็บในตัวแปร physics

    printf("Enter Chemistry score: ");                         // แสดงข้อความให้กรอกคะแนนเคมี
    scanf("%d", &chemistry);                                   // รับค่าคะแนนเคมีจากผู้ใช้เก็บในตัวแปร chemistry

    avg = average(math, physics, chemistry);                   // เรียกใช้ฟังก์ชัน average เพื่อคำนวณค่าเฉลี่ยของคะแนนทั้งสาม

    printf("\nMath = %d\nPhysics = %d\nChemistry = %d\nAverage = %.2f\n",  // แสดงผลคะแนนแต่ละวิชาและค่าเฉลี่ย
           math, physics, chemistry, avg);                      // แสดงค่าของตัวแปร math, physics, chemistry และ avg

    return 0;                                                  // คืนค่า 0 เพื่อบอกว่าโปรแกรมทำงานสำเร็จ
}
