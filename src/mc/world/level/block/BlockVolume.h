#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Pos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename T0> class buffer_span_mut;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class BlockVolume {
public:
    // BlockVolume inner types declare
    // clang-format off
    struct BlockVolumeIter;
    // clang-format on

    // BlockVolume inner types define
    struct BlockVolumeIter {
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Pos> pos;
        ::ll::TypedStorage<4, 12, ::Pos> dims;
        ::ll::UntypedStorage<8, 8>       blockIter;
        // NOLINTEND
#else // @header-generator platform
        // BlockVolumeIter inner types define
        using difference_type = int64;

        using iterator_category = ::std::forward_iterator_tag;

        using pointer = ::std::pair<::Block const*, ::Pos> const*;

        using reference = ::std::pair<::Block const*, ::Pos> const&;

        using value_type = ::std::pair<::Block const*, ::Pos> const;
#endif // @header-generator platform

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // member functions
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool operator!=(::BlockVolume::BlockVolumeIter const&) const;

        MCNAPI std::pair<const Block*, Pos> const operator*();

        MCNAPI ::BlockVolume::BlockVolumeIter& operator++();
#else // @header-generator platform
        ::ll::TypedStorage<4, 12, ::Pos>                                      pos;
        ::ll::TypedStorage<4, 12, ::Pos>                                      dims;
        ::ll::TypedStorage<8, 8, ::buffer_span_mut<::Block const*>::iterator> blockIter;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>              mBlocks;
    ::ll::TypedStorage<4, 4, uint>           mWidth;
    ::ll::TypedStorage<4, 4, uint>           mHeight;
    ::ll::TypedStorage<4, 4, uint>           mDepth;
    ::ll::TypedStorage<4, 4, int>            mDimensionBottom;
    ::ll::TypedStorage<8, 8, ::Block const*> mInitBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::buffer_span_mut<::Block const*>> mBlocks;
    ::ll::TypedStorage<4, 4, uint>                               mWidth;
    ::ll::TypedStorage<4, 4, uint>                               mHeight;
    ::ll::TypedStorage<4, 4, uint>                               mDepth;
    ::ll::TypedStorage<4, 4, int>                                mDimensionBottom;
    ::ll::TypedStorage<8, 8, ::Block const*>                     mInitBlock;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockVolume::BlockVolumeIter begin() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::std::vector<short>> computeHeightMap() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<std::vector<short>> computeHeightMap() const;

    MCNAPI ::BlockVolume::BlockVolumeIter end() const;

    MCNAPI short findHighestNonAirBlock() const;

    MCNAPI short getAboveTopSolidBlock(::BlockPos const&, bool, bool, bool) const;

    MCNAPI int getDimensionBottom() const;

    MCNAPI ::Pos getDimensions() const;

    MCNAPI uint getIndexBounds() const;

    MCNAPI uint index(::Pos const&) const;

    MCNAPI uint index(::BlockPos const&) const;

    MCNAPI uint indexNoBoundsCheck(::Pos const&) const;

    MCNAPI uint indexNoBoundsCheck(::BlockPos const&) const;

    MCNAPI bool isInBounds(::Pos const&) const;

    MCNAPI bool isInBounds(::BlockPos const&) const;

    MCNAPI bool isInBounds(uint) const;
#else // @header-generator platform
    MCAPI short
    getAboveTopSolidBlock(::BlockPos const& start, bool dimensionShowsSky, bool includeWater, bool includeLeaves) const;
#endif // @header-generator platform
    // NOLINTEND
};
