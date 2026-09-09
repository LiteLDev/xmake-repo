#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum ComponentReceiveActionType : ushort {
    ConsumeEvent               = 0,
    FurtherPassEventToControls = 1,
};
