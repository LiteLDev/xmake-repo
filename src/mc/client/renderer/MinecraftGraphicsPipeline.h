#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/renderer/hal/interface/Texture.h"

class MinecraftGraphicsPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 128> mMSAAColorTexture;
    ::ll::UntypedStorage<8, 128> mMSAADepthTexture;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class MinecraftGraphicsPipeline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk9276a8;
    ::ll::UntypedStorage<8, 104> mUnk67880b;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGraphicsPipeline& operator=(MinecraftGraphicsPipeline const&);
    MinecraftGraphicsPipeline(MinecraftGraphicsPipeline const&);
    MinecraftGraphicsPipeline();
};
#else // @header-generator platform
class MinecraftGraphicsPipeline {};
#endif // @header-generator platform
#endif // @header-generator platform
