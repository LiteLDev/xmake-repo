#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/TextureLoadMode.h"
#include "mc/deps/core/resource/ResourceLocation.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct TextureLoadQueueStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk552113;
    ::ll::UntypedStorage<8, 8>  mUnkafa38e;
    ::ll::UntypedStorage<8, 8>  mUnk5e1249;
    ::ll::UntypedStorage<8, 8>  mUnkc91554;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureLoadQueueStats& operator=(TextureLoadQueueStats const&);
    TextureLoadQueueStats(TextureLoadQueueStats const&);
    TextureLoadQueueStats();
};
#else // @header-generator platform
struct TextureLoadQueueStats {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
