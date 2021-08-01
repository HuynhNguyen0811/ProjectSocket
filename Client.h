#pragma once
#ifndef CLIENT_H_
#define CLIENT_H_
#include<iostream>
#include<WS2tcpip.h>
#include<string>
#pragma comment(lib, "ws2_32.lib")

using namespace std;
#define PORT 8080

int createClient();

#endif // !CLIENT_H_

