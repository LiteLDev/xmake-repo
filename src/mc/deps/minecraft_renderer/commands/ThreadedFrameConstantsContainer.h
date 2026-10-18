#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_renderer/constantbuffers/ThreadedPerFrameConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/ThreadedRenderChunkConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/ThreadedShaderConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/ThreadedWorldConstants.h"

struct ThreadedFrameConstantsContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 184> mPerFrameConstants;
    ::ll::UntypedStorage<8, 176> mShaderConstants;
    ::ll::UntypedStorage<8, 144> mRenderChunkConstantBuffer;
    ::ll::UntypedStorage<8, 160> mWorldConstantBuffer;
    // NOLINTEND
};
#else // @header-generator platform
struct ThreadedFrameConstantsContainer {};
#endif // @header-generator platform
