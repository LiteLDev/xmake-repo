#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/NetworkIdentifier.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class Player;
class Vec2;
class Vec3;
struct CommandOriginData;
// clang-format on

class TestCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mPlayerId;
    ::ll::TypedStorage<8, 8, ::Level*>              mLevel;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mSourceId;
    ::ll::TypedStorage<1, 1, ::SubClientId>         mSourceSubId;
    // NOLINTEND

public:
    // prevent constructor by default
    TestCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TestCommandOrigin() = default;

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

    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    virtual bool isSelectorExpansionAllowed() const;

    virtual ::NetworkIdentifier const& getSourceId() const;

    virtual ::SubClientId getSourceSubId() const;

    virtual ::CommandOriginType getOriginType() const;

    virtual ::CommandOriginData toCommandOriginData() const;

    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const;
    // NOLINTEND
};
