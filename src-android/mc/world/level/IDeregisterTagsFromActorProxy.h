#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IDeregisterTagsFromActorProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDeregisterTagsFromActorProxy();

    virtual void deregisterTagsFromActor(::Actor&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
