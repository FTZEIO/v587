# v587
项目概要
====
    本次我们设计的是AES加密器，我们的设计目的是任意输入一个数以及加密密匙，通过我们的设计可以输出按照对应加密算法所得到
    的加密结果，但是由于缺少一些输入的外设，我们本次完成的设计不能实现任意的数的AES加密，只能实现我们在开发板RAM中固化
    数的AES加密。这次设计学习到的知识点有以下几点：（1）进一步熟悉 SEA 开发板以及Vivado环境下运用 verilog语言的编程开
    发流程，包括源程序的编写、编译、模拟仿真及程序下载；（2）学习了AES加密算法的verilog代码编写；（3）学会使用ESP32与
    FPGA的QSPI通信方法，能利用这个方法在Ardunio中通过简单Ardunio程序的编写来实现加密结果的输出。本次设计我们设想的应用
    场景是用作简易的AES加密器，可用于一般的AES加密工作，使他能完成任意数的AES加密结果并输出。实现的功能为完成对开发板
    RAM中固化的数的AES加密及加密结果的显示。
使用的工具版本
====
    vivado2018.3,arduino18.1.10
小组成员列表
====
    冯天宗-2018112757
    李科峰-2018112819
板块型号
====
    SEA-S7
外设列表
====
    无
仓库目录介绍
====
    images：存放照片；Sourcecode：存放项目源代码；ExecutableFiles：存放可直接运行的可执行文件。
作品照片
====
    见images文件夹
