#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class NetworkIdentifier;
class Player;
class Vec2;
class Vec3;
struct CommandOriginIdentity;
// clang-format on

class PlayerCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPlayerId;
    ::ll::TypedStorage<8, 8, ::Level&>        mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerCommandOrigin& operator=(PlayerCommandOrigin const&);
    PlayerCommandOrigin(PlayerCommandOrigin const&);
    PlayerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerCommandOrigin();

    virtual std::string const& getRequestId() const;

    virtual std::string getName() const;

    virtual ::BlockPos getBlockPosition() const;

    virtual ::Vec3 getWorldPosition() const;

    virtual std::optional<Vec2> getRotation() const;

    virtual ::Level* getLevel() const;

    virtual ::Dimension* getDimension() const;

    virtual ::Actor* getEntity() const;

    virtual ::CommandPermissionLevel getPermissionsLevel() const;

    virtual std::unique_ptr<CommandOrigin> clone() const;

    virtual std::optional<BlockPos> getCursorHitBlockPos() const;

    virtual std::optional<Vec3> getCursorHitPos() const;

    virtual bool canUseAbility(::AbilitiesIndex) const;

    virtual bool isSelectorExpansionAllowed() const;

    virtual ::NetworkIdentifier const& getSourceId() const;

    virtual ::SubClientId getSourceSubId() const;

    virtual ::CommandOriginIdentity getIdentity() const;

    virtual ::CommandOriginType getOriginType() const;

    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getRequestId() const;

    MCNAPI std::string $getName() const;

    MCNAPI ::BlockPos $getBlockPosition() const;

    MCNAPI ::Vec3 $getWorldPosition() const;

    MCNAPI std::optional<Vec2> $getRotation() const;

    MCNAPI ::Level* $getLevel() const;

    MCNAPI ::Dimension* $getDimension() const;

    MCNAPI ::Actor* $getEntity() const;

    MCNAPI ::CommandPermissionLevel $getPermissionsLevel() const;

    MCNAPI std::unique_ptr<CommandOrigin> $clone() const;

    MCNAPI std::optional<BlockPos> $getCursorHitBlockPos() const;

    MCNAPI std::optional<Vec3> $getCursorHitPos() const;

    MCNAPI bool $canUseAbility(::AbilitiesIndex) const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::NetworkIdentifier const& $getSourceId() const;

    MCNAPI ::SubClientId $getSourceSubId() const;

    MCNAPI ::CommandOriginIdentity $getIdentity() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
