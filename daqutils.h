//
// Created by IIAP on 26/04/2019.
//

#ifndef FPVOLTAGECONTROLLER_DAQUTILS_H
#define FPVOLTAGECONTROLLER_DAQUTILS_H

#include <iostream>
#include <string>
#include "NIDAQmx.h"

extern double VoltageData[1];
extern TaskHandle DAQHandle;

int createDAQTask();
int initialiseDAQHandle();
int initDAQAOVoltageChan();
int initDAQAIChan();
int setVoltages(double voltage);
int getVoltage(float64 *readArray, int32 *samplesReadperChannel, int readArraySize);

#endif //FPVOLTAGECONTROLLER_DAQUTILS_H
