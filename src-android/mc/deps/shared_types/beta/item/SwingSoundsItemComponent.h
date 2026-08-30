#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta {

struct SwingSoundsItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::Versionless::SoundEventName>> mAttackMissSound;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::Versionless::SoundEventName>> mAttackHitSound;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::Versionless::SoundEventName>> mAttackCriticalHitSound;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SwingSoundsItemComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta
