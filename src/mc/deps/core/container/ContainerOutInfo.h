#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

#if defined(LL_PLAT_A) // @header-generator platform
struct ContainerOutInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 8, ulong>        mUsedQuota;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerOutInfo& operator=(ContainerOutInfo const&);
    ContainerOutInfo(ContainerOutInfo const&);
    ContainerOutInfo();
};
#else // @header-generator platform
struct ContainerOutInfo {};
#endif // @header-generator platform

} // namespace Core
