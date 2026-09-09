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
        // prevent constructor by default
        FromCenter();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::BlockPosIterator::FromCenter begin() const;

        MCNAPI ::BlockPosIterator::FromCenter end() const;

        MCNAPI bool operator!=(::BlockPosIterator::FromCenter const&) const;

        MCNAPI ::BlockPos const& operator*();

        MCNAPI ::BlockPosIterator::FromCenter& operator++();
        // NOLINTEND
    };

    class ManhattanDistance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 56, ::BlockPosIterator::FromCenter> mFromCenter;
        // NOLINTEND

    public:
        // prevent constructor by default
        ManhattanDistance();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::BlockPosIterator::ManhattanDistance begin() const;

        MCNAPI ::BlockPosIterator::ManhattanDistance end() const;

        MCNAPI bool operator!=(::BlockPosIterator::ManhattanDistance const&) const;

        MCNAPI ::BlockPos const& operator*();

        MCNAPI ::BlockPosIterator::ManhattanDistance& operator++();
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
};
