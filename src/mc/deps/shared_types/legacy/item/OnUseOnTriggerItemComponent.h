#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::Legacy {

struct OnUseOnTriggerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::DefinitionTrigger> mOnUseOn;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OnUseOnTriggerItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<8, 88, ::SharedTypes::Legacy::DefinitionTrigger> mOnUseOn;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
