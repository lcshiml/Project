/*===============================================================
*   Copyright (C) 2019 All rights reserved.
*   
*   文件名称：ser.h
*   创 建 者：@liuchen
*   创建日期：2019年11月20日
*   描    述：
*
*   更新日志：
*
================================================================*/
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<string>
#include<unistd.h>
#include<assert.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<event.h>
#include<event2/buffer.h>
#include<event2/bufferevent.h>
#include<fcntl.h>
#include<list>
#include<iostream>
#include<vector>
#include"sql_control.h"
#include<mysql/mysql.h>
#include<unordered_map>
#define MAX FD_SETSIZE

using std::cout;
using std::endl;
void Asyn_head_text(std::string s,std::string &head, std::string &text);
void LandAnalyze(std::string &src,std::unordered_map<std::string, std::string> &mMap);
class Dispse;
class Socket;
class Event;
