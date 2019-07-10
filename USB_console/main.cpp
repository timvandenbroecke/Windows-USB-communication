/*
 *	Operating system: Windows 10
 *
 *	Description:	  Working USB serial I/O communication for Windows,
 *					  last tested for windows 10.
 *					  This is still barebones or minimal for 
 *
 *	Made by:		  Tim Vandenbroecke
 *
 *	This can be used for everyone.
*/

#include <iostream>
#include "SerialPort.h"

using namespace std;

int main()
{
	//USB port and Baudrate
	SerialPort port("com3", 9600);

	while (1)
	{

		//Receive
		unsigned char dataR;
		port.receive(dataR, 1);
		
		cout << dataR << endl;
	}
	return 0;
}