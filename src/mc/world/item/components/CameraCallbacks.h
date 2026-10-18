#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

class CameraCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onTakePictureNow(::Player&, ::Actor*, ::Actor*) = 0;

    virtual ~CameraCallbacks() = default;

    virtual void onStartTakingPicture(::Player&) = 0;

    virtual void onEndTakingPicture(::Player&, ::Actor*, ::Actor*) = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

class CameraCallbacks {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onTakePictureNow(::Player& player, ::Actor* camera, ::Actor* target) = 0;

    virtual void onStartTakingPicture(::Player& player) = 0;

    virtual void onEndTakingPicture(::Player& player, ::Actor* camera, ::Actor* target) = 0;

    virtual ~CameraCallbacks() = default;
    // NOLINTEND
};
#else // @header-generator platform
class CameraCallbacks {};
#endif // @header-generator platform
#endif // @header-generator platform
