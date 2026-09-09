#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class BlockType;
struct BlockComponentFinalizerForRendererContext;
struct ClientBlockTypeComponentStorage;
// clang-format on

namespace ClientBlockTypeComponentStorageFinalizer {

struct FinalizeBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockType&>                                 mBlockType;
    ::ll::TypedStorage<8, 8, ::BlockComponentFinalizerForRendererContext&> mFinalizerContext;
    ::ll::TypedStorage<8, 8, ::ClientBlockTypeComponentStorage&>           mClientStorage;
    ::ll::TypedStorage<8, 8, ::BlockComponentStorage&>                     mBlockComponentStorage;
    ::ll::UntypedStorage<8, 16>                                            mGetTintMethod;
    // NOLINTEND

public:
    // prevent constructor by default
    FinalizeBlock& operator=(FinalizeBlock const&);
    FinalizeBlock(FinalizeBlock const&);
    FinalizeBlock();
};

} // namespace ClientBlockTypeComponentStorageFinalizer
