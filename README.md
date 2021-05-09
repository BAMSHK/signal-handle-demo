# signal-handle-demo

## 一、项目说明
### 1. 功能说明
* 通用的服务启动模板
* 使用信号实现优雅的退出程序，以达到服务终止前清理资源

### 2. 语言
* c++

### 3. 编译工具
* cmake

## 二、 使用说明
### 1. 拉取代码
```bash
git clone https://github.com/BAMSHK/signal-handle-demo.git
```

### 2. 进入项目
```bash
cd signal-handle-demo
```

### 3. 编译且执行
```bash
mkdir build
cd build
cmake ..
make
```

### 4. 终止程序
PID的值在程序的输出中查看
例如 kill -s SIGINT 1111
```bash
kill -s SIGINT {PID}
或者
kill -s SIGUSR1 {PID}
```
