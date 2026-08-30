#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftServiceKeysMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> Endpoint;
    ::ll::TypedStorage<8, 24, std::string> Issuer;
    ::ll::TypedStorage<8, 8, long>         ServiceTime;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceKeysMetadata& operator=(MinecraftServiceKeysMetadata const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftServiceKeysMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
