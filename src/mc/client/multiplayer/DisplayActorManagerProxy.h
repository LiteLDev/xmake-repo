#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/IDisplayActorManagerProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ClientLevel;
// clang-format on

class DisplayActorManagerProxy : public ::IDisplayActorManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayActorManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DisplayActorManagerProxy();

    virtual void initializeActor(::Actor&) const;

    virtual void unregisterDisplayEntityFromDimension(::Actor const&) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeActor(::Actor&) const;

    MCNAPI void $unregisterDisplayEntityFromDimension(::Actor const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DisplayActorManagerProxy {};
#endif // @header-generator platform
