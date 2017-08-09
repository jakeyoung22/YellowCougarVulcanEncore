#ifndef OI_H
#define OI_H
#include "WPILib.h"
class OI {
public:
	OI();
		float DriveX();
		float DriveY();
		float DriveZ();
private:

	Joystick *m_Driver;
	Joystick *m_Operator;
	float Filter( float in );
};

#endif  // OI_H
