#ifndef __ADC_H__
#define __ADC_H__

#include <Arduino.h>
#include <Adafruit_ADS1015.h>

typedef struct {
    float voltage;
    float current;
} powerData_t;

typedef powerData_t* powerData_ptr;


class ADC
{

public:
    ADC();
    virtual ~ADC();

    void begin();

    void startSerialLogging();
    void stopSerialLogging();

    void startQueueLogging(QueueHandle_t queue, SemaphoreHandle_t semaphore);
    void stopQueueLogging();

    float getVoltage();
    float getCurrent();
    void setVoltage(float v);
    void setCurrent(float c);


  protected:

    float voltage;
    float current;
};


#endif //__ADC_H__
