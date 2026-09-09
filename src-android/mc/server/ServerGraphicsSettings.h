#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerGraphicsSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mDisableClientVibrantVisuals;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool getDisableClientVibrantVisuals() const;
    // NOLINTEND
};
