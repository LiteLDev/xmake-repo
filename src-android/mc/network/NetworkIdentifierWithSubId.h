#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/network/NetworkIdentifier.h"

struct NetworkIdentifierWithSubId {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND
};
