#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IDeregisterTagsFromActorProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class DeregisterTagsFromActorProxy : public ::IDeregisterTagsFromActorProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeregisterTagsFromActorProxy();

    virtual void deregisterTagsFromActor(::Actor&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $deregisterTagsFromActor(::Actor&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
