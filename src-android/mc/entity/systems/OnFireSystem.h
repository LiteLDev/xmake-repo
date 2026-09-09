#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class OnFireSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _setOnFireImpl(::Actor&, int, bool, int);

    MCNAPI static void extinguishFire(::Actor&);

    MCNAPI static void onFireChanged(::Actor&);

    MCNAPI static void setOnFire(::Actor&, int);

    MCNAPI static void setOnFireNoEffects(::Actor&, int);

    MCNAPI static void stopFire(::Actor&);
    // NOLINTEND
};
