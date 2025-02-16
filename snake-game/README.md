# Snake Game

这是一个简单的贪吃蛇游戏项目，使用C++编写。该游戏实现了经典的贪吃蛇玩法，玩家控制蛇的移动，吃食物以增长蛇的长度，同时避免撞墙和自身。

## 文件结构

```
snake-game
├── src
│   ├── main.cpp       // 程序入口点，初始化游戏并启动主循环
│   ├── game.cpp       // 实现Game类，包含游戏逻辑
│   ├── game.h         // Game类的接口定义
│   ├── snake.cpp       // 实现Snake类，负责贪吃蛇的行为
│   └── snake.h         // Snake类的接口定义
├── CMakeLists.txt     // CMake配置文件
└── README.md          // 项目文档
```

## 游戏玩法

- 使用方向键控制蛇的移动。
- 吃到食物后，蛇的长度会增加。
- 游戏结束条件为蛇撞墙或撞到自身。

## 安装和运行

1. 确保已安装CMake和C++编译器。
2. 克隆项目到本地：
   ```
   git clone <repository-url>
   ```
3. 进入项目目录并创建构建目录：
   ```
   cd snake-game
   mkdir build
   cd build
   ```
4. 运行CMake以生成构建文件：
   ```
   cmake ..
   ```
5. 编译项目：
   ```
   make
   ```
6. 运行游戏：
   ```
   ./snake-game
   ```

## 贡献

欢迎任何形式的贡献！请提交问题或拉取请求。