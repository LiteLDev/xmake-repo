#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/HangingActor.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Motif;
class Packet;
struct ActorDefinitionIdentifier;
// clang-format on

class Painting : public ::HangingActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Motif const*> mMotif;
    // NOLINTEND

public:
    // prevent constructor by default
    Painting();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Painting();

    virtual void remove();

    virtual std::unique_ptr<Packet> tryCreateAddActorPacket();

    virtual float getShadowRadius() const;

    virtual void readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    virtual void addAdditionalSaveData(::CompoundTag&) const;

    virtual int getWidth() const;

    virtual int getHeight() const;

    virtual void dropItem();

    virtual bool placeHangingEntity(::BlockSource&, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Painting(::ActorDefinitionGroup*, ::ActorDefinitionIdentifier const&, ::EntityContext&);

    MCNAPI void clientInitialize(int, std::string const&);

    MCNAPI ::Motif const& getCurrentMotif() const;
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
    MCNAPI void $remove();

    MCNAPI std::unique_ptr<Packet> $tryCreateAddActorPacket();

    MCNAPI float $getShadowRadius() const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const&, ::DataLoadHelper&);

    MCNAPI void $addAdditionalSaveData(::CompoundTag&) const;

    MCNAPI int $getWidth() const;

    MCNAPI int $getHeight() const;

    MCNAPI void $dropItem();

    MCNAPI bool $placeHangingEntity(::BlockSource&, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
