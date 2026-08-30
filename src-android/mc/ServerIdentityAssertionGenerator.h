#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/certificates/PrivateKeyManager.h"
#include "mc/deps/nether_net/IIdentityAssertionGenerator.h"

class ServerIdentityAssertionGenerator : public ::NetherNet::IIdentityAssertionGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::PrivateKeyManager> mSigningKey;
    // NOLINTEND
};
