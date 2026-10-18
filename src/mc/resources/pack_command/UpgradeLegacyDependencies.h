#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/resource/PackIdVersion.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct UpgradeLegacyDependencies {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<PackIdVersion>> mNewDependencies;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk102dc9;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UpgradeLegacyDependencies& operator=(UpgradeLegacyDependencies const&);
    UpgradeLegacyDependencies(UpgradeLegacyDependencies const&);
    UpgradeLegacyDependencies();
#endif // @header-generator platform
};

} // namespace PackCommand
