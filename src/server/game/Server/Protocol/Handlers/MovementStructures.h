/*
 * Copyright (C) 2010-2012 Project SkyFire <http://www.projectskyfire.org/>
 * Copyright (C) 2005-2012 MaNGOS <http://www.getmangos.com/>
 * Copyright (C) 2008-2012 Trinity <http://www.trinitycore.org/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */
 
#ifndef _MOVEMENT_STRUCTURES_H
#define _MOVEMENT_STRUCTURES_H

enum MovementStatusElements
{
    MSEFlags,
    MSEFlags2,
    MSETimestamp,
    MSEHavePitch,
    MSEGuidByte0,
    MSEGuidByte1,
    MSEGuidByte2,
    MSEGuidByte3,
    MSEGuidByte4,
    MSEGuidByte5,
    MSEGuidByte6,
    MSEGuidByte7,
    MSEHaveFallData,
    MSEHaveFallDirection,
    MSEHaveTransportData,
    MSETransportHaveTime2,
    MSETransportHaveTime3,
    MSETransportGuidByte0,
    MSETransportGuidByte1,
    MSETransportGuidByte2,
    MSETransportGuidByte3,
    MSETransportGuidByte4,
    MSETransportGuidByte5,
    MSETransportGuidByte6,
    MSETransportGuidByte7,
    MSEHaveSpline,
    MSEHaveSplineElev,
    MSEPositionX,
    MSEPositionY,
    MSEPositionZ,
    MSEPositionO,
    MSEGuidByte0_2,
    MSEGuidByte1_2,
    MSEGuidByte2_2,
    MSEGuidByte3_2,
    MSEGuidByte4_2,
    MSEGuidByte5_2,
    MSEGuidByte6_2,
    MSEGuidByte7_2,
    MSEPitch,
    MSEFallTime,
    MSETransportGuidByte0_2,
    MSETransportGuidByte1_2,
    MSETransportGuidByte2_2,
    MSETransportGuidByte3_2,
    MSETransportGuidByte4_2,
    MSETransportGuidByte5_2,
    MSETransportGuidByte6_2,
    MSETransportGuidByte7_2,
    MSESplineElev,
    MSEFallHorizontalSpeed,
    MSEFallVerticalSpeed,
    MSEFallCosAngle,
    MSEFallSinAngle,
    MSETransportSeat,
    MSETransportPositionO,
    MSETransportPositionX,
    MSETransportPositionY,
    MSETransportPositionZ,
    MSETransportTime,
    MSETransportTime2,
    MSETransportTime3,
    MSE_COUNT
};

MovementStatusElements PlayerMoveSequence[] = {
MSEHavePitch,
MSEGuidByte6,
MSEHaveFallData,
MSEHaveFallDirection,
MSEGuidByte1,
MSEGuidByte2,
MSEFlags2,
MSEGuidByte0,
MSEHaveTransportData,
MSETransportGuidByte1,
MSETransportGuidByte4,
MSETransportGuidByte0,
MSETransportHaveTime2,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte2,
MSETransportGuidByte7,
MSETransportHaveTime3,
MSETransportGuidByte5,
MSEGuidByte3,
MSEGuidByte4,
MSEGuidByte5,
MSEHaveSpline,
MSEGuidByte7,
MSEHaveSplineElev,
MSEFlags,
MSEPositionO,
MSEGuidByte0_2,
MSEPitch,
MSEGuidByte4_2,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEFallVerticalSpeed,
MSETimestamp,
MSEGuidByte1_2,
MSETransportGuidByte7_2,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportSeat,
MSETransportTime2,
MSETransportGuidByte0_2,
MSETransportGuidByte6_2,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportGuidByte4_2,
MSETransportPositionO,
MSETransportTime3,
MSETransportGuidByte5_2,
MSETransportTime,
MSETransportGuidByte2_2,
MSEGuidByte2_2,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEGuidByte6_2,
MSESplineElev,
MSEGuidByte5_2,
MSEGuidByte3_2,
MSEGuidByte7_2
};

