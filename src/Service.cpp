#include "Service.h"
#include "iostream"
#include <thread>
#include <unistd.h>

Service::Service ()
    : _isRunning (false)
{
}

Service::~Service ()
{
}

void Service::Run ()
{
    if (_isRunning) {
        return;
    }
    _isRunning = true;

    std::cout << "Service Run" << std::endl;
    while (_isRunning) {
        std::this_thread::sleep_for (std::chrono::seconds (1));
    }
}

void Service::Stop ()
{
    if (!_isRunning) {
        return;
    }

    std::cout << "Service Stop" << std::endl;
    _isRunning = false;
}


void Service::SignalHandler (int signum)
{
    std::cout << "Service SignalHandler调用了" << std::endl;
    Stop ();
}
