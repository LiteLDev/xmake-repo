#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class BlockChangeContext;
class BlockPos;
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class ILevelBlockDestroyerProxy;
class LevelEventManager;
// clang-format on

class LevelBlockDestroyer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 24> mLevelEventManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<ILevelBlockDestroyerProxy>> const> mLevelBlockDestroyerProxy;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventManager> const> mLevelEventManager;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::ILevelBlockDestroyerProxy>> const>
        mLevelBlockDestroyerProxy;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    LevelBlockDestroyer();
#else // @header-generator platform
#endif // @header-generator platform
};
