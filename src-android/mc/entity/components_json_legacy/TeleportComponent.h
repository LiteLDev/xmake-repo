#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct TeleportDescription;
// clang-format on

class TeleportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>    mRandomTeleports;
    ::ll::TypedStorage<4, 4, int>     mMinTeleportTime;
    ::ll::TypedStorage<4, 4, int>     mMaxTeleportTime;
    ::ll::TypedStorage<4, 12, ::Vec3> mRandomTeleportCube;
    ::ll::TypedStorage<4, 4, float>   mTargetDistance;
    ::ll::TypedStorage<4, 4, float>   mTargetTeleportChance;
    ::ll::TypedStorage<4, 4, float>   mLightTeleportChance;
    ::ll::TypedStorage<4, 4, float>   mDarkTeleportChance;
    ::ll::TypedStorage<4, 4, int>     mTeleportTime;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TeleportComponent();

    MCNAPI float getDarkTeleportChance();

    MCNAPI float getLightTeleportChance();

    MCNAPI int getMaxTeleportTime();

    MCNAPI int getMinTeleportTime();

    MCNAPI bool getRandomTeleports();

    MCNAPI float getTargetDistance();

    MCNAPI float getTargetTeleportChance();

    MCNAPI int getTeleportTime();

    MCNAPI void initFromDefinition(::Actor&);

    MCNAPI bool randomTeleport(::Actor&);

    MCNAPI void setTeleportTime(int);

    MCNAPI bool teleport(::Actor&, ::Vec3 const&);

    MCNAPI bool teleportTowards(::Actor&, ::Actor const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
