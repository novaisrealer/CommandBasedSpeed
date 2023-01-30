// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveSubsystem.h"

DriveSubsystem::DriveSubsystem() {
  // Implementation of subsystem constructor goes here.
  samSmithEncoder.Reset();

  

  

}

void DriveSubsystem::Periodic() {
  // Implementation of subsystem periodic method goes here.

}

void DriveSubsystem::SimulationPeriodic() {
  // Implementation of subsystem simulation periodic method goes here.
}

void DriveSubsystem::Drive()  {
  
  double setpoint;

  double error;

  double outputSpeed = kP * error;

  if (m_xbox.GetAButton() ) {
    error = 0 - samSmithEncoder.Get();
    samSmith.Set(outputSpeed);
  } else if (m_xbox.GetBButton()){
    error = 500 - samSmithEncoder.Get();
    samSmith.Set(outputSpeed);
  } else {
    samSmith.Set(0);
  }
    
  }
  // double sensorPosition = samSmithEncoder.Get() * kDriveTickTwoFeet;

  // double error = setpoint - sensorPosition;
    

