#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/deps/core/threading/AsyncPromise.h"

class ServerTrustModalScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mServerAddress;
    ::ll::UntypedStorage<8, 24>            mResultPromise;
    ::ll::UntypedStorage<1, 16>            mHasDisplayedModal;
    // NOLINTEND
};
