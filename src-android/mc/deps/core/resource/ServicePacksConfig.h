#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ServicePack.h"

struct ServicePacksConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ServicePack>> mServicePacks;
    // NOLINTEND

public:
    // prevent constructor by default
    ServicePacksConfig& operator=(ServicePacksConfig const&);
    ServicePacksConfig();
};
