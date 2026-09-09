#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BlockChangeContext;
class BlockPos;
class BlockSource;
class ILevelBlockDestroyerProxy;
class LevelEventManager;
// clang-format on

class LevelBlockDestroyer {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mLevelEventManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ILevelBlockDestroyerProxy>> const> mLevelBlockDestroyerProxy;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LevelBlockDestroyer();
};
