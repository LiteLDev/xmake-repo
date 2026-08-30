#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/BlockCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseCommandBlock;
class BlockPos;
class BlockSource;
class CommandBlockActor;
class CommandOrigin;
class CompoundTag;
class Level;
class Vec2;
class Vec3;
struct DimensionType;
// clang-format on

class MinecartBlockCommandOrigin : public ::BlockCommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mMinecartEntityID;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecartBlockCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecartBlockCommandOrigin();

    virtual ::BlockPos getBlockPosition() const;

    virtual ::Vec3 getWorldPosition() const;

    virtual std::optional<Vec2> getRotation() const;

    virtual ::Actor* getEntity() const;

    virtual std::unique_ptr<CommandOrigin> clone() const;

    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    virtual ::CommandOriginType getOriginType() const;

    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const;

    virtual ::BaseCommandBlock* _getBaseCommandBlock(::BlockSource&) const;

    virtual ::CommandBlockActor* _getBlockEntity(::BlockSource&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinecartBlockCommandOrigin(::BlockSource&, ::ActorUniqueID const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::ActorUniqueID const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPos $getBlockPosition() const;

    MCNAPI ::Vec3 $getWorldPosition() const;

    MCNAPI std::optional<Vec2> $getRotation() const;

    MCNAPI ::Actor* $getEntity() const;

    MCNAPI std::unique_ptr<CommandOrigin> $clone() const;

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;

    MCNAPI ::BaseCommandBlock* $_getBaseCommandBlock(::BlockSource&) const;

    MCNAPI ::CommandBlockActor* $_getBlockEntity(::BlockSource&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
