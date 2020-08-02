#include "sea_esp32_qspi.h"
void setup()
{
uint8_t data2[18]={0};
Serial.begin(115200);
SeaTrans.begin();
SeaTrans.read(1, data2, 18);
Serial.printf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\r\n",data2[0],data2[1],data2[2],data2[3],data2[4],data2[5],data2[6],data2[7],data2[8],data2[9],data2[10],data2[11],data2[12],data2[13],data2[14],data2[15],data2[16],data2[17]);
}
void loop()
{
}
