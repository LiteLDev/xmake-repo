#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
class Vec3;
// clang-format on

struct ClipParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Vec3 const&> mA;
    ::ll::TypedStorage<8, 8, ::Vec3 const&> mB;
    ::ll::TypedStorage<8, 8, ::Actor*>      mActor;
    ::ll::TypedStorage<1, 1, bool>          mLiquid;
    ::ll::TypedStorage<1, 1, bool>          mFullOnly;
    ::ll::TypedStorage<1, 1, bool>          mStopOnFirstLiquidHit;
    ::ll::TypedStorage<1, 1, bool>          mIgnoreBorderBlocks;
    ::ll::TypedStorage<1, 1, ::ShapeType>   mShapeType;
    ::ll::UntypedStorage<4, 16>             mMaxDistance;
    ::ll::UntypedStorage<8, 48>             mShouldCheckBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipParameters& operator=(ClipParameters const&);
    ClipParameters(ClipParameters const&);
    ClipParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ClipParameters(::Vec3 const&, ::Vec3 const&);

    MCNAPI
    ClipParameters(::Vec3 const&, ::Vec3 const&, std::function<bool(const BlockSource&, const Block&, bool)> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3 const&, ::Vec3 const&);

    MCNAPI void*
    $ctor(::Vec3 const&, ::Vec3 const&, std::function<bool(const BlockSource&, const Block&, bool)> const&);
    // NOLINTEND
};
