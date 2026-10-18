#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionIdentifier.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ActorDefinitionIdentifier;
#endif // @header-generator platform
// clang-format on

struct AddRiderComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<ActorDefinitionIdentifier>> mPassengersTypes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionIdentifier>> mPassengersTypes;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    AddRiderComponent& operator=(AddRiderComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AddRiderComponent(::AddRiderComponent&&);

    MCNAPI void reloadComponent(::Actor&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AddRiderComponent&&);
#else // @header-generator platform
    MCAPI void reloadComponent(::Actor& owner);
#endif // @header-generator platform
    // NOLINTEND
};
