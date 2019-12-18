// ReadBatteryStatus.con.cs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <Windows.h>

int end()
{
	system("C:\\WINDOWS\\System32\\shutdown /s");
	return 1;
}

int main()
{
	while (1)
	{
		end();
		SYSTEM_POWER_STATUS status;
		GetSystemPowerStatus(&status);
		int life = status.BatteryLifePercent;
		int secs = status.BatteryLifeTime;
		std::cout << life;
		if (life <= 60) 
		{
			end();
		}
	}
}