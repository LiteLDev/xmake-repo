#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
// clang-format on

namespace br::worldgen {

struct StructureBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                   mPos;
    ::ll::TypedStorage<8, 8, ::Block const*>                mBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                mExtraBlock;
    ::ll::TypedStorage<8, 16, std::shared_ptr<CompoundTag>> mTag;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::BlockPos>                       mPos;
    ::ll::TypedStorage<8, 8, ::Block const*>                    mBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>                    mExtraBlock;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CompoundTag>> mTag;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructureBlockInfo();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::br::worldgen::StructureBlockInfo clone() const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI ::br::worldgen::StructureBlockInfo clone() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator!=(::br::worldgen::StructureBlockInfo const&) const;

    MCNAPI ~StructureBlockInfo();
#else // @header-generator platform
    MCAPI ~StructureBlockInfo();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::br::worldgen::StructureBlockInfo from(::BlockPos, ::Block const&, ::Block const*);

    MCNAPI static ::br::worldgen::StructureBlockInfo
    from(::BlockPos, ::Block const&, ::Block const*, std::unique_ptr<CompoundTag>&&);
#else // @header-generator platform
    MCAPI static ::br::worldgen::StructureBlockInfo
    from(::BlockPos pos, ::Block const& state, ::Block const* extraBlockState);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace br::worldgen
