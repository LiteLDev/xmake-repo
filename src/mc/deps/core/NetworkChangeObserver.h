#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

class NetworkChangeObserver : public ::Core::Observer<NetworkChangeObserver, std::mutex> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkChangeObserver() = default;

    virtual void onNetworkConfigurationChanged() = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class NetworkChangeObserver : public ::Core::Observer<::NetworkChangeObserver, ::Bedrock::Threading::Mutex> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkChangeObserver() /*override*/ = default;

    virtual void onNetworkConfigurationChanged() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class NetworkChangeObserver {};
#endif // @header-generator platform
#endif // @header-generator platform
