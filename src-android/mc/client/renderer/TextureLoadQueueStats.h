#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/TextureLoadMode.h"
#include "mc/deps/core/resource/ResourceLocation.h"

namespace mce {

struct TextureLoadQueueStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<ResourceLocation, TextureLoadMode>>> mTextureLoadKeys;
    ::ll::TypedStorage<8, 8, ulong>                                                      mOutstandingTaskMemory;
    ::ll::TypedStorage<8, 8, ulong>                                                      mOutstandingTaskCount;
    ::ll::TypedStorage<8, 8, ulong>                                                      mPendingReloadCounter;
    // NOLINTEND
};

} // namespace mce
