#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/Sampler2DObject.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace renoir {

#if defined(LL_PLAT_A) // @header-generator platform
struct DestroySamplerCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> Object;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct DestroySamplerCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk988bbd;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroySamplerCmd& operator=(DestroySamplerCmd const&);
    DestroySamplerCmd(DestroySamplerCmd const&);
    DestroySamplerCmd();
};
#else // @header-generator platform
struct DestroySamplerCmd {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace renoir
