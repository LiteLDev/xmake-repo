#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
// clang-format on

class JigsawStructureBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                  mPos;
    ::ll::TypedStorage<8, 8, ::Block const&>               mBlock;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mTag;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                      mPos;
    ::ll::TypedStorage<8, 8, ::Block const&>                   mBlock;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mTag;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureBlockInfo& operator=(JigsawStructureBlockInfo const&);
    JigsawStructureBlockInfo(JigsawStructureBlockInfo const&);
    JigsawStructureBlockInfo();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawStructureBlockInfo(::JigsawStructureBlockInfo&&);

    MCNAPI ::CompoundTag* getNonEmptyTag();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JigsawStructureBlockInfo&&);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
