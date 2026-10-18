#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace mce::framebuilder::bgfxbridge {

#if defined(LL_PLAT_A) // @header-generator platform
struct UITarget {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mColor;
    ::ll::UntypedStorage<8, 24> mDepth;
    // NOLINTEND

public:
    // prevent constructor by default
    UITarget& operator=(UITarget const&);
};
#else // @header-generator platform
struct UITarget {};
#endif // @header-generator platform

} // namespace mce::framebuilder::bgfxbridge
