#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/versionless/SoundEventName.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::Beta {

struct SwingSoundsItemComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::Versionless::SoundEventName>> mAttackMissSound;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::Versionless::SoundEventName>> mAttackHitSound;
    ::ll::TypedStorage<8, 32, std::optional<SharedTypes::Versionless::SoundEventName>> mAttackCriticalHitSound;
#else // @header-generator platform
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Versionless::SoundEventName>> mAttackMissSound;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Versionless::SoundEventName>> mAttackHitSound;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Versionless::SoundEventName>> mAttackCriticalHitSound;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~SwingSoundsItemComponent();
#else // @header-generator platform
    MCAPI ~SwingSoundsItemComponent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string_view const& NAME();
#else // @header-generator platform
    MCAPI static ::std::string_view const& NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Beta
