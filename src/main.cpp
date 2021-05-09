#include "iostream"

#include <unistd.h>

#include "Service.h"
#include "Signaler.h"


int main ()
{
    std::cout << "PID: " << getpid () << std::endl;

    Service ser;

    // 绑定信号处理函数
    std::function<void (int)> func = std::bind (&Service::SignalHandler, &ser, std::placeholders::_1);

    //注册信号处理函数
    Signaler::Register (SIGINT, func);
    Signaler::Register (SIGUSR1, func);
    
    // 启动服务
    ser.Run ();


    return 0;
}