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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<GameEventDynamicRegistration>> mListenerRegistration;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameEventDynamicRegistration>> mListenerRegistration;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GameEventListenerComponent& operator=(GameEventListenerComponent const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    GameEventListenerComponent(GameEventListenerComponent const&);
    GameEventListenerComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameEventListenerComponent();
#else // @header-generator platform
    MCAPI bool initialize(::std::unique_ptr<::GameEventDynamicRegistration> registration);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI GameEventListenerComponent(::GameEventListenerComponent&&);
#else // @header-generator platform
    MCAPI ::GameEventListenerComponent& operator=(::GameEventListenerComponent&& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~GameEventListenerComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
