#ifndef _SERVICE_H_
#define _SERVICE_H_

class Service
{
public:
    Service ();
    ~Service ();


    void Run ();
    void Stop ();

    void SignalHandler (int signum);

private:
    bool _isRunning;
};

#endif