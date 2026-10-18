#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

class BlockPosIterator {
public:
    // BlockPosIterator inner types declare
    // clang-format off
    class FromCenter;
    class ManhattanDistance;
    // clang-format on

    // BlockPosIterator inner types define
    class FromCenter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos> mOrigin;
        ::ll::TypedStorage<4, 12, ::BlockPos> mReach;
        ::ll::TypedStorage<4, 4, int>         mMaxDepth;
        ::ll::TypedStorage<4, 12, ::BlockPos> mCurrentPos;
        ::ll::TypedStorage<4, 4, int>         mCurrentDepth;
        ::ll::TypedStorage<4, 4, int>         mMaxX;
        ::ll::TypedStorage<4, 4, int>         mMaxY;
        ::ll::TypedStorage<1, 1, bool>        mZMirror;
        ::ll::TypedStorage<1, 1, bool>        mDone;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        FromCenter();

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::BlockPosIterator::FromCenter begin() const;

        MCNAPI ::BlockPosIterator::FromCenter end() const;

        MCNAPI bool operator!=(::BlockPosIterator::FromCenter const&) const;

        MCNAPI ::BlockPos const& operator*();

        MCNAPI ::BlockPosIterator::FromCenter& operator++();
#else // @header-generator platform
        MCAPI ::BlockPosIterator::FromCenter& operator++();
#endif // @header-generator platform
        // NOLINTEND
    };

    class ManhattanDistance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 56, ::BlockPosIterator::FromCenter> mFromCenter;
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        ManhattanDistance();

    public:
#else // @header-generator platform
#endif // @header-generator platform
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::BlockPosIterator::ManhattanDistance begin() const;

        MCNAPI ::BlockPosIterator::ManhattanDistance end() const;

        MCNAPI bool operator!=(::BlockPosIterator::ManhattanDistance const&) const;

        MCNAPI ::BlockPos const& operator*();

        MCNAPI ::BlockPosIterator::ManhattanDistance& operator++();
#else // @header-generator platform
        MCAPI ::BlockPosIterator::ManhattanDistance& operator++();
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const> mMinCorner;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mMaxCorner;
    ::ll::TypedStorage<4, 12, ::BlockPos>       mCurrentPos;
    ::ll::TypedStorage<1, 1, bool>              mDone;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockPosIterator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::BlockPosIterator begin() const;

    MCNAPI ::BlockPosIterator end() const;

    MCNAPI bool operator!=(::BlockPosIterator const&) const;

    MCNAPI ::BlockPos const& operator*();

    MCNAPI ::BlockPosIterator& operator++();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
