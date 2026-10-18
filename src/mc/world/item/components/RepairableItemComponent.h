#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"
#include "mc/world/item/components/RepairItemEntry.h"
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CerealSchemaUpgradeSet;
#else // @header-generator platform
#endif // @header-generator platform
class ExpressionNode;
class HashedString;
class ItemStack;
class ItemStackBase;
class SemVersion;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct RepairItemEntry;
#endif // @header-generator platform
struct RepairItemResult;
namespace SharedTypes::v1_20_50 { struct RepairableItemComponent; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class RepairableItemComponent : public ::NetworkedItemComponent<RepairableItemComponent> {
#else // @header-generator platform
class RepairableItemComponent : public ::NetworkedItemComponent<::RepairableItemComponent> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<RepairItemEntry>> mRepairItems;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::RepairItemEntry>> mRepairItems;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~RepairableItemComponent();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    RepairableItemComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI RepairableItemComponent();
#else // @header-generator platform
    MCAPI explicit RepairableItemComponent(::SharedTypes::v1_20_50::RepairableItemComponent component);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _repairItem(::ItemStackBase&, ::ItemStackBase&, ::ExpressionNode) const;
#else // @header-generator platform
    MCAPI int _repairItem(
        ::ItemStackBase& materialItem,
        ::ItemStackBase& resultItem,
        ::ExpressionNode repairAmountExpression
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::RepairItemResult handleItemRepair(::ItemStack&, ::ItemStack&, bool) const;
#else // @header-generator platform
    MCAPI ::RepairItemResult
    handleItemRepair(::ItemStack& inputItem, ::ItemStack& materialItem, bool allowBidirectionalRepair) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasSameData(::RepairableItemComponent const&) const;

    MCNAPI bool isValidRepairItem(::ItemStackBase const&) const;
#else // @header-generator platform
    MCAPI bool isValidRepairItem(::ItemStackBase const& repairItem) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    bindType(::cereal::ReflectionCtx&, std::vector<AllExperiments> const&, std::optional<SemVersion>);
#else // @header-generator platform
    MCAPI static void bindType(
        ::cereal::ReflectionCtx&               ctx,
        ::std::vector<::AllExperiments> const& requiredToggles,
        ::std::optional<::SemVersion>          releasedMinFormatVersion
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::HashedString const& getIdentifier();

    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);
#else // @header-generator platform
    MCAPI static ::HashedString const& getIdentifier();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_20_50::RepairableItemComponent component);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
