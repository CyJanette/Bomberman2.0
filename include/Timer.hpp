#ifndef TIMER_H
#define TIMER_H

class Timer {
public:
    Timer();
    void start();
    void stop();
    void tick();
    
private:
    int timeLeft;
};

#endif // TIMER_H