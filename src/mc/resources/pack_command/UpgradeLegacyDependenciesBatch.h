#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/resources/pack_command/UpgradeLegacyDependenciesCommand.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace PackCommand {

struct UpgradeLegacyDependenciesBatch {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<::PackCommand::UpgradeLegacyDependenciesCommand>> mCommands;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkb32d9a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    UpgradeLegacyDependenciesBatch& operator=(UpgradeLegacyDependenciesBatch const&);
    UpgradeLegacyDependenciesBatch(UpgradeLegacyDependenciesBatch const&);
    UpgradeLegacyDependenciesBatch();
#endif // @header-generator platform
};

} // namespace PackCommand