MovementStatusElements MovementFallLandSequence[] = {
MSEGuidByte5,
MSEGuidByte6,
MSEGuidByte4,
MSEGuidByte1,
MSEGuidByte2,
MSEHaveSpline,
MSEFlags2,
MSEGuidByte7,
MSEGuidByte3,
MSEGuidByte0,
MSEFlags,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHavePitch,
MSEHaveSplineElev,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEPositionO,
MSEGuidByte7_2,
MSEGuidByte2_2,
MSEGuidByte3_2,
MSEGuidByte0_2,
MSEGuidByte1_2,
MSEGuidByte5_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEPitch,
MSESplineElev,
MSEGuidByte6_2,
MSEGuidByte4_2,
};

MovementStatusElements MovementHeartBeatSequence[] = {
MSEGuidByte1,
MSEGuidByte5,
MSEGuidByte2,
MSEFlags2,
MSEGuidByte3,
MSEGuidByte4,
MSEHaveSpline,
MSEFlags,
MSEGuidByte0,
MSEGuidByte6,
MSEGuidByte7,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHavePitch,
MSEHaveSplineElev,
MSEHaveFallData,
MSEHaveFallDirection,
MSEPositionO,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSETimestamp,
MSEGuidByte6_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEPitch,
MSESplineElev,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte5_2,
MSEGuidByte1_2,
MSEGuidByte7_2,
MSEGuidByte0_2,
MSEGuidByte2_2,
MSEGuidByte4_2,
MSEGuidByte3_2,
};

MovementStatusElements MovementJumpSequence[] = {
MSEGuidByte5,
MSEGuidByte1,
MSEGuidByte6,
MSEFlags,
MSEGuidByte2,
MSEHaveSpline,
MSEGuidByte3,
MSEFlags2,
MSEGuidByte4,
MSEGuidByte0,
MSEGuidByte7,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHaveSplineElev,
MSEHavePitch,
MSEPositionO,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSETimestamp,
MSEGuidByte1_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte6_2,
MSEGuidByte4_2,
MSESplineElev,
MSEGuidByte0_2,
MSEPitch,
MSEGuidByte5_2,
MSEGuidByte3_2,
MSEGuidByte7_2,
MSEGuidByte2_2,
};

MovementStatusElements MovementSetFacingSequence[] = {
MSEGuidByte3,
MSEGuidByte1,
MSEGuidByte0,
MSEGuidByte7,
MSEFlags2,
MSEHaveSpline,
MSEGuidByte4,
MSEFlags,
MSEGuidByte6,
MSEGuidByte5,
MSEGuidByte2,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHavePitch,
MSEHaveSplineElev,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEPositionO,
MSETimestamp,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte2_2,
MSEGuidByte4_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte3_2,
MSEGuidByte7_2,
MSEPitch,
MSEGuidByte5_2,
MSEGuidByte1_2,
MSEGuidByte6_2,
MSESplineElev,
MSEGuidByte0_2,
};

MovementStatusElements MovementSetPitchSequence[] = {
MSEGuidByte4,
MSEGuidByte6,
MSEGuidByte2,
MSEFlags2,
MSEGuidByte1,
MSEGuidByte7,
MSEGuidByte5,
MSEGuidByte3,
MSEHaveSpline,
MSEGuidByte0,
MSEFlags,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHaveSplineElev,
MSEHavePitch,
MSEPositionO,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEGuidByte2_2,
MSEGuidByte6_2,
MSEGuidByte5_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte3_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte0_2,
MSEGuidByte1_2,
MSESplineElev,
MSEGuidByte7_2,
MSEGuidByte4_2,
MSEPitch,
};

MovementStatusElements MovementStartBackwardSequence[] = {
MSEGuidByte4,
MSEGuidByte1,
MSEGuidByte5,
MSEFlags2,
MSEGuidByte3,
MSEGuidByte6,
MSEGuidByte0,
MSEGuidByte2,
MSEGuidByte7,
MSEFlags,
MSEHaveSpline,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHavePitch,
MSEHaveSplineElev,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSETimestamp,
MSEPositionO,
MSEGuidByte0_2,
MSEGuidByte5_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte4_2,
MSEGuidByte2_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte6_2,
MSEPitch,
MSEGuidByte3_2,
MSESplineElev,
MSEGuidByte1_2,
MSEGuidByte7_2,
};

