#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/entity/components/MockableOwnedBlockSource.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

class LocalConstBlockSource {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 288, ::MockableOwnedBlockSource> mBlockSource;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 280> mUnk3a4771;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    LocalConstBlockSource& operator=(LocalConstBlockSource const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LocalConstBlockSource(LocalConstBlockSource const&);
    LocalConstBlockSource();
#endif // @header-generator platform
};
