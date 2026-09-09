#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

struct ActorAttachableDerivitiveData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                              mAttachablesEquippedState;
    ::ll::TypedStorage<8, 24, std::vector<const ItemStack*>> mAttachedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorAttachableDerivitiveData& operator=(ActorAttachableDerivitiveData const&);
    ActorAttachableDerivitiveData(ActorAttachableDerivitiveData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorAttachableDerivitiveData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
