#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
class HashedString;
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_10 { struct DamageAbsorptionItemComponent; }
// clang-format on

class DamageAbsorptionItemComponent : public ::ItemComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::ActorDamageCause>> mAbsorbableDamageCauses;
    ::ll::TypedStorage<1, 1, bool>                                                mAbsorbAllDamageCauses;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mAbsorbableDamageCauses;
    ::ll::TypedStorage<1, 1, bool>                                                    mAbsorbAllDamageCauses;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~DamageAbsorptionItemComponent();
    // NOLINTEND
#else // @header-generator platform
    // prevent constructor by default
    DamageAbsorptionItemComponent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI DamageAbsorptionItemComponent();
#else // @header-generator platform
    MCAPI explicit DamageAbsorptionItemComponent(
        ::std::vector<::SharedTypes::Legacy::ActorDamageCause> const& absorbableDamageCauses
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit DamageAbsorptionItemComponent(std::vector<SharedTypes::Legacy::ActorDamageCause> const&);

    MCNAPI explicit DamageAbsorptionItemComponent(::SharedTypes::v1_21_10::DamageAbsorptionItemComponent);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& getIdentifier();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI explicit DamageAbsorptionItemComponent(::SharedTypes::v1_21_10::DamageAbsorptionItemComponent data);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::vector<::SharedTypes::Legacy::ActorDamageCause> const& absorbableDamageCauses);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<SharedTypes::Legacy::ActorDamageCause> const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_10::DamageAbsorptionItemComponent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void* $ctor(::SharedTypes::v1_21_10::DamageAbsorptionItemComponent data);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
