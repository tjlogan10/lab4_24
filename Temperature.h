#ifndef TEMPERATURE_H
#define TEMPERATURE_H


class Temp
{
public:
    Temp();
    ~Temp();
    
    void TemperatureChart();

    void settemp(int temp_);


private:

    int count;
    double temp; //this helps with the rounding for the correct number of stars

};

#endif // !TEMPERATURE_H
