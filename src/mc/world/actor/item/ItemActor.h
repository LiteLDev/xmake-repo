#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class AABB;
#else // @header-generator platform
#endif // @header-generator platform
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ListTag;
class Packet;
class Player;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct AABBShapeComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class ItemActor : public ::Actor {
#if defined(LL_PLAT_A) // @header-generator platform
public:
#else // @header-generator platform
protected:
#endif // @header-generator platform
    // ItemActor inner types declare
    // clang-format off
    struct ItemRenderAdjustments;
    // clang-format on

    // ItemActor inner types define
    struct ItemRenderAdjustments {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>  mUseAdjustments;
        ::ll::TypedStorage<4, 4, float> mFirstRenderedYaw;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 152, ::ItemStack>                                    mItem;
    ::ll::TypedStorage<4, 4, int>                                              mAge;
    ::ll::TypedStorage<4, 4, int>                                              mPickupDelay;
    ::ll::TypedStorage<4, 4, int>                                              mThrowTime;
    ::ll::TypedStorage<4, 4, float>                                            mBobOffs;
    ::ll::TypedStorage<4, 4, int>                                              mHealth;
    ::ll::TypedStorage<4, 4, int>                                              mLifeTime;
    ::ll::TypedStorage<1, 1, bool>                                             mIsInItemFrame;
    ::ll::TypedStorage<1, 1, bool>                                             mIsFromFishing;
    ::ll::TypedStorage<4, 12, std::optional<ItemActor::ItemRenderAdjustments>> mRenderAdjustments;
#else // @header-generator platform
    ::ll::TypedStorage<8, 152, ::ItemStack>                                        mItem;
    ::ll::TypedStorage<4, 4, int>                                                  mAge;
    ::ll::TypedStorage<4, 4, int>                                                  mPickupDelay;
    ::ll::TypedStorage<4, 4, int>                                                  mThrowTime;
    ::ll::TypedStorage<4, 4, float>                                                mBobOffs;
    ::ll::TypedStorage<4, 4, int>                                                  mHealth;
    ::ll::TypedStorage<4, 4, int>                                                  mLifeTime;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsInItemFrame;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsFromFishing;
    ::ll::TypedStorage<4, 12, ::std::optional<::ItemActor::ItemRenderAdjustments>> mRenderAdjustments;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ItemActor();
#else // @header-generator platform
    LLNDAPI ItemStack&       item();
    LLNDAPI ItemStack const& item() const;
    LLNDAPI int&             age();
    LLNDAPI int const&       age() const;
    LLNDAPI int&             pickupDelay();
    LLNDAPI int const&       pickupDelay() const;
    LLNDAPI int&             throwTime();
    LLNDAPI int const&       throwTime() const;
    LLNDAPI float&           bobOffs();
    LLNDAPI float const&     bobOffs() const;
    LLNDAPI int&             health();
    LLNDAPI int const&       health() const;
    LLNDAPI int&             lifeTime();
    LLNDAPI int const&       lifeTime() const;
    LLNDAPI bool&            isInItemFrame();
    LLNDAPI bool const&      isInItemFrame() const;
    LLNDAPI bool&            isFromFishing();
    LLNDAPI bool const&      isFromFishing() const;
    LLNDAPI static ItemActor* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ItemActor();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual ~ItemActor() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isFireImmune() const;
#else // @header-generator platform
    virtual void playerTouch(::Player& player) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<Packet> tryCreateAddActorPacket();
#else // @header-generator platform
    virtual ::std::unique_ptr<::Packet> tryCreateAddActorPacket() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void playerTouch(::Player&);
#else // @header-generator platform
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    virtual bool canSynchronizeNewEntity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorUniqueID getSourceUniqueID() const;
#else // @header-generator platform
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canSynchronizeNewEntity() const;
#else // @header-generator platform
    virtual bool isFireImmune() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float damage, ::HurtParameters const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemActor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI ItemActor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addComponents();
#else // @header-generator platform
    MCAPI void _addComponents();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _dropItemList(::ListTag*);
#else // @header-generator platform
    MCAPI void _dropItemList(::ListTag* itemList);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _validateItem();
#else // @header-generator platform
    MCAPI void _validateItem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clientInitialize(::BlockSource&, ::Vec3 const&, ::ItemStack const&, int, bool, bool);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void clientInitialize(
        ::BlockSource&     region,
        ::Vec3 const&      pos,
        ::ItemStack const& item,
        int                throwTime,
        bool               isInItemFrame,
        bool               isFromFishing
    );
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ItemActor::ItemRenderAdjustments> const& getRenderAdjustments() const;
#else // @header-generator platform
    MCAPI void postNormalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ItemActor::ItemRenderAdjustments>& getRenderAdjustments();

    MCNAPI void postNormalTick();

    MCNAPI void setSourceEntity(::Actor const*);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::AABB getLiquidAABB(::AABBShapeComponent const&);

    MCNAPI static ::ItemActor* tryGetFromEntity(::EntityContext&, bool const);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& LIFETIME();
#else // @header-generator platform
    MCAPI void setSourceEntity(::Actor const* owner);
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
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isFireImmune() const;
#else // @header-generator platform
    MCAPI void $playerTouch(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<Packet> $tryCreateAddActorPacket();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $playerTouch(::Player&);
#else // @header-generator platform
    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleEntityEvent(::ActorEvent, int);
#else // @header-generator platform
    MCFOLD bool $canSynchronizeNewEntity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;
#else // @header-generator platform
    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canSynchronizeNewEntity() const;
#else // @header-generator platform
    MCAPI bool $isFireImmune() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float damage, ::HurtParameters const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
