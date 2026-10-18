#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"
#include "mc/deps/shared_types/v1_26_30/item/UseModifiersItemComponent.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::Beta {

struct UseModifiersItemComponent : public ::SharedTypes::v1_26_30::UseModifiersItemComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::Versionless::SoundEventName>> mStartSound;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Versionless::SoundEventName>> mStartSound;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UseModifiersItemComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Beta
