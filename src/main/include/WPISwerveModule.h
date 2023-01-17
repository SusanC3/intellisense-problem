#pragma once

#include <ctre/Phoenix.h>
#include <iostream>
#include <math.h>
#include <frc/smartdashboard/SmartDashboard.h>
#include <string.h>
#include "Controls.h"
#include "Constants.h"
#include <units/length.h>
#include <frc/kinematics/SwerveDriveKinematics.h>
#include <frc/MathUtil.h>

class WPISwerveModule
{
    public:
    
        frc::SwerveModulePosition getPosition();
        frc::SwerveModuleState getState();
        frc::SwerveModuleState getOptState(frc::SwerveModuleState state);
        

};