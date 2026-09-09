#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"
#include "mc/deps/shared_types/v1_26_30/item/UseModifiersItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct UseModifiersItemComponent : public ::SharedTypes::v1_26_30::UseModifiersItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::Versionless::SoundEventName>> mStartSound;
    // NOLINTEND
};

} // namespace SharedTypes::Beta
