#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/RawGameServerToken.h"
#include "mc/deps/certificates/PrivateKeyManager.h"
#include "mc/deps/nether_net/IIdentityAssertionGenerator.h"

class ClientIdentityAssertionGenerator : public ::NetherNet::IIdentityAssertionGenerator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::PrivateKeyManager> mSigningKey;
    ::ll::UntypedStorage<8, 24>                    mToken;
    ::ll::TypedStorage<8, 24, std::string>         mIdpDomain;
    // NOLINTEND
};
