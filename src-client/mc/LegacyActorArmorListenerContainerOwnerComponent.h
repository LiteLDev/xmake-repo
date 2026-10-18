#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/LegacyActorArmorChangedListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct LegacyActorArmorListenerContainerOwnerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::LegacyActorArmorChangedListener> mListener;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyActorArmorListenerContainerOwnerComponent& operator=(LegacyActorArmorListenerContainerOwnerComponent const&);
    LegacyActorArmorListenerContainerOwnerComponent();
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
