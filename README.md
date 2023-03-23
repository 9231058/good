# Good

## Introduction

Networking phase of Final Project of Introduction to Programming Course (Fall 2015).
On that year, [Iman](https://github.com/Tabrizian/) and I decided to have networking phase for our final project,
which was a game that can be played in multiplayer model.

## C Socket Programming in MinGW

For those using MinGW as their socket programming library, they can use almost all of BSD socket
functions in their program and at the end they must add these lines of code to load WINSock DLL.

```c
WSADATA wsaData;
WSAStartup(MAKEWORD(2, 2), &wsaData);
```

And use following command for compiling:

```bash
gcc main.c  -lws2_32
```
