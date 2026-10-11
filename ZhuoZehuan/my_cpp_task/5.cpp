#include <iostream>
#include <cstdint>
using namespace std;

int main(){
    uint8_t Data[4] = {0x05, 0x6C, 0xB1, 0xBC};
    uint8_t id, vel, accel, temp, torque, voltage;
    id = Data[0];
    vel = Data[1] & 0x0F;
    accel = Data[1] >> 4;
    temp = Data[2] & 0x3F;
    torque = ((Data[2] >>6) & 0x03 ) | (Data[3] & 0x0F);
    voltage = Data[3] >> 4;

    cout << "ID = " << (int)id << endl;
    cout << "速度 = " << (int)vel << endl;
    cout << "加速度 = " << (int)accel << endl;
    cout << "温度 = " << (int)temp << endl;
    cout << "扭矩 = " << (int)torque << endl;
    cout << "电压 = " << (int)voltage << endl;

    return 0;
}