#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

class RemovedInMajorVersion {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<2, 2, ushort> majorUpperLimit;
#else // @header-generator platform
    ::ll::UntypedStorage<2, 2> mUnk1cbd3e;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    RemovedInMajorVersion& operator=(RemovedInMajorVersion const&);
    RemovedInMajorVersion(RemovedInMajorVersion const&);
#endif // @header-generator platform
    RemovedInMajorVersion();
};

} // namespace Scripting
