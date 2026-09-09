#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class IAddActorEntityProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAddActorEntityProxy();

    virtual void initializeActor(::Actor&) = 0;

    virtual void reloadActor(::Actor&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
