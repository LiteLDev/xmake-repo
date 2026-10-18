#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockPos;
class BlockSource;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace BlockSourceVisitor {

struct VisitArgs {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Block const*>       mMaybeBlock;
    ::ll::TypedStorage<8, 8, ::AABB const&>        mBounds;
    ::ll::TypedStorage<8, 8, ::BlockPos const&>    mBlockPos;
    ::ll::TypedStorage<8, 8, ::BlockSource const*> mBlockSource;
    ::ll::TypedStorage<1, 1, bool const>           mIsUnloadedChunk;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk69567f;
    ::ll::UntypedStorage<8, 8> mUnkc7768d;
    ::ll::UntypedStorage<8, 8> mUnk6ab01e;
    ::ll::UntypedStorage<8, 8> mUnkde3f12;
    ::ll::UntypedStorage<1, 1> mUnkf9bf25;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VisitArgs& operator=(VisitArgs const&);
    VisitArgs(VisitArgs const&);
    VisitArgs();
};

} // namespace BlockSourceVisitor
