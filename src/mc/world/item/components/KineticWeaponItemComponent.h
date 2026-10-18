#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/KineticDamageSettings.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class HashedString;
#else // @header-generator platform
#endif // @header-generator platform
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
namespace SharedTypes::v1_21_90 { struct KineticWeaponItemComponent; }
#else // @header-generator platform
#endif // @header-generator platform
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class KineticWeaponItemComponent : public ::NetworkedItemComponent<KineticWeaponItemComponent> {
#else // @header-generator platform
class KineticWeaponItemComponent : public ::NetworkedItemComponent<::KineticWeaponItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 88> mSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    KineticWeaponItemComponent& operator=(KineticWeaponItemComponent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KineticWeaponItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit KineticWeaponItemComponent(::SharedTypes::v1_21_90::KineticWeaponItemComponent const&);

    MCNAPI ::KineticDamageSettings const& getSettings() const;
#else // @header-generator platform
    ::ll::TypedStorage<4, 84, ::KineticDamageSettings> mSettings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::KineticWeaponItemComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
