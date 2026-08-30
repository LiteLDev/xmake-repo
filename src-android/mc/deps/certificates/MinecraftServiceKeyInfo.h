#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/WebKey.h"

struct MinecraftServiceKeyInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, WebKey>> TrustedKeys;
    ::ll::TypedStorage<8, 24, std::string>                             Issuer;
    ::ll::TypedStorage<8, 8, long>                                     RoughTimeCorrectionSeconds;
    ::ll::TypedStorage<1, 1, bool>                                     NewlyFetched;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftServiceKeyInfo& operator=(MinecraftServiceKeyInfo const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftServiceKeyInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
