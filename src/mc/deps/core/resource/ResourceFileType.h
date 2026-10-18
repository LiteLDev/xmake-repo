#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ResourceLoaders {

#if defined(LL_PLAT_A) // @header-generator platform
enum ResourceFileType : uint {
#else // @header-generator platform
enum class ResourceFileType : uint {
#endif // @header-generator platform
    Image              = 0,
    NoExtensionOrImage = 1,
    Audio              = 2,
    TextureSet         = 3,
    TextureSetOrImage  = 4,
#if defined(LL_PLAT_A) // @header-generator platform
    COUNT              = 5,
#else // @header-generator platform
    Count              = 5,
#endif // @header-generator platform
};

}
