#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/IAddDisplayActorEntityProxy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Dimension;
// clang-format on

class AddDisplayActorEntityProxy : public ::IAddDisplayActorEntityProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Dimension&> mDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    AddDisplayActorEntityProxy& operator=(AddDisplayActorEntityProxy const&);
    AddDisplayActorEntityProxy(AddDisplayActorEntityProxy const&);
    AddDisplayActorEntityProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AddDisplayActorEntityProxy();

    virtual void initializeActor(::Actor&) const;

    virtual void registerDisplayEntityToDimension(::Actor const&) const;
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

    MCNAPI void $registerDisplayEntityToDimension(::Actor const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
