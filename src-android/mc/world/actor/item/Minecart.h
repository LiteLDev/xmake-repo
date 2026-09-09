#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/item/MinecartType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorHurtResult;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Vec3;
struct AABBShapeComponent;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class Minecart : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mDisplayBlockSerId;
    ::ll::TypedStorage<1, 1, bool>                         mFlipped;
    ::ll::TypedStorage<4, 4, float>                        mRailRenderRot;
    ::ll::TypedStorage<8, 8, ulong>                        mBaseLoop;
    ::ll::TypedStorage<8, 8, ulong>                        mRidingLoop;
    ::ll::TypedStorage<4, 4, float>                        mSmoothSpeed;
    // NOLINTEND

public:
    // prevent constructor by default
    Minecart();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Minecart();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual float getInterpolatedBodyYaw(float) const;

    virtual float getShadowRadius() const;

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual void kill();

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void destroy(::ActorDamageSource const&, bool);

    virtual ::MinecartType getType() = 0;

    virtual ::Block const* getDefaultDisplayBlock() const;

    virtual int getDefaultDisplayOffset() const;

    virtual void applyNaturalSlowdown(::BlockSource&);

    virtual void _lazyInitDisplayBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Minecart(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void _registerLoopingSounds();

    MCNAPI void dropMinecartWithContentsAndRemove(std::string_view, bool);

    MCNAPI ::Block const* getDisplayBlock() const;

    MCNAPI int getDisplayOffset() const;

    MCNAPI void postNormalTick(::BlockPos const&);

    MCNAPI ::BlockPos preNormalTick();

    MCNAPI void setDisplayBlock(::Block const&);

    MCNAPI void setRailRenderRot(float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float getHeightOffset(::AABBShapeComponent const&);
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

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCNAPI float $getInterpolatedBodyYaw(float) const;

    MCNAPI float $getShadowRadius() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI void $kill();

    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI void $destroy(::ActorDamageSource const&, bool);

    MCNAPI ::Block const* $getDefaultDisplayBlock() const;

    MCNAPI int $getDefaultDisplayOffset() const;

    MCNAPI void $applyNaturalSlowdown(::BlockSource&);

    MCNAPI void $_lazyInitDisplayBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
