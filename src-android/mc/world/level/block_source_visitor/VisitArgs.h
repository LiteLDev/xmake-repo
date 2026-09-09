#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
// clang-format on

namespace BlockSourceVisitor {

struct VisitArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>       mMaybeBlock;
    ::ll::TypedStorage<8, 8, ::AABB const&>        mBounds;
    ::ll::TypedStorage<8, 8, ::BlockPos const&>    mBlockPos;
    ::ll::TypedStorage<8, 8, ::BlockSource const*> mBlockSource;
    ::ll::TypedStorage<1, 1, bool const>           mIsUnloadedChunk;
    // NOLINTEND

public:
    // prevent constructor by default
    VisitArgs& operator=(VisitArgs const&);
    VisitArgs(VisitArgs const&);
    VisitArgs();
};

} // namespace BlockSourceVisitor
