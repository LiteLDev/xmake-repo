#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/item/components/RepairItemEntry.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class CerealSchemaUpgradeSet;
class ExpressionNode;
class HashedString;
class ItemStack;
class ItemStackBase;
class SemVersion;
struct RepairItemResult;
namespace SharedTypes::v1_20_50 { struct RepairableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RepairableItemComponent : public ::NetworkedItemComponent<RepairableItemComponent> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<RepairItemEntry>> mRepairItems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RepairableItemComponent();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RepairableItemComponent();

    MCNAPI int _repairItem(::ItemStackBase&, ::ItemStackBase&, ::ExpressionNode) const;

    MCNAPI ::RepairItemResult handleItemRepair(::ItemStack&, ::ItemStack&, bool) const;

    MCNAPI bool hasSameData(::RepairableItemComponent const&) const;

    MCNAPI bool isValidRepairItem(::ItemStackBase const&) const;
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
