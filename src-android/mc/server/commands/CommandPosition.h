#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandOrigin;
class CompoundTag;
// clang-format on

class CommandPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mOffset;
    ::ll::TypedStorage<1, 1, bool>    mRelativeX;
    ::ll::TypedStorage<1, 1, bool>    mRelativeY;
    ::ll::TypedStorage<1, 1, bool>    mRelativeZ;
    ::ll::TypedStorage<1, 1, bool>    mLocal;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandPosition();

    MCNAPI explicit CommandPosition(::Vec3 const&);

    MCNAPI ::BlockPos getBlockPos(::Vec3 const&, ::Vec3 const&) const;

    MCNAPI ::BlockPos getBlockPos(int, ::CommandOrigin const&, ::Vec3 const&) const;

    MCNAPI ::Vec3 getPosition(int, ::CommandOrigin const&, ::Vec3 const&) const;

    MCNAPI void load(::CompoundTag const&);

    MCNAPI bool operator==(::CommandPosition const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Vec3 const&);
    // NOLINTEND
};
