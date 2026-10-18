#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IGameEventListener;
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class GameEventListenerRegistry : public ::std::enable_shared_from_this<GameEventListenerRegistry> {
#else // @header-generator platform
class GameEventListenerRegistry : public ::std::enable_shared_from_this<::GameEventListenerRegistry> {
#endif // @header-generator platform
public:
    // GameEventListenerRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using ListenerVector = std::vector<std::reference_wrapper<IGameEventListener>>;
#else // @header-generator platform
    using ListenerVector = ::std::vector<::std::reference_wrapper<::IGameEventListener>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using RegistrationToken = ::gsl::final_action<std::function<void()>>;
#else // @header-generator platform
    using RegistrationToken = ::gsl::final_action<::std::function<void()>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::reference_wrapper<IGameEventListener>>> mListeners;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::reference_wrapper<::IGameEventListener>>> mListeners;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::final_action<std::function<void()>> registerListener(::IGameEventListener&);
#else // @header-generator platform
    MCAPI ::gsl::final_action<::std::function<void()>> registerListener(::IGameEventListener& gameEventListener);
#endif // @header-generator platform
    // NOLINTEND
};
