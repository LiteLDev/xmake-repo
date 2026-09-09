#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/world/inventory/FillingContainer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ChestBlockActor;
// clang-format on

class EnderChestContainer : public ::FillingContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ChestBlockActor*> mActiveChest;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnderChestContainer();

    virtual ::Bedrock::PubSub::Connector<void()>* getContainerRemovedConnector();

    virtual bool hasRemovedSubscribers() const;

    virtual void startOpen(::Actor&);

    virtual void stopOpen(::Actor&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnderChestContainer();

    MCNAPI void setActiveChest(::ChestBlockActor*);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& ITEMS_SIZE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void()>* $getContainerRemovedConnector();

    MCNAPI bool $hasRemovedSubscribers() const;

    MCNAPI void $startOpen(::Actor&);

    MCNAPI void $stopOpen(::Actor&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
