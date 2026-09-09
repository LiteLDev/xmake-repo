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
    virtual ~LeashKnot();

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void remove();

    virtual void teleportTo(::Vec3 const&, bool, int, int, bool);

    virtual float getShadowRadius() const;

    virtual ::InteractionResult getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual int getWidth() const;

    virtual int getHeight() const;

    virtual void dropItem();

    virtual bool wouldSurvive(::BlockSource&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LeashKnot(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);
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

    MCNAPI void $remove();

    MCNAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::InteractionResult $getInteraction(::Player&, ::ActorInteraction&, ::Vec3 const&);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI int $getWidth() const;

    MCNAPI int $getHeight() const;

    MCNAPI void $dropItem();

    MCNAPI bool $wouldSurvive(::BlockSource&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
