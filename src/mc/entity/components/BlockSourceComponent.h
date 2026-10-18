#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/StackRefResult.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class BlockSourceComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 16> mBlockSource;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSourceComponent& operator=(BlockSourceComponent const&);
    BlockSourceComponent(BlockSourceComponent const&);
    BlockSourceComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockSourceComponent(::WeakRef<BlockSource>);

    MCNAPI ::StackRefResult<BlockSource> tryGetBlockSource() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakRef<BlockSource>);
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::WeakRef<::BlockSource>> mBlockSource;
#endif // @header-generator platform
    // NOLINTEND
};
