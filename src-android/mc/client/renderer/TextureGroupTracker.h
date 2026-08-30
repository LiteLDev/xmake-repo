#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace mce { class TextureGroup; }
namespace mce { struct CachedImageDebugInfo; }
namespace mce { struct TextureGroupDebugInfo; }
namespace mce { struct TextureLoadQueueStats; }
// clang-format on

namespace mce {

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

} // namespace mce
