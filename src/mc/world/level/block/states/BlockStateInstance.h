#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
// clang-format on

class BlockStateInstance {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                               mVariationCount;
    ::ll::TypedStorage<4, 4, uint>                               mNumBits;
    ::ll::TypedStorage<4, 4, uint>                               mEndBit;
    ::ll::TypedStorage<4, 4, uint>                               mMask;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<const BlockState*>> mState;
    // NOLINTEND
#else // @header-generator platform
    template <typename T>
        requires(std::is_integral_v<T> || std::is_enum_v<T>)
    T get(ushort data) const {
        return static_cast<T>((data >> (mEndBit - mNumBits + 1)) & ((1 << mNumBits) - 1));
    }
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    BlockStateInstance();
#else // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                 mVariationCount;
    ::ll::TypedStorage<4, 4, uint>                                 mNumBits;
    ::ll::TypedStorage<4, 4, uint>                                 mEndBit;
    ::ll::TypedStorage<4, 4, uint>                                 mMask;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BlockState const*>> mState;
    // NOLINTEND
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockStateInstance(uint&, uint, uint, ::BlockState const&);

    MCNAPI ::Block const* _trySet(ushort, uint, std::vector<std::unique_ptr<Block>> const&) const;

    MCNAPI bool isValidData(uint) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint&, uint, uint, ::BlockState const&);
#else // @header-generator platform
    MCAPI ::Block const*
    _trySet(ushort data, uint value, ::std::vector<::std::unique_ptr<::Block>> const& blockPermutations) const;
#endif // @header-generator platform
    // NOLINTEND
};
