#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EditorNetworkPacketVariantPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRawVariantName;
    ::ll::TypedStorage<8, 24, std::string> mRawVariantData;
    ::ll::TypedStorage<1, 1, bool>         mRouteToManager;
    // NOLINTEND
};
