#include "OI.h"

#include <WPILib.h>

OI::OI() {
	// Process operator interface input here.
	m_Driver   = new Joystick(0);
	m_Operator = new Joystick(1);


#include "robotmap.h"

#include "xb360map.h"



	float OI::DriveX()
	{
		return Filter(m_Driver ->GetRawAxis(XB360_AXIS_LEFT_X));
	}


	float OI::DriveY()
	{
		//	Don't invert. The drive expects that they will be backwards.  Sad panda.
		return Filter(m_Driver ->GetRawAxis(XB360_AXIS_LEFT_Y));
	}

	float OI::Filter(float in)
	{
		return ( (fabs(in) < FILTER_VALUE) ? 0 : in );
	}

	float OI::DriveZ()
	{
		return Filter( m_Driver->GetRawAxis(XB360_AXIS_TRIGGER_R) )
			 - Filter( m_Driver->GetRawAxis(XB360_AXIS_TRIGGER_L) );

	}
}
