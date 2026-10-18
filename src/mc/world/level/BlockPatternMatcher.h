#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/brstd/move_only_function.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct BlockPatternData;
struct BuildMatch;
// clang-format on

class BlockPatternMatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource&>            mRegion;
    ::ll::TypedStorage<8, 8, ::BlockPatternData const&> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPatternMatcher& operator=(BlockPatternMatcher const&);
    BlockPatternMatcher(BlockPatternMatcher const&);
    BlockPatternMatcher();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockPatternMatcher(::BlockSource&, ::BlockPatternData const&);
#else // @header-generator platform
    MCAPI ::BuildMatch match(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BuildMatch match(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::BuildMatch match(::BlockPos const& pos, int subPattern, int rowIndex) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BuildMatch match(::BlockPos const&, int, int) const;
#else // @header-generator platform
    MCAPI ::BuildMatch match(::BlockPos const& pos, int subPattern, int rowIndex, uchar forward, uchar up) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BuildMatch match(::BlockPos const&, int, int, uchar, uchar) const;

    MCNAPI void replaceBlocks(
        char,
        ::BuildMatch const&,
        ::Block const&,
        ::brstd::function_ref<void(const Block&, const BlockPos&)>
#else // @header-generator platform
    MCAPI void replaceBlocks(
        char                                                           subPattern,
        ::BuildMatch const&                                            buildMatch,
        ::Block const&                                                 block,
        ::brstd::function_ref<void(::Block const&, ::BlockPos const&)> preReplaceCallback
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void noopCallback(::Block const&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::BlockPatternData const&);
#else // @header-generator platform
    MCFOLD static void noopCallback(::Block const&, ::BlockPos const&);
#endif // @header-generator platform
    // NOLINTEND
};
