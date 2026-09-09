#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class WeakEntityRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24> mWeakEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit WeakEntityRef(::WeakRef<EntityContext>);

    MCNAPI WeakEntityRef(::WeakEntityRef const&);

    MCNAPI bool operator!=(::WeakEntityRef) const;

    MCNAPI ::WeakEntityRef& operator=(::WeakEntityRef&&);

    MCNAPI bool operator==(::WeakRef<EntityContext>) const;

    MCNAPI bool operator==(::WeakEntityRef) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakRef<EntityContext>);

    MCNAPI void* $ctor(::WeakEntityRef const&);
    // NOLINTEND
};
