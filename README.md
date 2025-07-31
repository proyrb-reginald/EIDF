# EIDF

## 项目全称

嵌入式集成开发框架（Embedded Integrated Development Framework）

## 项目简介

- 基于**赛元微**的**SC32R803**系列芯片。
- 集成多种模块驱动：
  - [x] W25Q64 `SPI`/`QSPI`
  - [x] ST7789V `SPI`
- 适配多种**开源**中间件：
  - [x] FreeRTOS `V11.2`
  - [x] LittleFS `V2.11`
  - [x] LVGL `V9.3`
  - [ ] lwIP
- 搭建用户级多任务开发框架：
  - [x] 设计并开放出灵活、统一的编程接口
  - [x] 提供详细的模块和函数注释
  - [x] 支持多种开发平台
- 支持多种使用场景：
  - [x] 允许同时挂载片内文件系统与片外文件系统
    - 片内多余的储存空间可以挂载片内文件系统，用于进行安全验证、敏感数据处理等高安全性需求的操作
    - 片外的外部储存设备可以挂载片外文件系统，用于常规数据的存取、网络通讯等低性能需求
  - [x] 支持从片内和片外文件系统按需读取并显示图片资源
    - 导入精美的界面设计，提供轻量且健全的人机交互方式，对人机交互场景格外友好
  - [ ] 支持网络通讯

## 结构说明

下面是项目的结构，**只对主要条目进行介绍**。

```go
eidf/
├── .cmsis/
│   ├── dev/                # 不同设备的启动文件
│   └── inc/                # 由EIDE自动提供的CMSIS源码
├── .eide/                  # EIDE开发工具的配置信息
├── .keil/                  # Keil开发工具的配置信息
├── .vscode/                # VSCode开发工具的配置信息
├── build/                  # 构建代码时生成
├── dev/                    # 提供设备驱动
│   ├── st7789v/            # 屏幕驱动
│   └── w25q64/             # 外部存储驱动
├── doc/                    # 相关文档说明
├── hal/                    # SC32的硬件抽象层
├── mid/                    # 中间件源码
│   ├── freertos/           # FreeRTOS源码
│   ├── littlefs/           # LittleFS源码
│   ├── log/                # 定制的线程安全的日志打印接口
│   └── lvgl/               # LVGL源码
├── user/                   # 用户级代码配置
│   ├── fs/                 # 提供基于LittleFS的基础文件操作
│   ├── gui/                # 提供GUI专用任务
│   ├── os/                 # 提供基于FreeRTOS的任务监控接口
│   ├── init.c              # 提供片内设备初始化
│   ├── init.h
│   ├── irq.c               # 中断处理函数
│   ├── irq.h
│   ├── main.c              # 用户级别的顶层设计
│   └── main.h
├── .clang-format           # 格式化配置信息
├── .eide.usr.ctx.json
├── .gitignore              # 仓库忽略清单
├── eidf.code-workspace
├── LICENSE
└── README.md
```

## 如何使用

请参考本项目的[Wiki](https://github.com/proyrb-reginald/EIDF/wiki)页面。
