#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/HangingActor.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class ActorInteraction;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class InteractionResult;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class LeashKnot : public ::HangingActor {
public:
    // prevent constructor by default
    LeashKnot();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LeashKnot();
#else // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);
#else // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    virtual float getShadowRadius() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void remove();
#else // @header-generator platform
    virtual int getWidth() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    virtual int getHeight() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getShadowRadius() const;
#else // @header-generator platform
    virtual void dropItem() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InteractionResult getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);
#else // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    virtual bool wouldSurvive(::BlockSource& region) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getWidth() const;
#else // @header-generator platform
    virtual void remove() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual int getHeight() const;
#else // @header-generator platform
    virtual ::InteractionResult
    getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void dropItem();

    virtual bool wouldSurvive(::BlockSource&);
#else // @header-generator platform
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI LeashKnot(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
#else // @header-generator platform
    MCAPI LeashKnot(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
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
    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod);
#else // @header-generator platform
    MCFOLD void $reloadHardcodedClient(::ActorInitializationMethod method);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $remove();
#else // @header-generator platform
    MCFOLD float $getShadowRadius() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);
#else // @header-generator platform
    MCFOLD int $getWidth() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getShadowRadius() const;
#else // @header-generator platform
    MCFOLD int $getHeight() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::InteractionResult $getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);
#else // @header-generator platform
    MCFOLD void $dropItem();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);
#else // @header-generator platform
    MCFOLD void $addAdditionalSaveData(::CompoundTag& tag) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;
#else // @header-generator platform
    MCFOLD void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getWidth() const;
#else // @header-generator platform
    MCAPI bool $wouldSurvive(::BlockSource& region);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int $getHeight() const;
#else // @header-generator platform
    MCAPI void $remove();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dropItem();
#else // @header-generator platform
    MCAPI ::InteractionResult
    $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $wouldSurvive(::BlockSource&);
#else // @header-generator platform
    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);


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
