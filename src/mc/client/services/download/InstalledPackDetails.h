#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/resources/PackAccessStrategyType.h"

struct InstalledPackDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                        mPackIdVersion;
    ::ll::TypedStorage<4, 4, ::PackAccessStrategyType> mAccessStrategyType;
    // NOLINTEND

public:
    // prevent constructor by default
    InstalledPackDetails& operator=(InstalledPackDetails const&);
    InstalledPackDetails();
};
#else // @header-generator platform
struct InstalledPackDetails {};
#endif // @header-generator platform
