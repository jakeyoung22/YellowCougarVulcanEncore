#ifndef Base_H
#define Base_H

#include <Commands/Subsystem.h>

class Base : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Base();
	void InitDefaultCommand();
	void MecanumDefaultCode();
};

#endif  // Base_H
