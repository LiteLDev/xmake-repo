#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Poi {

struct StorageInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDimension;
    ::ll::TypedStorage<8, 24, std::string> mKey;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk94a4be;
    ::ll::UntypedStorage<8, 32> mUnkd1eaf2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    StorageInfo& operator=(StorageInfo const&);
    StorageInfo(StorageInfo const&);
    StorageInfo();
#endif // @header-generator platform
};

} // namespace Poi
