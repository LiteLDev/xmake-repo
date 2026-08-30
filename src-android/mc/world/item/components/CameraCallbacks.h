#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
