#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor poncher = motor(PORT19, ratio18_1, false);
motor leftMotorA = motor(PORT8, ratio18_1, true);
motor leftMotorB = motor(PORT11, ratio18_1, true);
motor leftMotorC = motor(PORT17, ratio18_1, true);
motor_group LeftDriveSmart = motor_group(leftMotorA, leftMotorB);
motor rightMotorA = motor(PORT15, ratio18_1, false);
motor rightMotorB = motor(PORT3, ratio18_1, false);
motor rightMotorC = motor(PORT13, ratio18_1, false);
motor_group RightDriveSmart = motor_group(rightMotorA, rightMotorB);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 295, 40, mm, 1);
motor intakeMotorA = motor(PORT2, ratio18_1, false);
motor intakeMotorB = motor(PORT10, ratio18_1, false);
motor_group intake = motor_group(intakeMotorA, intakeMotorB);
digital_out piston = digital_out(Brain.ThreeWirePort.A);
digital_out piston_2 = digital_out(Brain.ThreeWirePort.B);
inertial inertial_1 = inertial(PORT14);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}