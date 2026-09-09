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
    ::ll::UntypedStorage<8, 32> mInteractText;
    ::ll::UntypedStorage<8, 64> mInteraction;
    ::ll::UntypedStorage<1, 16> mNoCapture;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInteraction();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorInteraction(bool);

    MCNAPI void capture(::brstd::move_only_function<void()>);

    MCNAPI void interact();

    MCNAPI void setInteractText(std::string);

    MCNAPI bool shouldCapture() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool);
    // NOLINTEND
};
