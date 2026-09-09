#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
// clang-format on

class BlockStateInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                               mVariationCount;
    ::ll::TypedStorage<4, 4, uint>                               mNumBits;
    ::ll::TypedStorage<4, 4, uint>                               mEndBit;
    ::ll::TypedStorage<4, 4, uint>                               mMask;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const BlockState*>> mState;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockStateInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockStateInstance(uint&, uint, uint, ::BlockState const&);

    MCNAPI ::Block const* _trySet(ushort, uint, std::vector<std::unique_ptr<Block>> const&) const;

    MCNAPI bool isValidData(uint) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint&, uint, uint, ::BlockState const&);
    // NOLINTEND
};
