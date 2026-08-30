#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"
#include "mc/world/item/components/IItemComponentLegacyFactoryData.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgradeSet;
class HashedString;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct WeaponItemComponent : public ::IItemComponentLegacyFactoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnHurtActor;
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnHitActor;
    ::ll::TypedStorage<8, 48, ::DefinitionTrigger> mOnHitBlock;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WeaponItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WeaponItemComponent(::WeaponItemComponent const&);

    MCNAPI ::WeaponItemComponent& operator=(::WeaponItemComponent&&);
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
    MCNAPI void* $ctor(::WeaponItemComponent const&);
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
