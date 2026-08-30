#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class AABB;
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
struct AABBShapeComponent;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class ItemActor : public ::Actor {
public:
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
    // NOLINTEND

public:
    // prevent constructor by default
    ItemActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemActor();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual bool isFireImmune() const;

    virtual std::unique_ptr<Packet> tryCreateAddActorPacket();

    virtual void playerTouch(::Player&);

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual void handleEntityEvent(::ActorEvent, int);

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual bool canSynchronizeNewEntity() const;

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemActor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _addComponents();

    MCNAPI void _dropItemList(::ListTag*);

    MCNAPI void _validateItem();

    MCNAPI void clientInitialize(::BlockSource&, ::Vec3 const&, ::ItemStack const&, int, bool, bool);

    MCNAPI std::optional<ItemActor::ItemRenderAdjustments> const& getRenderAdjustments() const;

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI bool $isFireImmune() const;

    MCNAPI std::unique_ptr<Packet> $tryCreateAddActorPacket();

    MCNAPI void $playerTouch(::Player&);

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI void $handleEntityEvent(::ActorEvent, int);

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI bool $canSynchronizeNewEntity() const;

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
