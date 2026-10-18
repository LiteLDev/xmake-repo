#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
struct ActorMaterialVariation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> mName;
    ::ll::UntypedStorage<8, 240>                mFlags;
    // NOLINTEND
};
#else // @header-generator platform
struct ActorMaterialVariation {};
#endif // @header-generator platform

} // namespace mce
