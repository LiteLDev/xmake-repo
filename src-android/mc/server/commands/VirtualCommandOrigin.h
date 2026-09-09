#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class NetworkIdentifier;
class ServerLevel;
class Vec2;
struct CommandOriginIdentity;
// clang-format on

class VirtualCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                        mPos;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mOrigin;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mOutputReceiver;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>        mCommandPosition;
    ::ll::TypedStorage<4, 4, int>                            mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    VirtualCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VirtualCommandOrigin();

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

    virtual bool hasChatPerms() const;

    virtual bool hasTellPerms() const;

    virtual bool canUseAbility(::AbilitiesIndex) const;

    virtual bool canUseCommandsWithoutCheatsEnabled() const;

    virtual bool isSelectorExpansionAllowed() const;

    virtual ::NetworkIdentifier const& getSourceId() const;

    virtual ::CommandOrigin const& getOutputReceiver() const;

    virtual ::CommandOriginIdentity getIdentity() const;

    virtual ::CommandOriginType getOriginType() const;

    virtual void updateValues();

    virtual ::Vec3 const getExecutePosition(int, ::CommandPositionFloat const&) const;

    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VirtualCommandOrigin(::CommandOrigin const&, ::CommandOrigin const&, ::CommandPositionFloat const&, int);

    MCNAPI VirtualCommandOrigin(::CommandOrigin const&, ::Actor&, ::CommandPositionFloat const&, int);

    MCNAPI ::CommandOrigin* getOrigin() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommandOrigin const&, ::CommandOrigin const&, ::CommandPositionFloat const&, int);

    MCNAPI void* $ctor(::CommandOrigin const&, ::Actor&, ::CommandPositionFloat const&, int);
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

    MCNAPI bool $hasChatPerms() const;

    MCNAPI bool $hasTellPerms() const;

    MCNAPI bool $canUseAbility(::AbilitiesIndex) const;

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::NetworkIdentifier const& $getSourceId() const;

    MCNAPI ::CommandOrigin const& $getOutputReceiver() const;

    MCNAPI ::CommandOriginIdentity $getIdentity() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI void $updateValues();

    MCNAPI ::Vec3 const $getExecutePosition(int, ::CommandPositionFloat const&) const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
