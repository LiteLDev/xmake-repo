#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/PresenceTickableType.h"

// auto generated forward declare list
// clang-format off
class HttpRequestHandler;
class ServiceClient;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Social {

#if defined(LL_PLAT_A) // @header-generator platform
class PresenceTickable {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, int> mState;
    ::ll::TypedStorage<1, 1, bool> mDoTick;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000>>> mTickInterval;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
    ::ll::TypedStorage<4, 4, ::Social::PresenceTickableType> mType;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PresenceTickable(PresenceTickable const&);
    PresenceTickable();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PresenceTickable();

    virtual std::shared_ptr<HttpRequestHandler> getPresenceRequest(::ServiceClient const&, std::string const&) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    PresenceTickable(int, bool, std::chrono::duration<long long, std::ratio<1, 1000>>, ::Social::PresenceTickableType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(int, bool, std::chrono::duration<long long, std::ratio<1, 1000>>, ::Social::PresenceTickableType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class PresenceTickable {};
#endif // @header-generator platform

} // namespace Social