MovementStatusElements MovementStartForwardSequence[] = {
MSEGuidByte0,
MSEHaveSpline,
MSEGuidByte5,
MSEGuidByte3,
MSEGuidByte4,
MSEGuidByte2,
MSEGuidByte7,
MSEFlags2,
MSEFlags,
MSEGuidByte6,
MSEGuidByte1,
MSEHavePitch,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHaveSplineElev,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEPositionO,
MSEGuidByte7_2,
MSEPitch,
MSEGuidByte1_2,
MSEGuidByte2_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte3_2,
MSEGuidByte5_2,
MSEGuidByte0_2,
MSEGuidByte6_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte4_2,
MSESplineElev,
};

MovementStatusElements MovementStartStrafeLeftSequence[] = {
MSEGuidByte5,
MSEGuidByte0,
MSEGuidByte3,
MSEFlags,
MSEGuidByte6,
MSEGuidByte1,
MSEGuidByte4,
MSEFlags2,
MSEHaveSpline,
MSEGuidByte7,
MSEGuidByte2,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHaveSplineElev,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHavePitch,
MSEPositionO,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEGuidByte3_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte5_2,
MSEGuidByte1_2,
MSEGuidByte4_2,
MSEGuidByte2_2,
MSEGuidByte0_2,
MSESplineElev,
MSEGuidByte6_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte7_2,
MSEPitch,
};

MovementStatusElements MovementStartStrafeRightSequence[] = {
MSEGuidByte2,
MSEFlags,
MSEGuidByte3,
MSEFlags2,
MSEGuidByte0,
MSEGuidByte6,
MSEHaveSpline,
MSEGuidByte1,
MSEGuidByte4,
MSEGuidByte5,
MSEGuidByte7,
MSEHaveSplineElev,
MSEHavePitch,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHaveFallData,
MSEHaveFallDirection,
MSETimestamp,
MSEPositionO,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEGuidByte7_2,
MSEGuidByte1_2,
MSESplineElev,
MSEGuidByte3_2,
MSEPitch,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte5_2,
MSEGuidByte2_2,
MSEGuidByte6_2,
MSEGuidByte4_2,
MSEGuidByte0_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
};

MovementStatusElements MovementStartTurnLeftSequence[] = {
MSEFlags,
MSEGuidByte3,
MSEGuidByte5,
MSEGuidByte7,
MSEFlags2,
MSEGuidByte6,
MSEHaveSpline,
MSEGuidByte0,
MSEGuidByte2,
MSEGuidByte1,
MSEGuidByte4,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveSplineElev,
MSEHavePitch,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEPositionO,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEGuidByte2_2,
MSEGuidByte6_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte4_2,
MSESplineElev,
MSEGuidByte0_2,
MSEGuidByte7_2,
MSEPitch,
MSEGuidByte1_2,
MSEGuidByte5_2,
MSEGuidByte3_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
};

MovementStatusElements MovementStartTurnRightSequence[] = {
MSEGuidByte0,
MSEFlags,
MSEGuidByte7,
MSEHaveSpline,
MSEGuidByte4,
MSEGuidByte6,
MSEGuidByte3,
MSEGuidByte1,
MSEFlags2,
MSEGuidByte2,
MSEGuidByte5,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHavePitch,
MSEHaveSplineElev,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEPositionO,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEGuidByte1_2,
MSEGuidByte6_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte0_2,
MSEGuidByte5_2,
MSEGuidByte2_2,
MSEPitch,
MSEGuidByte4_2,
MSEGuidByte3_2,
MSEGuidByte7_2,
MSESplineElev,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
};

