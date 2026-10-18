#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace dragon { class ResolvedTextureResource; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::res {

#if defined(LL_PLAT_A) // @header-generator platform
class CopyTextureTransaction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mSrc;
    // NOLINTEND
};
#else // @header-generator platform
class CopyTextureTransaction {};
#endif // @header-generator platform

} // namespace dragon::res
