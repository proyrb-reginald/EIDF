#ifndef MAIN_H
#define MAIN_H

/**
 * @brief 提供用户级全局信息
 * @details
 * @file main.h
 * @author proyrb
 * @date 2025/7/28
 * @note
 */

/********** 导入需要的头文件 **********/

/********** 配置项目驱动 **********/

// 是否添加基于W25Q64的相关代码
#define ADD_W25Q64 1

// 是否添加基于ST7789V的相关代码
#define ADD_ST7789V 1

/********** 配置项目组件 **********/

// 是否添加基于片内文件系统的相关代码
#define ADD_EBD_FS 1

// 是否添加基于片外文件系统的相关代码
#if ADD_W25Q64
#    define ADD_ETN_FS 1
#else
#    define ADD_ETN_FS 0
#endif  // ADD_W25Q64

// 是否添加基于GUI的相关代码
#if ADD_ST7789V
#    define ADD_GUI 1
#else
#    define ADD_GUI 0
#endif  // ADD_ST7789V

#endif  // MAIN_H
