#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/NetworkIdentifier.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"

struct NetworkIdentifierWithSubId {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> id;
    ::ll::TypedStorage<1, 1, ::SubClientId>         subClientId;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkIdentifierWithSubId(NetworkIdentifierWithSubId const&);
    NetworkIdentifierWithSubId();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator<(::NetworkIdentifierWithSubId const&) const;

    MCNAPI bool operator==(::NetworkIdentifierWithSubId const&) const;
#else // @header-generator platform
    ::NetworkIdentifier id;
    ::SubClientId       subClientId;
#endif // @header-generator platform
    // NOLINTEND
};
