#pragma once

#include<WinSock2.h>
#include<stdio.h>
#include<Windows.h>
#include<string>
#include<iostream>
#include<exception>
#include<vector>
#include<errno.h>
#include "json/json.h"
using namespace std;
#pragma comment(lib,"WS2_32.lib")//显示连接套接字库

void handleRecv();
string U2G(const char* utf8);
string R(int rl);
bool handleSend(string &src_mac, string &des_mac,string &mes);
void TCPStart(string port);
void TCPClose();