MovementStatusElements MovementStopSequence[] = {
MSEGuidByte4,
MSEGuidByte3,
MSEFlags,
MSEGuidByte5,
MSEGuidByte6,
MSEGuidByte0,
MSEGuidByte1,
MSEGuidByte2,
MSEGuidByte7,
MSEHaveSpline,
MSEFlags2,
MSEHavePitch,
MSEHaveSplineElev,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEPositionO,
MSEGuidByte6_2,
MSEGuidByte5_2,
MSEGuidByte1_2,
MSEGuidByte3_2,
MSEPitch,
MSEGuidByte2_2,
MSESplineElev,
MSEGuidByte4_2,
MSEGuidByte0_2,
MSEGuidByte7_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
};

MovementStatusElements MovementStopStrafeSequence[] = {
MSEGuidByte3,
MSEFlags,
MSEHaveSpline,
MSEGuidByte4,
MSEGuidByte0,
MSEFlags2,
MSEGuidByte5,
MSEGuidByte6,
MSEGuidByte7,
MSEGuidByte1,
MSEGuidByte2,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHaveSplineElev,
MSEHavePitch,
MSEHaveFallData,
MSEHaveFallDirection,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEPositionO,
MSETimestamp,
MSEGuidByte2_2,
MSEGuidByte7_2,
MSEGuidByte5_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte0_2,
MSESplineElev,
MSEPitch,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte1_2,
MSEGuidByte3_2,
MSEGuidByte4_2,
MSEGuidByte6_2,
};

MovementStatusElements MovementStopTurnSequence[] = {
MSEGuidByte3,
MSEGuidByte5,
MSEGuidByte4,
MSEGuidByte2,
MSEFlags2,
MSEGuidByte0,
MSEGuidByte7,
MSEGuidByte6,
MSEGuidByte1,
MSEHaveSpline,
MSEFlags,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHaveSplineElev,
MSEHavePitch,
MSEPositionO,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEGuidByte4_2,
MSEGuidByte2_2,
MSEGuidByte5_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte0_2,
MSEGuidByte7_2,
MSEGuidByte6_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSESplineElev,
MSEGuidByte1_2,
MSEGuidByte3_2,
MSEPitch,
};

MovementStatusElements MovementStartAscendSequence[] = {
MSEGuidByte2,
MSEGuidByte3,
MSEGuidByte6,
MSEGuidByte4,
MSEGuidByte0,
MSEHaveSpline,
MSEGuidByte1,
MSEGuidByte5,
MSEFlags,
MSEFlags2,
MSEGuidByte7,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHavePitch,
MSEHaveSplineElev,
MSEPositionO,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSETimestamp,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte5_2,
MSEGuidByte3_2,
MSEGuidByte4_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte0_2,
MSEGuidByte2_2,
MSEPitch,
MSEGuidByte6_2,
MSESplineElev,
MSEGuidByte7_2,
MSEGuidByte1_2,
};

MovementStatusElements MovementStartDescendSequence[] = {
MSEGuidByte7,
MSEGuidByte0,
MSEGuidByte2,
MSEGuidByte1,
MSEGuidByte6,
MSEGuidByte4,
MSEGuidByte5,
MSEHaveSpline,
MSEGuidByte3,
MSEFlags2,
MSEFlags,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHavePitch,
MSEHaveSplineElev,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEPositionO,
MSEGuidByte3_2,
MSEGuidByte4_2,
MSEGuidByte2_2,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEPitch,
MSEGuidByte5_2,
MSESplineElev,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte1_2,
MSEGuidByte0_2,
MSEGuidByte7_2,
MSEGuidByte6_2,
};

MovementStatusElements MovementStartSwimSequence[] = {
MSEGuidByte1,
MSEGuidByte5,
MSEFlags,
MSEGuidByte2,
MSEHaveSpline,
MSEGuidByte6,
MSEFlags2,
MSEGuidByte4,
MSEGuidByte7,
MSEGuidByte0,
MSEGuidByte3,
MSEHavePitch,
MSEHaveSplineElev,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSEPositionO,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSETimestamp,
MSEPitch,
MSEGuidByte4_2,
MSESplineElev,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte0_2,
MSEGuidByte7_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
MSEGuidByte6_2,
MSEGuidByte5_2,
MSEGuidByte2_2,
MSEGuidByte1_2,
MSEGuidByte3_2,
};

