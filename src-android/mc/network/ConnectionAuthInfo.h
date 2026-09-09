#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/certificates/identity/RawGameServerToken.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
// clang-format on

struct ConnectionAuthInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PrivateKeyManager const&> userSigner;
    ::ll::UntypedStorage<4, 4>                           authenticationType;
    ::ll::UntypedStorage<8, 24>                          gameServerToken;
    // NOLINTEND

public:
    // prevent constructor by default
    ConnectionAuthInfo& operator=(ConnectionAuthInfo const&);
    ConnectionAuthInfo(ConnectionAuthInfo const&);
    ConnectionAuthInfo();
};
