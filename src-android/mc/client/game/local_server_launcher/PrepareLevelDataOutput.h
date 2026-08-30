#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class LevelData;
// clang-format on

namespace LocalServerLauncher {

struct PrepareLevelDataOutput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevelData;
    ::ll::UntypedStorage<1, 24> mPathToLevel;
    // NOLINTEND
};

} // namespace LocalServerLauncher
