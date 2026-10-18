#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class LocalPlayer;
class StrictEntityContext;
class Vec2;
// clang-format on

class ICameraClientInstance {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICameraClientInstance();

    virtual float getFrameAlpha() = 0;

    virtual ::Actor* getCameraActor() = 0;

    virtual std::optional<StrictEntityContext> getCameraEntity() = 0;

    virtual std::optional<bool> isUnderLiquid() = 0;

    virtual ::LocalPlayer* getLocalPlayer() = 0;

    virtual ::Vec2 getLookDelta() = 0;

    virtual float getSecondsSinceProgramStart() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class LocalPlayer;
class StrictEntityContext;
class Vec2;
// clang-format on

class ICameraClientInstance {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICameraClientInstance() = default;

    virtual float getFrameAlpha() = 0;

    virtual ::Actor* getCameraActor() = 0;

    virtual ::std::optional<::StrictEntityContext> getCameraEntity() = 0;

    virtual ::std::optional<bool> isUnderLiquid() = 0;

    virtual ::LocalPlayer* getLocalPlayer() = 0;

    virtual ::Vec2 getLookDelta() = 0;

    virtual float getSecondsSinceProgramStart() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class ICameraClientInstance {};
#endif // @header-generator platform
#endif // @header-generator platform
