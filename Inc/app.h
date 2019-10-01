/*
The MIT License (MIT)

Copyright (c) 2019 Techno Road Inc.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#ifndef APP_H_
#define APP_H_

u8 GET_CONF_SW(void);
bool IsPoseUpdate();
void PoseUpdateTermination();
void pose_update_func();
void print_func();
u8 IMU_INIT(double c_cycle,double s_cycle);

void Set_SendCycle(double s_cycle);
void SendStart();
void SendStop();
bool IsSendEnable(void);

void Set_Format(u8 format);
u8 Get_Format(void);

double Get_CtrlCycle(void);

bool IsAutoBiasUpdate();
int AutoBiasUpdate_TimeLeft();
void AutoBiasUpdate_TIM();

#endif /* APP_H_ */
