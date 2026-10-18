#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::EnumSet<::AttachableSlotIndex, 7>>> mAttachablesEquippedState;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack const*>>                           mAttachedItems;
    // NOLINTEND
};
#else // @header-generator platform
struct ActorAttachableDerivitiveData {};
#endif // @header-generator platform
#endif // @header-generator platform
