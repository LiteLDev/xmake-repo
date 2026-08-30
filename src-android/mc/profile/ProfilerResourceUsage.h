#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProfilerResourceUsage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long>  totalUsedMemory;
    ::ll::TypedStorage<8, 8, long>  maxUsedMemory;
    ::ll::TypedStorage<8, 8, long>  bufferUsedMemory;
    ::ll::TypedStorage<8, 8, long>  bufferCount;
    ::ll::TypedStorage<8, 8, long>  textureUsedMemory;
    ::ll::TypedStorage<8, 8, long>  textureCount;
    ::ll::TypedStorage<4, 4, float> gpuTime;
    ::ll::TypedStorage<4, 4, int>   deviceThermalState;
    ::ll::TypedStorage<4, 4, int>   deviceBatteryCharging;
    ::ll::TypedStorage<1, 1, bool>  deviceLowBatteryMode;
    ::ll::TypedStorage<4, 4, float> deviceBatteryPct;
    // NOLINTEND
};
