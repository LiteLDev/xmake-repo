#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/sound/SoundEventIdentifier.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
namespace SharedTypes::Beta { struct SwingSoundsItemComponent; }
namespace SharedTypes::v1_21_90 { struct SwingSoundsItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class SwingSoundsItemComponent : public ::NetworkedItemComponent<SwingSoundsItemComponent> {
#else // @header-generator platform
class SwingSoundsItemComponent : public ::NetworkedItemComponent<::SwingSoundsItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::optional<SoundEventIdentifier>> mAttackMissSound;
    ::ll::TypedStorage<8, 40, std::optional<SoundEventIdentifier>> mAttackHitSound;
    ::ll::TypedStorage<8, 40, std::optional<SoundEventIdentifier>> mAttackCriticalHitSound;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::std::optional<::SoundEventIdentifier>> mAttackMissSound;
    ::ll::TypedStorage<8, 48, ::std::optional<::SoundEventIdentifier>> mAttackHitSound;
    ::ll::TypedStorage<8, 48, ::std::optional<::SoundEventIdentifier>> mAttackCriticalHitSound;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~SwingSoundsItemComponent();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    SwingSoundsItemComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SwingSoundsItemComponent(::SharedTypes::v1_21_90::SwingSoundsItemComponent const&);
#else // @header-generator platform
    MCAPI explicit SwingSoundsItemComponent(::SharedTypes::Beta::SwingSoundsItemComponent const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SwingSoundsItemComponent(::SharedTypes::Beta::SwingSoundsItemComponent const&);

    MCNAPI std::optional<SoundEventIdentifier> getAttackCriticalHitSound() const;

    MCNAPI std::optional<SoundEventIdentifier> getAttackHitSound() const;

    MCNAPI std::optional<SoundEventIdentifier> getAttackMissSound() const;
#else // @header-generator platform
    MCAPI explicit SwingSoundsItemComponent(::SharedTypes::v1_21_90::SwingSoundsItemComponent const& data);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::SwingSoundsItemComponent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::Beta::SwingSoundsItemComponent const& data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::Beta::SwingSoundsItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_90::SwingSoundsItemComponent const& data);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
