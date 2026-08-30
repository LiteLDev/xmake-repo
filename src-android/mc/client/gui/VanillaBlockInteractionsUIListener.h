#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/PlayerEventListener.h"

// auto generated forward declare list
// clang-format off
class SceneFactory;
struct PlayerOpenContainerEvent;
// clang-format on

class VanillaBlockInteractionsUIListener : public ::EventListenerDispatcher<PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mContainerScreenNames;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockInteractionsUIListener();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaBlockInteractionsUIListener();

    virtual ::EventResult onEvent(::PlayerOpenContainerEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit VanillaBlockInteractionsUIListener(::SceneFactory&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SceneFactory&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::PlayerOpenContainerEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
