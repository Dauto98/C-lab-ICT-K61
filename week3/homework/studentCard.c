#include <stdio.h>

int main() {
  printf("\
************************************************************\n\
*              Trường đại học Bách khoa Hà Nội             *\n\
*                      Thẻ sinh viên                       *\n\
************************************************************\n\
*  **********  Mã số sinh viên: %-27d*\n\
*  *        *  Họ tên: %-40s*\n\
*  *        *  Ngày sinh: %-17s%-16s*\n\
*  *        *  Hộ khẩu: %-42s*\n\
*  *        *  Lớp: %-39s*\n\
*  **********  Khóa: %-11sCó giá trị đến: %-11s*\n\
*                              **************************  *\n\
*  NPH: %-23s**************************  *\n\
************************************************************\n",\
20160125, "NGUYÊN ĐỨC ANH", "21/5/1998", "NAM", "Đống Đa - Hà Nội", "ICT.01", "K61", "31/8/2021", "11/10/2016");

  return 0;
}
