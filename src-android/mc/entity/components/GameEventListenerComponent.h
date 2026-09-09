#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameEventDynamicRegistration;
// clang-format on

class GameEventListenerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameEventDynamicRegistration>> mListenerRegistration;
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventListenerComponent& operator=(GameEventListenerComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameEventListenerComponent();

    MCNAPI GameEventListenerComponent(::GameEventListenerComponent&&);

    MCNAPI bool initialize(std::unique_ptr<GameEventDynamicRegistration>);

    MCNAPI ::GameEventListenerComponent& operator=(::GameEventListenerComponent&&);

    MCNAPI ::GameEventDynamicRegistration* tryGetListenerRegistration() const;

    MCNAPI ~GameEventListenerComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::GameEventListenerComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
