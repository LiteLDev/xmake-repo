#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
class Vec2;
class Vec3;
struct CommandOriginData;
// clang-format on

class ClientAutomationCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRequestId;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientAutomationCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientAutomationCommandOrigin();

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

    virtual ::CommandOriginType getOriginType() const;

    virtual ::CommandOriginData toCommandOriginData() const;

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

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::CommandOriginData $toCommandOriginData() const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
