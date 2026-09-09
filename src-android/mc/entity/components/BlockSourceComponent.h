#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

class BlockSourceComponent {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
