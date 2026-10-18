#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/AbstractArrow.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class ThrownTrident : public ::AbstractArrow {
public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // ThrownTrident inner types define
    enum class Data : int {
        OwnerID = 17,
    };

public:
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>          mDealtDamage;
    ::ll::TypedStorage<4, 4, int>           mClientSideReturnTridentTickCount;
    ::ll::TypedStorage<8, 152, ::ItemStack> mTrident;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrownTrident();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void outOfWorld();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ThrownTrident();
#else // @header-generator platform
    virtual void shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void playerTouch(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerTouch(::Player&);
#else // @header-generator platform
    virtual void despawn() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isEnchanted() const;
#else // @header-generator platform
    virtual void outOfWorld() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void despawn();
#else // @header-generator platform
    virtual bool isEnchanted() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void shoot(::Vec3 const&, float, float, ::Vec3 const&);

    virtual ::ItemStack _getPickupItem() const;
#else // @header-generator platform
    virtual ::ItemStack _getPickupItem() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ThrownTrident(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI ThrownTrident(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void doNormalTick();
#else // @header-generator platform
    MCAPI void doNormalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getClientSideReturnTridentTickCount() const;

    MCNAPI ::ItemStack getPickupItem() const;

    MCNAPI void returnWithLoyalty(int);

    MCNAPI void setTridentItem(::ItemStack const&);
#else // @header-generator platform
    MCAPI void returnWithLoyalty(int enchantLevel);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $outOfWorld();
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playerTouch(::Player&);
#else // @header-generator platform
    MCAPI void $playerTouch(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isEnchanted() const;
#else // @header-generator platform
    MCAPI void $despawn();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $despawn();
#else // @header-generator platform
    MCAPI void $outOfWorld();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI bool $isEnchanted() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $shoot(::Vec3 const&, float, float, ::Vec3 const&);
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack $_getPickupItem() const;
#else // @header-generator platform
    MCAPI ::ItemStack $_getPickupItem() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};
