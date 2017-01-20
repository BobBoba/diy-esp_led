// passwords.h

#ifndef _PASSWORDS_h
#define _PASSWORDS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

extern const char *ssid;
extern const char *pass;

extern char azureHost[];
extern int azurePort;
extern char authSAS[];
extern char deviceName[];
extern char azureUri[];


#endif

