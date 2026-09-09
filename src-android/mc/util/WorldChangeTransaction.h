#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BlockChange.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class IBlockWorldGenAPI;
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
        ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, BlockChange>> changes;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IBlockWorldGenAPI&>                          mTarget;
    ::ll::TypedStorage<8, 8, std::unique_ptr<WorldChangeTransaction::Data>> mData;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldChangeTransaction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WorldChangeTransaction(::IBlockWorldGenAPI&);

    MCNAPI bool apply() const;

    MCNAPI ::Block const& getBlock(::BlockPos const&) const;

    MCNAPI void setBlock(::BlockPos const&, ::Block const&, int);

    MCNAPI ~WorldChangeTransaction();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IBlockWorldGenAPI&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
