#ifndef _SIGNALER_H
#define _SIGNALER_H

#include "iostream"
#include <csignal>
#include <map>
#include <functional>


class Signaler
{
public:
    Signaler ();
    ~Signaler ();

    static void Register (const int signo, std::function<void (int)> func);

    static void SignalHandler (int signum);

    static std::map<int, std::function<void (int)>> _sigHandlers;
};

#endif
