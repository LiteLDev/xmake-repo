#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace mce { class TextureGroup; }
namespace mce { struct CachedImageDebugInfo; }
namespace mce { struct TextureGroupDebugInfo; }
namespace mce { struct TextureLoadQueueStats; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class TextureGroupTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::TextureGroup&> mTextureGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroupTracker& operator=(TextureGroupTracker const&);
    TextureGroupTracker(TextureGroupTracker const&);
    TextureGroupTracker();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class TextureGroupTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc1ed86;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureGroupTracker& operator=(TextureGroupTracker const&);
    TextureGroupTracker(TextureGroupTracker const&);
    TextureGroupTracker();
};
#else // @header-generator platform
class TextureGroupTracker {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
