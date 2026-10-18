#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/util/BlockChange.h"
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
#else // @header-generator platform
class BlockPos;
#endif // @header-generator platform
class IBlockWorldGenAPI;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BlockChange;
#endif // @header-generator platform
// clang-format on

class WorldChangeTransaction {
public:
    // WorldChangeTransaction inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // WorldChangeTransaction inner types define
    struct Data {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, BlockChange>> changes;
#else // @header-generator platform
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::BlockChange>> changes;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IBlockWorldGenAPI&>                          mTarget;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldChangeTransaction::Data>> mData;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IBlockWorldGenAPI&>                              mTarget;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldChangeTransaction::Data>> mData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    WorldChangeTransaction& operator=(WorldChangeTransaction const&);
    WorldChangeTransaction(WorldChangeTransaction const&);
#endif // @header-generator platform
    WorldChangeTransaction();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit WorldChangeTransaction(::IBlockWorldGenAPI&);
#else // @header-generator platform
    MCAPI explicit WorldChangeTransaction(::IBlockWorldGenAPI& target);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool apply() const;

    MCNAPI ::Block const& getBlock(::BlockPos const&) const;

    MCNAPI void setBlock(::BlockPos const&, ::Block const&, int);

    MCNAPI ~WorldChangeTransaction();
#else // @header-generator platform
    MCAPI ~WorldChangeTransaction();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::IBlockWorldGenAPI&);
#else // @header-generator platform
    MCAPI void* $ctor(::IBlockWorldGenAPI& target);
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
