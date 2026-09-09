#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CommandPositionFloat;
class CompoundTag;
class Dimension;
class Level;
class ServerLevel;
// clang-format on

class ExecuteContextCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mExecutionEntity;
    ::ll::TypedStorage<4, 12, std::optional<Vec2>>                 mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mPosition;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mRotationEntity;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mPositionEntity;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mAnchor;
    ::ll::TypedStorage<4, 4, ::DimensionType>                      mDimensionType;
    ::ll::TypedStorage<8, 8, ::Level&>                             mLevel;
    ::ll::TypedStorage<4, 4, int>                                  mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    ExecuteContextCommandOrigin& operator=(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin(ExecuteContextCommandOrigin const&);
    ExecuteContextCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExecuteContextCommandOrigin();

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

    virtual ::CommandOriginType getOriginType() const;

    virtual void updateValues();

    virtual ::Vec3 const getExecutePosition(int, ::CommandPositionFloat const&) const;

    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor const* getPositionEntity();

    MCNAPI void setDimension(::Dimension const&);

    MCNAPI void setDimension(::DimensionType const&);

    MCNAPI void setExecutionEntity(::Actor const&);

    MCNAPI void setPosition(::Vec3 const&);

    MCNAPI void setPositionEntity(::Actor const&);

    MCNAPI void setRotation(::Vec2 const&);

    MCNAPI void setRotationEntity(::Actor const&);
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
