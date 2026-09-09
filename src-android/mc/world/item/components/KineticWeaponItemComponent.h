#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/KineticDamageSettings.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class SemVersion;
namespace SharedTypes::v1_21_90 { struct KineticWeaponItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class KineticWeaponItemComponent : public ::NetworkedItemComponent<KineticWeaponItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
