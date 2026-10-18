#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
// clang-format on

struct BlockPatternData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPattern;
    ::ll::UntypedStorage<8, 48>                         mLookup;
    ::ll::TypedStorage<4, 4, int>                       mPatternLength;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPatternData& operator=(BlockPatternData const&);
    BlockPatternData(BlockPatternData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~BlockPatternData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mPattern;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            char,
            ::brstd::move_only_function<bool(::BlockSource&, ::BlockPos const&, ::Block const&) const>,
            ::std::less<char>,
            ::std::vector<char>,
            ::std::vector<::brstd::move_only_function<bool(::BlockSource&, ::BlockPos const&, ::Block const&) const>>>>
                                  mLookup;
    ::ll::TypedStorage<4, 4, int> mPatternLength;
#endif // @header-generator platform
    // NOLINTEND
};
