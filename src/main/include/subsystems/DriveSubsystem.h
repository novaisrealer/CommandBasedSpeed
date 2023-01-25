// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc/motorcontrol/Spark.h>
#include <frc2/command/SubsystemBase.h>
#include <frc/XboxController.h>

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem();

  void Drive();

  void Periodic() override;

  void SimulationPeriodic() override;

 private:
  frc::Spark samSmith{1};  

  frc::XboxController m_xbox{0};
};