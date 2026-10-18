#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct bgfx_caps_limits_s {
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
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
