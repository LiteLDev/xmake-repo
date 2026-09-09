#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Pos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
template<typename T0> class buffer_span_mut;
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
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Pos> pos;
        ::ll::TypedStorage<4, 12, ::Pos> dims;
        ::ll::UntypedStorage<8, 8>       blockIter;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator!=(::BlockVolume::BlockVolumeIter const&) const;

        MCNAPI std::pair<const Block*, Pos> const operator*();

        MCNAPI ::BlockVolume::BlockVolumeIter& operator++();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>              mBlocks;
    ::ll::TypedStorage<4, 4, uint>           mWidth;
    ::ll::TypedStorage<4, 4, uint>           mHeight;
    ::ll::TypedStorage<4, 4, uint>           mDepth;
    ::ll::TypedStorage<4, 4, int>            mDimensionBottom;
    ::ll::TypedStorage<8, 8, ::Block const*> mInitBlock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockVolume::BlockVolumeIter begin() const;

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
    // NOLINTEND
};
