#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Pos.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkPos;
class Vec3;
// clang-format on

struct Bounds {
public:
    // Bounds inner types declare
    // clang-format off
    struct Iterator;
    // clang-format on

    // Bounds inner types define
    enum class Option : int {
        Default = 0,
        Flatten = 1,
    };

    struct Iterator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Pos>          mPos;
        ::ll::TypedStorage<8, 8, ::Bounds const&> mBounds;
        ::ll::TypedStorage<4, 4, int>             mIdx;
        // NOLINTEND

    public:
        // prevent constructor by default
        Iterator& operator=(Iterator const&);
        Iterator(Iterator const&);
        Iterator();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Pos> mMin;
    ::ll::TypedStorage<4, 12, ::Pos> mMax;
    ::ll::TypedStorage<4, 12, ::Pos> mDim;
    ::ll::TypedStorage<4, 4, int>    mArea;
    ::ll::TypedStorage<4, 4, int>    mVolume;
    ::ll::TypedStorage<4, 4, int>    mSide;
    // NOLINTEND

public:
    // prevent constructor by default
    Bounds& operator=(Bounds const&);
};
