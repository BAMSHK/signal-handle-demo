#include "Signaler.h"


std::map<int, std::function<void (int)>> Signaler::_sigHandlers;

Signaler::Signaler ()
{
}

Signaler::~Signaler ()
{
}

void Signaler::SignalHandler (int signum)
{
    Signaler::_sigHandlers[signum](signum);
}


void Signaler::Register (const int signo, std::function<void (int)> func)
{
    // 注册信号
    signal (signo, Signaler::SignalHandler);

    // 保存函数指针
    Signaler::_sigHandlers[signo] = func;
}
