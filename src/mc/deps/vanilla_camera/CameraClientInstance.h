#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_camera/ICameraClientInstance.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class LocalPlayer;
class StrictEntityContext;
class Vec2;
// clang-format on

class CameraClientInstance : public ::ICameraClientInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraClientInstance& operator=(CameraClientInstance const&);
    CameraClientInstance(CameraClientInstance const&);
    CameraClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CameraClientInstance();

    virtual float getFrameAlpha();

    virtual ::Actor* getCameraActor();

    virtual std::optional<StrictEntityContext> getCameraEntity();

    virtual std::optional<bool> isUnderLiquid();

    virtual ::LocalPlayer* getLocalPlayer();

    virtual ::Vec2 getLookDelta();

    virtual float getSecondsSinceProgramStart();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI float $getFrameAlpha();

    MCNAPI ::Actor* $getCameraActor();

    MCNAPI std::optional<StrictEntityContext> $getCameraEntity();

    MCNAPI std::optional<bool> $isUnderLiquid();

    MCNAPI ::LocalPlayer* $getLocalPlayer();

    MCNAPI ::Vec2 $getLookDelta();

    MCNAPI float $getSecondsSinceProgramStart();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/minecraft_camera/ICameraClientInstance.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class LocalPlayer;
class StrictEntityContext;
class Vec2;
// clang-format on

class CameraClientInstance : public ::ICameraClientInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraClientInstance& operator=(CameraClientInstance const&);
    CameraClientInstance(CameraClientInstance const&);
    CameraClientInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Actor* getCameraActor() /*override*/;

    virtual ::std::optional<::StrictEntityContext> getCameraEntity() /*override*/;

    virtual ::std::optional<bool> isUnderLiquid() /*override*/;

    virtual float getFrameAlpha() /*override*/;

    virtual ::LocalPlayer* getLocalPlayer() /*override*/;

    virtual ::Vec2 getLookDelta() /*override*/;

    virtual float getSecondsSinceProgramStart() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Actor* $getCameraActor();

    MCAPI ::std::optional<::StrictEntityContext> $getCameraEntity();

    MCAPI ::std::optional<bool> $isUnderLiquid();

    MCFOLD float $getFrameAlpha();

    MCAPI ::LocalPlayer* $getLocalPlayer();

    MCAPI ::Vec2 $getLookDelta();

    MCFOLD float $getSecondsSinceProgramStart();
    // NOLINTEND
};
#else // @header-generator platform
class CameraClientInstance {};
#endif // @header-generator platform
#endif // @header-generator platform
