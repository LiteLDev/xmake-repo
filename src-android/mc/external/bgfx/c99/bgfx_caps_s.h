#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/c99/bgfx_caps_gpu_s.h"
#include "mc/external/bgfx/c99/bgfx_caps_limits_s.h"
#include "mc/external/bgfx/c99/bgfx_renderer_type.h"

struct bgfx_caps_s {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::bgfx_renderer_type>    rendererType;
    ::ll::TypedStorage<1, 32, char[32]>               rendererVersion;
    ::ll::TypedStorage<8, 8, ulong>                   rendererFeatureVersion;
    ::ll::TypedStorage<8, 8, ulong>                   shaderFeatureVersion;
    ::ll::TypedStorage<8, 8, ulong>                   supported;
    ::ll::TypedStorage<2, 2, ushort>                  vendorId;
    ::ll::TypedStorage<2, 2, ushort>                  deviceId;
    ::ll::TypedStorage<4, 4, uint>                    subSysId;
    ::ll::TypedStorage<4, 4, uint>                    revision;
    ::ll::TypedStorage<8, 8, ulong>                   dedicatedVideoMemory;
    ::ll::TypedStorage<8, 8, ulong>                   dedicatedSystemMemory;
    ::ll::TypedStorage<8, 8, ulong>                   sharedSystemMemory;
    ::ll::TypedStorage<8, 8, ulong>                   reservedVideoMemory;
    ::ll::TypedStorage<1, 512, char[512]>             chipsetName;
    ::ll::TypedStorage<1, 512, char[512]>             driverVersion;
    ::ll::TypedStorage<1, 1, bool>                    homogeneousDepth;
    ::ll::TypedStorage<1, 1, bool>                    originBottomLeft;
    ::ll::TypedStorage<1, 1, uchar>                   numGPUs;
    ::ll::TypedStorage<4, 4, uint>                    displayWidth;
    ::ll::TypedStorage<4, 4, uint>                    displayHeight;
    ::ll::TypedStorage<4, 4, float>                   fpEpsilon;
    ::ll::TypedStorage<8, 4288, ::bgfx_caps_gpu_s[4]> gpu;
    ::ll::TypedStorage<4, 108, ::bgfx_caps_limits_s>  limits;
    ::ll::TypedStorage<2, 186, ushort[93]>            formats;
    ::ll::TypedStorage<8, 8, char*>                   extensions;
    ::ll::TypedStorage<8, 8, char*>                   platformExtensions;
    // NOLINTEND
};
