#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/RendererType.h"

namespace bgfx {

struct Caps {
public:
    // Caps inner types declare
    // clang-format off
    struct GPU;
    struct Limits;
    // clang-format on

    // Caps inner types define
    struct GPU {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ushort>      vendorId;
        ::ll::TypedStorage<2, 2, ushort>      deviceId;
        ::ll::TypedStorage<4, 4, uint>        subSysId;
        ::ll::TypedStorage<4, 4, uint>        revision;
        ::ll::TypedStorage<8, 8, ulong>       dedicatedVideoMemory;
        ::ll::TypedStorage<8, 8, ulong>       dedicatedSystemMemory;
        ::ll::TypedStorage<8, 8, ulong>       sharedSystemMemory;
        ::ll::TypedStorage<8, 8, ulong>       reservedVideoMemory;
        ::ll::TypedStorage<1, 512, char[512]> chipsetName;
        ::ll::TypedStorage<1, 512, char[512]> driverVersion;
        // NOLINTEND
    };

    struct Limits {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> maxDrawCalls;
        ::ll::TypedStorage<4, 4, uint> maxBlits;
        ::ll::TypedStorage<4, 4, uint> maxTextureSize;
        ::ll::TypedStorage<4, 4, uint> maxTextureLayers;
        ::ll::TypedStorage<4, 4, uint> maxViews;
        ::ll::TypedStorage<4, 4, uint> maxFrameBuffers;
        ::ll::TypedStorage<4, 4, uint> maxFBAttachments;
        ::ll::TypedStorage<4, 4, uint> maxPrograms;
        ::ll::TypedStorage<4, 4, uint> maxShaders;
        ::ll::TypedStorage<4, 4, uint> maxTextures;
        ::ll::TypedStorage<4, 4, uint> maxTextureSamplers;
        ::ll::TypedStorage<4, 4, uint> maxComputeBindings;
        ::ll::TypedStorage<4, 4, uint> maxVertexDecls;
        ::ll::TypedStorage<4, 4, uint> maxVertexStreams;
        ::ll::TypedStorage<4, 4, uint> maxVertexCount;
        ::ll::TypedStorage<4, 4, uint> maxIndexBuffers;
        ::ll::TypedStorage<4, 4, uint> maxVertexBuffers;
        ::ll::TypedStorage<4, 4, uint> maxDynamicIndexBuffers;
        ::ll::TypedStorage<4, 4, uint> maxDynamicVertexBuffers;
        ::ll::TypedStorage<4, 4, uint> maxUniforms;
        ::ll::TypedStorage<4, 4, uint> maxOcclusionQueries;
        ::ll::TypedStorage<4, 4, uint> maxEncoders;
        ::ll::TypedStorage<4, 4, uint> transientVbSize;
        ::ll::TypedStorage<4, 4, uint> transientIbSize;
        ::ll::TypedStorage<4, 4, uint> maxAccelerationStructures;
        ::ll::TypedStorage<4, 4, uint> avgAccelerationStructureSize;
        ::ll::TypedStorage<4, 4, uint> maxComputeWorkGroupInvocations;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>                        rendererType;
    ::ll::TypedStorage<1, 32, char[32]>               rendererVersion;
    ::ll::TypedStorage<1, 512, char[512]>             driverVersion;
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
    ::ll::TypedStorage<1, 1, bool>                    homogeneousDepth;
    ::ll::TypedStorage<1, 1, bool>                    originBottomLeft;
    ::ll::TypedStorage<1, 1, uchar>                   numGPUs;
    ::ll::TypedStorage<4, 4, uint>                    displayWidth;
    ::ll::TypedStorage<4, 4, uint>                    displayHeight;
    ::ll::TypedStorage<4, 4, float>                   fpEpsilon;
    ::ll::TypedStorage<8, 4288, ::bgfx::Caps::GPU[4]> gpu;
    ::ll::TypedStorage<4, 108, ::bgfx::Caps::Limits>  limits;
    ::ll::TypedStorage<2, 186, ushort[93]>            formats;
    ::ll::TypedStorage<8, 8, char*>                   extensions;
    ::ll::TypedStorage<8, 8, char*>                   platformExtensions;
    // NOLINTEND
};

} // namespace bgfx
