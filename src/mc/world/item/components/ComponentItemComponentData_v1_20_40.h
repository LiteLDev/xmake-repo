#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/AllowOffHandItemComponent.h"
#include "mc/world/item/components/CanDestroyInCreativeItemComponent.h"
#include "mc/world/item/components/ChargeableItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/CooldownItemComponent.h"
#include "mc/world/item/components/DamageItemComponent.h"
#include "mc/world/item/components/DiggerItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/DisplayNameItemComponent.h"
#include "mc/world/item/components/DurabilityItemComponent.h"
#include "mc/world/item/components/EnchantableItemComponent.h"
#include "mc/world/item/components/EntityPlacerItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/FoodItemComponentData_v1_20_30.h"
#include "mc/world/item/components/FuelItemComponent.h"
#include "mc/world/item/components/GlintItemComponent.h"
#include "mc/world/item/components/HandEquippedItemComponent.h"
#include "mc/world/item/components/HoverTextColorItemComponent.h"
#include "mc/world/item/components/IconItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/InteractButtonItemComponent.h"
#include "mc/world/item/components/LiquidClippedItemComponent.h"
#include "mc/world/item/components/MaxStackSizeItemComponent.h"
#include "mc/world/item/components/PlanterItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/ProjectileItemComponent.h"
#include "mc/world/item/components/RecordItemComponent.h"
#include "mc/world/item/components/RepairableItemComponent.h"
#include "mc/world/item/components/ShooterItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/ShouldDespawnItemComponent.h"
#include "mc/world/item/components/StackedByDataItemComponent.h"
#include "mc/world/item/components/ThrowableItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/UseAnimationItemComponent.h"
#include "mc/world/item/components/UseModifiersItemComponentLegacyFactoryData.h"
#include "mc/world/item/components/WearableItemComponentLegacyFactoryData.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemComponentData_v1_20_40 {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, std::optional<ChargeableItemComponentLegacyFactoryData>>    chargeableItemComponent;
    ::ll::UntypedStorage<8, 72>                                                           cooldownItemComponent;
    ::ll::UntypedStorage<8, 40>                                                           durabilityItemComponent;
    ::ll::TypedStorage<8, 120, std::optional<DiggerItemComponentLegacyFactoryData>>       diggerItemComponent;
    ::ll::UntypedStorage<8, 48>                                                           displayNameItemComponent;
    ::ll::TypedStorage<8, 200, std::optional<EntityPlacerItemComponentLegacyFactoryData>> entityPlacerItemComponent;
    ::ll::TypedStorage<8, 40, std::optional<FoodItemComponentData_v1_20_30>>              foodItemComponent;
    ::ll::UntypedStorage<8, 32>                                                           fuelItemComponent;
    ::ll::TypedStorage<8, 40, std::optional<IconItemComponentLegacyFactoryData>>          iconItemComponent;
    ::ll::TypedStorage<8, 64, std::optional<PlanterItemComponentLegacyFactoryData>>       planterItemComponent;
    ::ll::UntypedStorage<8, 168>                                                          projectileItemComponent;
    ::ll::UntypedStorage<8, 48>                                                           repairableItemComponent;
    ::ll::TypedStorage<8, 48, std::optional<ShooterItemComponentLegacyFactoryData>>       shooterItemComponent;
    ::ll::TypedStorage<8, 40, std::optional<ThrowableItemComponentLegacyFactoryData>>     throwableItemComponent;
    ::ll::TypedStorage<8, 24, std::optional<WearableItemComponentLegacyFactoryData>>      wearableItemComponent;
    ::ll::UntypedStorage<8, 64>                                                           recordItemComponent;
    ::ll::UntypedStorage<8, 32>                                                           maxStackSizeItemComponent;
    ::ll::UntypedStorage<8, 32> canDestroyInCreativeItemComponent;
    ::ll::UntypedStorage<8, 64> hoverTextColorItemComponent;
    ::ll::TypedStorage<8, 24, std::optional<UseModifiersItemComponentLegacyFactoryData>> useModifiersItemComponent;
    ::ll::UntypedStorage<8, 32>                                                          stackedByDataItemComponent;
    ::ll::UntypedStorage<8, 32>                                                          glintItemComponent;
    ::ll::UntypedStorage<8, 32>                                                          handEquippedItemComponent;
    ::ll::UntypedStorage<8, 32>                                                          shouldDespawnItemComponent;
    ::ll::UntypedStorage<8, 32>                                                          damageItemComponent;
    ::ll::UntypedStorage<8, 32>                                                          allowOffHandItemComponent;
    ::ll::UntypedStorage<8, 32>                                                          liquidClippedItemComponent;
    ::ll::UntypedStorage<8, 32>                                                          useAnimationItemComponent;
    ::ll::UntypedStorage<8, 56>                                                          enchantableItemComponent;
    ::ll::TypedStorage<8, 56, std::optional<InteractButtonItemComponent>>                interactButtonItemComponent;
    // NOLINTEND
