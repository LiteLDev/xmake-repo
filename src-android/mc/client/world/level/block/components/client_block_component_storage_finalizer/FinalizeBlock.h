#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockComponentStorage;
struct BlockComponentFinalizerForRendererContext;
struct ClientBlockComponentStorage;
struct ClientBlockData;
// clang-format on

namespace ClientBlockComponentStorageFinalizer {

struct FinalizeBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block&>                                     mBlock;
    ::ll::TypedStorage<8, 8, ::BlockComponentStorage&>                     mBlockComponentStorage;
    ::ll::TypedStorage<8, 8, ::ClientBlockData&>                           mClientBlock;
    ::ll::TypedStorage<8, 8, ::BlockComponentFinalizerForRendererContext&> mFinalizerContext;
    ::ll::TypedStorage<8, 8, ::ClientBlockComponentStorage&>               mClientStorage;
    ::ll::UntypedStorage<8, 16>                                            mSetPermutationsBlockGraphicsAsUnknownBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    FinalizeBlock& operator=(FinalizeBlock const&);
    FinalizeBlock(FinalizeBlock const&);
    FinalizeBlock();
};

} // namespace ClientBlockComponentStorageFinalizer
