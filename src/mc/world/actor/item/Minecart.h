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
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
struct AABBShapeComponent;
#else // @header-generator platform
#endif // @header-generator platform
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
struct VariantParameterList;
// clang-format on

class Minecart : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<CompoundTag>> mDisplayBlockSerId;
    ::ll::TypedStorage<1, 1, bool>                         mFlipped;
    ::ll::TypedStorage<4, 4, float>                        mRailRenderRot;
    ::ll::TypedStorage<8, 8, ulong>                        mBaseLoop;
    ::ll::TypedStorage<8, 8, ulong>                        mRidingLoop;
    ::ll::TypedStorage<4, 4, float>                        mSmoothSpeed;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mDisplayBlockSerId;
    ::ll::TypedStorage<1, 1, bool>                             mFlipped;
    ::ll::TypedStorage<4, 4, float>                            mRailRenderRot;
    ::ll::TypedStorage<8, 8, uint64>                           mBaseLoop;
    ::ll::TypedStorage<8, 8, uint64>                           mRidingLoop;
    ::ll::TypedStorage<4, 4, float>                            mSmoothSpeed;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Minecart();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Minecart();
#else // @header-generator platform
    virtual ~Minecart() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getInterpolatedBodyYaw(float) const;

    virtual float getShadowRadius() const;

    virtual bool isInvulnerableTo(::ActorDamageSource const&) const;

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual void kill();

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const&, float, ::HurtParameters const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual void destroy(::ActorDamageSource const&, bool);
#else // @header-generator platform
    virtual void destroy(::ActorDamageSource const& source, bool dropMinecartComponents);
#endif // @header-generator platform

    virtual ::MinecartType getType() = 0;

    virtual ::Block const* getDefaultDisplayBlock() const;

    virtual int getDefaultDisplayOffset() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void applyNaturalSlowdown(::BlockSource&);
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;

    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual float getInterpolatedBodyYaw(float) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void kill() /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual void applyNaturalSlowdown(::BlockSource& region);
#endif // @header-generator platform

    virtual void _lazyInitDisplayBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Minecart(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI Minecart(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _registerLoopingSounds();
#else // @header-generator platform
    MCAPI void _registerLoopingSounds();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void dropMinecartWithContentsAndRemove(std::string_view, bool);
#else // @header-generator platform
    MCAPI void dropMinecartWithContentsAndRemove(::std::string_view vanillaMinecartName, bool dropMinecartComponents);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* getDisplayBlock() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::Block const* getDisplayBlock() const;

    MCAPI int getDisplayOffset() const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getDisplayOffset() const;
#else // @header-generator platform
    MCAPI void postNormalTick(::BlockPos const& preNormalTickBlockPos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void postNormalTick(::BlockPos const&);
#else // @header-generator platform
    MCAPI ::BlockPos preNormalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos preNormalTick();

    MCNAPI void setDisplayBlock(::Block const&);

    MCNAPI void setRailRenderRot(float);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static float getHeightOffset(::AABBShapeComponent const&);
#else // @header-generator platform
    MCAPI void setDisplayBlock(::Block const& block);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getInterpolatedBodyYaw(float) const;
#else // @header-generator platform
    MCAPI void $destroy(::ActorDamageSource const& source, bool dropMinecartComponents);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCFOLD ::Block const* $getDefaultDisplayBlock() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const&) const;
#else // @header-generator platform
    MCFOLD int $getDefaultDisplayOffset() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorUniqueID $getControllingPlayer() const;
#else // @header-generator platform
    MCFOLD float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $kill();
#else // @header-generator platform
    MCFOLD ::ActorUniqueID $getControllingPlayer() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorHurtResult $_hurt(::ActorDamageSource const&, float, ::HurtParameters const&);
#else // @header-generator platform
    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCAPI float $getInterpolatedBodyYaw(float) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $destroy(::ActorDamageSource const&, bool);
#else // @header-generator platform
    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Block const* $getDefaultDisplayBlock() const;
#else // @header-generator platform
    MCAPI void $kill();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getDefaultDisplayOffset() const;
#else // @header-generator platform
    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $applyNaturalSlowdown(::BlockSource&);
#else // @header-generator platform
    MCAPI void $applyNaturalSlowdown(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_lazyInitDisplayBlock();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $_lazyInitDisplayBlock();
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
