#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/level/BlockPatternData.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BlockPatternBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::BlockPatternData> mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPatternBuilder& aisle(std::vector<std::string>);
#else // @header-generator platform
    MCAPI ::BlockPatternBuilder& aisle(::std::vector<::std::string> patterns);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPatternData buildOrAssert();
#else // @header-generator platform
    MCAPI ::BlockPatternData buildOrAssert();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPatternBuilder& define(char, ::HashedString const&);

    MCNAPI ::BlockPatternBuilder&
    define(char, ::brstd::move_only_function<bool(BlockSource&, const BlockPos&, const Block&) const>);

    MCNAPI ~BlockPatternBuilder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::BlockPatternBuilder& define(
        char                                                                                       pattern,
        ::brstd::move_only_function<bool(::BlockSource&, ::BlockPos const&, ::Block const&) const> tester
    );
#endif // @header-generator platform
    // NOLINTEND
};
