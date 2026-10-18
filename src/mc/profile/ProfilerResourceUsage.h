#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ProfilerResourceUsage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk979c63;
    ::ll::UntypedStorage<8, 8> mUnkc322cd;
    ::ll::UntypedStorage<8, 8> mUnk304257;
    ::ll::UntypedStorage<8, 8> mUnka9df1f;
    ::ll::UntypedStorage<8, 8> mUnk838775;
    ::ll::UntypedStorage<8, 8> mUnk165df0;
    ::ll::UntypedStorage<4, 4> mUnk5b4841;
    ::ll::UntypedStorage<4, 4> mUnk3fd9e6;
    ::ll::UntypedStorage<4, 4> mUnk4667e2;
    ::ll::UntypedStorage<1, 1> mUnke9f675;
    ::ll::UntypedStorage<4, 4> mUnk76036b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ProfilerResourceUsage& operator=(ProfilerResourceUsage const&);
    ProfilerResourceUsage(ProfilerResourceUsage const&);
    ProfilerResourceUsage();
#endif // @header-generator platform
};
