#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/platform/brstd/move_only_function.h"

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
    MCNAPI BlockPatternMatcher(::BlockSource&, ::BlockPatternData const&);

    MCNAPI ::BuildMatch match(::BlockPos const&) const;

    MCNAPI ::BuildMatch match(::BlockPos const&, int, int) const;

    MCNAPI ::BuildMatch match(::BlockPos const&, int, int, uchar, uchar) const;

    MCNAPI void replaceBlocks(
        char,
        ::BuildMatch const&,
        ::Block const&,
        ::brstd::function_ref<void(const Block&, const BlockPos&)>
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void noopCallback(::Block const&, ::BlockPos const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::BlockPatternData const&);
    // NOLINTEND
};