#else // @header-generator platform
    // ComponentItemComponentData_v1_20_40 inner types define
    using CerealDefaultValueOptOut = void;
#endif // @header-generator platform

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // member functions
#else // @header-generator platform
    // member variables
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ComponentItemComponentData_v1_20_40(::ComponentItemComponentData_v1_20_40 const&);

    MCNAPI ::ComponentItemComponentData_v1_20_40& operator=(::ComponentItemComponentData_v1_20_40&&);

    MCNAPI ::ComponentItemComponentData_v1_20_40& operator=(::ComponentItemComponentData_v1_20_40 const&);

    MCNAPI ~ComponentItemComponentData_v1_20_40();
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::std::optional<::ChargeableItemComponentLegacyFactoryData>>    chargeableItemComponent;
    ::ll::TypedStorage<8, 80, ::std::optional<::CooldownItemComponent>>                       cooldownItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::DurabilityItemComponent>>                     durabilityItemComponent;
    ::ll::TypedStorage<8, 136, ::std::optional<::DiggerItemComponentLegacyFactoryData>>       diggerItemComponent;
    ::ll::TypedStorage<8, 56, ::std::optional<::DisplayNameItemComponent>>                    displayNameItemComponent;
    ::ll::TypedStorage<8, 240, ::std::optional<::EntityPlacerItemComponentLegacyFactoryData>> entityPlacerItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::FoodItemComponentData_v1_20_30>>              foodItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::FuelItemComponent>>                           fuelItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::IconItemComponentLegacyFactoryData>>          iconItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::PlanterItemComponentLegacyFactoryData>>       planterItemComponent;
    ::ll::TypedStorage<8, 208, ::std::optional<::ProjectileItemComponent>>                    projectileItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::RepairableItemComponent>>                     repairableItemComponent;
    ::ll::TypedStorage<8, 48, ::std::optional<::ShooterItemComponentLegacyFactoryData>>       shooterItemComponent;
    ::ll::TypedStorage<8, 40, ::std::optional<::ThrowableItemComponentLegacyFactoryData>>     throwableItemComponent;
    ::ll::TypedStorage<8, 24, ::std::optional<::WearableItemComponentLegacyFactoryData>>      wearableItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::RecordItemComponent>>                         recordItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::MaxStackSizeItemComponent>>                   maxStackSizeItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::CanDestroyInCreativeItemComponent>> canDestroyInCreativeItemComponent;
    ::ll::TypedStorage<8, 72, ::std::optional<::HoverTextColorItemComponent>>       hoverTextColorItemComponent;
    ::ll::TypedStorage<8, 24, ::std::optional<::UseModifiersItemComponentLegacyFactoryData>> useModifiersItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::StackedByDataItemComponent>>                 stackedByDataItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::GlintItemComponent>>                         glintItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::HandEquippedItemComponent>>                  handEquippedItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::ShouldDespawnItemComponent>>                 shouldDespawnItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::DamageItemComponent>>                        damageItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::AllowOffHandItemComponent>>                  allowOffHandItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::LiquidClippedItemComponent>>                 liquidClippedItemComponent;
    ::ll::TypedStorage<8, 32, ::std::optional<::UseAnimationItemComponent>>                  useAnimationItemComponent;
    ::ll::TypedStorage<8, 64, ::std::optional<::EnchantableItemComponent>>                   enchantableItemComponent;
    ::ll::TypedStorage<8, 64, ::std::optional<::InteractButtonItemComponent>> interactButtonItemComponent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ComponentItemComponentData_v1_20_40 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};
