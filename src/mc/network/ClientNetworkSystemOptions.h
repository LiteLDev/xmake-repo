#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct ClientNetworkSystemOptions {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Option*> mNethernetLoggingVerbosity;
    ::ll::TypedStorage<8, 8, ::Option*> mConnectionQuality;
    ::ll::TypedStorage<8, 8, ::Option*> mDevDisableLanSignaling;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk6dbb9b;
    ::ll::UntypedStorage<8, 8> mUnk267adf;
    ::ll::UntypedStorage<8, 8> mUnke5b3d0;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ClientNetworkSystemOptions& operator=(ClientNetworkSystemOptions const&);
    ClientNetworkSystemOptions(ClientNetworkSystemOptions const&);
    ClientNetworkSystemOptions();
#endif // @header-generator platform
};
