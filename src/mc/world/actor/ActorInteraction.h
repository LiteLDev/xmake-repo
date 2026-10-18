#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

class ActorInteraction {
public:
    // ActorInteraction inner types define
    using OnInteraction = ::brstd::move_only_function<void()>;

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mInteractText;
    ::ll::UntypedStorage<8, 64> mInteraction;
    ::ll::UntypedStorage<1, 16> mNoCapture;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                       mInteractText;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void()>> mInteraction;
    ::ll::TypedStorage<1, 1, bool>                                 mNoCapture;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ActorInteraction();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorInteraction(bool);
#else // @header-generator platform
    MCAPI void capture(::brstd::move_only_function<void()> interactFunc);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void capture(::brstd::move_only_function<void()>);

    MCNAPI void interact();

    MCNAPI void setInteractText(std::string);

    MCNAPI bool shouldCapture() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
#else // @header-generator platform
    MCFOLD void setInteractText(::std::string text);
#endif // @header-generator platform
    // NOLINTEND
};
