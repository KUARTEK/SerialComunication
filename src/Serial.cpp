#include "Serial.h"


    //We're not yet connected
Serial::Serial() {
    _connected = false;
}

Serial::Serial(const char* portName) {
    _connected = false;
    connect(portName);
}

Serial::~Serial() {
    if(_connected) {
        _connected = false;
        //Close the serial handler
        CloseHandle(_serial);
    }
}

bool Serial::connect(const char* portName) {

    //Try to connect to the given port throuh CreateFile
    _serial =CreateFileA(portName, GENERIC_READ | GENERIC_WRITE,
        0, nullptr, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, nullptr);

    //Check if the connection was successfull
    if(_serial==INVALID_HANDLE_VALUE)
    {
        //If not success full display an Error
        if(GetLastError()==ERROR_FILE_NOT_FOUND){

            //Print Error if neccessary
            printf("ERROR: Handle was not attached. Reason: %s not available.\n", portName);

        }
        else
        {
            printf("ERROR!!!");
        }
    }
    else
    {
        //If connected we try to set the comm parameters
        DCB serialParams = {0};

        //Try to get the current
        if (!GetCommState(_serial, &serialParams))
        {
            //If impossible, show an error
            printf("failed to get current serial parameters!");
        }
        else
        {
            //Define serial connection parameters for the arduino board
            serialParams.BaudRate=CBR_9600;
            serialParams.ByteSize=8;
            serialParams.StopBits=ONESTOPBIT;
            serialParams.Parity=NOPARITY;
            //Setting the DTR to Control_Enable ensures that the Arduino is properly
            //reset upon establishing a connection
            serialParams.fDtrControl = DTR_CONTROL_ENABLE;

             //Set the parameters and check for their proper application
             if(!SetCommState(_serial, &serialParams))
             {
                printf("ALERT: Could not set Serial Port parameters");
             }
             else
             {
                 //If everything went fine we're connected
                 _connected = true;
                 //Flush any remaining characters in the buffers 
                 PurgeComm(_serial, PURGE_RXCLEAR | PURGE_TXCLEAR);
                 //We wait 2s as the arduino board will be reseting
                 Sleep(ARDUINO_WAIT_TIME);
             }
        }
    }

}

Serial::~Serial()
{
    //Check if we are connected before trying to disconnect
    if(_connected)
    {
        //We're no longer connected
        _connected = false;
        //Close the serial handler
        CloseHandle(_serial);
    }
}

int Serial::read(char *buffer, unsigned int size)
{
    //Number of bytes we'll have read
    DWORD bytesRead;
    //Number of bytes we'll really ask to read
    unsigned int toRead;

    //Use the ClearCommError function to get status info on the Serial port
    ClearCommError(_serial, &_errors, &_status);

    //Check if there is something to read
    if(_status.cbInQue>0)
    {
        //If there is we check if there is enough data to read the required number
        //of characters, if not we'll read only the available characters to prevent
        //locking of the application.
        if(_status.cbInQue>size)
        {
            toRead = size;
        }
        else
        {
            toRead = _status.cbInQue;
        }

        //Try to read the require number of chars, and return the number of read bytes on success
        if(ReadFile(_serial, buffer, toRead, &bytesRead, NULL) && bytesRead != 0 )
        {
            return bytesRead;
        }

    }

    //If nothing has been read, or that an error was detected return 0
    return 0;

}


bool Serial::write(char *buffer,int size)
{
    DWORD bytesSend;

    //Try to write the buffer on the Serial port
    if(!WriteFile(_serial, (void *)buffer, size, &bytesSend, 0))
    {
        //In case it don't work get comm error and return false
        ClearCommError(_serial, &_errors, &_status);

        return false;
    }
    else
        return true;
}

bool Serial::IsConnected()
{
    //Simply return the connection status
    return _connected;
}