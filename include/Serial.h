#pragma once

#define ARDUINO_WAIT_TIME 2000

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

class Serial
{
        

    public:

    //Serial comm handler
        HANDLE _serial;
        //Connection status
        bool _connected;
        //Get various information about the connection
        COMSTAT _status;
        //Keep track of last error
        DWORD _errors;

        bool _connected;
        
        //Initialize Serial communication with the given COM port
        Serial();
        Serial(const char *port);
        //Close the connection
        ~Serial();

        bool connect(const char* port);
        //Read data in a buffer, if nbChar is greater than the
        //maximum number of bytes available, it will return only the
        //bytes available. The function return -1 when nothing could
        //be read, the number of bytes actually read.
        int read(char* buffer, unsigned int size);
        //Writes data from a buffer through the Serial connection
        //return true on success.
        bool write(char* buffer,int size);
        //Check if we are actually connected
        bool IsConnected();
};