#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace LocalServerLauncher {

#if defined(LL_PLAT_A) // @header-generator platform
struct PrepareLevelDataOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevelData;
    ::ll::UntypedStorage<1, 24> mPathToLevel;
    // NOLINTEND
};
#else // @header-generator platform
struct PrepareLevelDataOutput {};
#endif // @header-generator platform

} // namespace LocalServerLauncher