MovementStatusElements MovementStopAscendSequence[] = {
MSEHaveSpline,
MSEGuidByte5,
MSEGuidByte3,
MSEGuidByte1,
MSEFlags,
MSEGuidByte4,
MSEGuidByte7,
MSEGuidByte2,
MSEFlags2,
MSEGuidByte6,
MSEGuidByte0,
MSEHavePitch,
MSEHaveSplineElev,
MSEHaveFallData,
MSEHaveFallDirection,
MSEHaveTransportData,
MSETransportGuidByte6,
MSETransportGuidByte3,
MSETransportGuidByte7,
MSETransportGuidByte4,
MSETransportGuidByte1,
MSETransportGuidByte0,
MSETransportGuidByte2,
MSETransportGuidByte5,
MSETransportHaveTime3,
MSETransportHaveTime2,
MSETimestamp,
MSEPositionX,
MSEPositionY,
MSEPositionZ,
MSEPositionO,
MSEGuidByte5_2,
MSEGuidByte2_2,
MSEGuidByte0_2,
MSEGuidByte7_2,
MSEPitch,
MSEGuidByte3_2,
MSEGuidByte4_2,
MSEGuidByte1_2,
MSESplineElev,
MSEFallVerticalSpeed,
MSEFallTime,
MSEFallHorizontalSpeed,
MSEFallCosAngle,
MSEFallSinAngle,
MSEGuidByte6_2,
MSETransportTime,
MSETransportPositionX,
MSETransportPositionY,
MSETransportPositionZ,
MSETransportPositionO,
MSETransportSeat,
MSETransportGuidByte3_2,
MSETransportGuidByte1_2,
MSETransportTime3,
MSETransportGuidByte6_2,
MSETransportGuidByte0_2,
MSETransportGuidByte5_2,
MSETransportTime2,
MSETransportGuidByte7_2,
MSETransportGuidByte4_2,
MSETransportGuidByte2_2,
};

MovementStatusElements* GetMovementStatusElementsSequence(Opcodes opcode)
{
    switch(opcode)
    {
    case SMSG_PLAYER_MOVE:
        return PlayerMoveSequence;
    case MSG_MOVE_FALL_LAND:
        return MovementFallLandSequence;
    case MSG_MOVE_HEARTBEAT:
        return MovementHeartBeatSequence;
    case MSG_MOVE_JUMP:
        return MovementJumpSequence;
    case MSG_MOVE_SET_FACING:
        return MovementSetFacingSequence;
    case MSG_MOVE_SET_PITCH:
        return MovementSetPitchSequence;
    case MSG_MOVE_START_BACKWARD:
        return MovementStartBackwardSequence;
    case MSG_MOVE_START_FORWARD:
        return MovementStartForwardSequence;
    case MSG_MOVE_START_STRAFE_LEFT:
        return MovementStartStrafeLeftSequence;
    case MSG_MOVE_START_STRAFE_RIGHT:
        return MovementStartStrafeRightSequence;
    case MSG_MOVE_START_TURN_LEFT:
        return MovementStartTurnLeftSequence;
    case MSG_MOVE_START_TURN_RIGHT:
        return MovementStartTurnRightSequence;
    case MSG_MOVE_STOP:
        return MovementStopSequence;
    case MSG_MOVE_STOP_STRAFE:
        return MovementStopStrafeSequence;
    case MSG_MOVE_STOP_TURN:
        return MovementStopTurnSequence;
    case MSG_MOVE_START_ASCEND:
        return MovementStartAscendSequence;
    case MSG_MOVE_START_DESCEND:
        return MovementStartDescendSequence;
    case MSG_MOVE_START_SWIM:
        return MovementStartSwimSequence;
    case MSG_MOVE_STOP_ASCEND:
        return MovementStopAscendSequence;
    }
    return NULL;
}

#endif //_MOVEMENT_STRUCTURES_H