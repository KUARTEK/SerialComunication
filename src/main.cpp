#include <stdio.h>
#include <tchar.h>
#include <cstdio>
#include <cstdlib>
#include "Serial.h"	// Library described above
#include <string>


// application reads from the specified serial port and reports the collected data
int main(int argc, char* argv[])
{
	printf("Welcome to the serial test app!\n\n");

	Serial portName;
	portName.connect("COM4");

	if (portName._connected)
		printf("We're connected");

	char incomingData[256] = "";			// don't forget to pre-allocate memory
	//printf("%s\n",incomingData);
	int dataLength = 255;
	int readResult = 0;

	while(portName._connected)
	{
		readResult = portName.read(incomingData,dataLength);
		// printf("Bytes read: (0 means no data available) %i\n",readResult);
                incomingData[readResult] = 0;

        	printf("%s",incomingData);

		Sleep(500);
	}
	return 0;
}