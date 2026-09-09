#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/IntRange.h"
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgradeSet;
class HashedString;
class SemVersion;
struct IntRange;
namespace SharedTypes::v1_20_50 { struct DurabilityItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class DurabilityItemComponent : public ::NetworkedItemComponent<DurabilityItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                     mMaxDamage;
    ::ll::TypedStorage<4, 8, ::SharedTypes::IntRange> mDamageChance;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DurabilityItemComponent();

    MCNAPI explicit DurabilityItemComponent(int);

    MCNAPI int getDamageChance(int) const;

    MCNAPI int getDamageChanceMax() const;

    MCNAPI ::IntRange getDamageChanceRange() const;

    MCNAPI int getMaxDamage() const;

    MCNAPI void setMaxDamage(int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);

    MCNAPI static ::HashedString const& getIdentifier();

    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
