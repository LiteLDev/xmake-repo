#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/UUID.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CommandArea;
class CommandPositionFloat;
class CompoundTag;
class Dimension;
class ILevel;
class Level;
class NetworkIdentifier;
class Player;
class Vec2;
class Vec3;
struct CommandOriginData;
struct CommandOriginIdentity;
// clang-format on

class CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandOrigin();

    virtual std::string const& getRequestId() const = 0;

    virtual std::string getName() const = 0;

    virtual ::BlockPos getBlockPosition() const = 0;

    virtual ::Vec3 getWorldPosition() const = 0;

    virtual std::optional<Vec2> getRotation() const = 0;

    virtual ::Level* getLevel() const = 0;

    virtual ::Dimension* getDimension() const = 0;

    virtual ::Actor* getEntity() const = 0;

    virtual ::CommandPermissionLevel getPermissionsLevel() const = 0;

    virtual std::unique_ptr<CommandOrigin> clone() const = 0;

    virtual std::optional<BlockPos> getCursorHitBlockPos() const;

    virtual std::optional<Vec3> getCursorHitPos() const;

    virtual bool hasChatPerms() const;

    virtual bool hasTellPerms() const;

    virtual bool canUseAbility(::AbilitiesIndex) const;

    virtual bool isWorldBuilder() const;

    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    virtual bool canChangePermissionsOfPlayer(::Player const&) const;

    virtual bool isSelectorExpansionAllowed() const;

    virtual ::NetworkIdentifier const& getSourceId() const;

    virtual ::SubClientId getSourceSubId() const;

    virtual ::CommandOrigin const& getOutputReceiver() const;

    virtual ::CommandOriginIdentity getIdentity() const;

    virtual ::CommandOriginType getOriginType() const = 0;

    virtual ::CommandOriginData toCommandOriginData() const;

    virtual ::mce::UUID const& getUUID() const;

    virtual void handleCommandOutputCallback(int, std::string&&) const;

    virtual void updateValues();

    virtual ::Vec3 const getExecutePosition(int, ::CommandPositionFloat const&) const;

    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const = 0;

    virtual bool requiresValidLevel() const;

    virtual void _setUUID(::mce::UUID const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandOrigin();

    MCNAPI std::unique_ptr<CommandArea> getAreaAt(::BlockPos const&, int) const;

    MCNAPI std::unique_ptr<CommandArea> getAreaAt(::BlockPos const&, ::BlockPos const&, int, bool) const;

    MCNAPI std::unique_ptr<CommandArea> getAreaAtWithBuffer(::BlockPos const&, int) const;

    MCNAPI std::unique_ptr<CommandArea> getAreaAtWithBuffer(::BlockPos const&, ::BlockPos const&, int, bool) const;

    MCNAPI bool isEditorWorld() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<CommandOrigin> fromCommandOriginData(
        ::CommandOriginData const&,
        ::Bedrock::NonOwnerPointer<ILevel> const&,
        ::NetworkIdentifier const&,
        ::SubClientId
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::NetworkIdentifier& sUnknownSource();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $getCursorHitBlockPos() const;

    MCNAPI std::optional<Vec3> $getCursorHitPos() const;

    MCNAPI bool $hasChatPerms() const;

    MCNAPI bool $hasTellPerms() const;

    MCNAPI bool $canUseAbility(::AbilitiesIndex) const;

    MCNAPI bool $isWorldBuilder() const;

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI bool $canChangePermissionsOfPlayer(::Player const&) const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::NetworkIdentifier const& $getSourceId() const;

    MCNAPI ::SubClientId $getSourceSubId() const;

    MCNAPI ::CommandOrigin const& $getOutputReceiver() const;

    MCNAPI ::CommandOriginIdentity $getIdentity() const;

    MCNAPI ::CommandOriginData $toCommandOriginData() const;

    MCNAPI ::mce::UUID const& $getUUID() const;

    MCNAPI void $handleCommandOutputCallback(int, std::string&&) const;

    MCNAPI void $updateValues();

    MCNAPI ::Vec3 const $getExecutePosition(int, ::CommandPositionFloat const&) const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $requiresValidLevel() const;

    MCNAPI void $_setUUID(::mce::UUID const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
