#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/server/ServerLevel.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class ServerLevel;
class Vec2;
class Vec3;
// clang-format on

class ServerCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&>           mServerLevel;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>             mRequestId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>           mRequestId;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mCommandPermissionLevel;
    ::ll::TypedStorage<4, 4, ::DimensionType>          mDimensionType;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ServerCommandOrigin& operator=(ServerCommandOrigin const&);
    ServerCommandOrigin(ServerCommandOrigin const&);
    ServerCommandOrigin();
#else // @header-generator platform
    ServerCommandOrigin(
        std::string const&     requestId,
        ServerLevel&           level,
        CommandPermissionLevel permission,
        DimensionType          dimensionType
    )
    : mServerLevel(level),
      mRequestId(requestId),
      mCommandPermissionLevel(permission),
      mDimensionType(dimensionType) {}
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerCommandOrigin();
#else // @header-generator platform
    virtual ~ServerCommandOrigin() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getRequestId() const;
#else // @header-generator platform
    virtual ::std::string const& getRequestId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos getBlockPosition() const;
#else // @header-generator platform
    virtual ::BlockPos getBlockPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getWorldPosition() const;
#else // @header-generator platform
    virtual ::Vec3 getWorldPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Vec2> getRotation() const;
#else // @header-generator platform
    virtual ::std::optional<::Vec2> getRotation() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Level* getLevel() const;
#else // @header-generator platform
    virtual ::Level* getLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Dimension* getDimension() const;
#else // @header-generator platform
    virtual ::Dimension* getDimension() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* getEntity() const;
#else // @header-generator platform
    virtual ::Actor* getEntity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandPermissionLevel getPermissionsLevel() const;
#else // @header-generator platform
    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CommandOrigin> clone() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
#else // @header-generator platform
    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSelectorExpansionAllowed() const;
#else // @header-generator platform
    virtual bool isSelectorExpansionAllowed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandOriginType getOriginType() const;
#else // @header-generator platform
    virtual ::CommandOriginType getOriginType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CompoundTag serialize() const;
#else // @header-generator platform
    virtual ::CompoundTag serialize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&     requestId,
        ::ServerLevel&           level,
        ::CommandPermissionLevel permission,
        ::DimensionType          dimensionType
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getRequestId() const;
#else // @header-generator platform
    MCFOLD ::std::string const& $getRequestId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCAPI ::std::string $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $getBlockPosition() const;
#else // @header-generator platform
    MCFOLD ::BlockPos $getBlockPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getWorldPosition() const;
#else // @header-generator platform
    MCFOLD ::Vec3 $getWorldPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Vec2> $getRotation() const;
#else // @header-generator platform
    MCFOLD ::std::optional<::Vec2> $getRotation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Level* $getLevel() const;
#else // @header-generator platform
    MCFOLD ::Level* $getLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Dimension* $getDimension() const;
#else // @header-generator platform
    MCAPI ::Dimension* $getDimension() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* $getEntity() const;
#else // @header-generator platform
    MCFOLD ::Actor* $getEntity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandPermissionLevel $getPermissionsLevel() const;
#else // @header-generator platform
    MCFOLD ::CommandPermissionLevel $getPermissionsLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CommandOrigin> $clone() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;
#else // @header-generator platform
    MCFOLD bool $canUseCommandsWithoutCheatsEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSelectorExpansionAllowed() const;
#else // @header-generator platform
    MCFOLD bool $isSelectorExpansionAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOriginType $getOriginType() const;
#else // @header-generator platform
    MCFOLD ::CommandOriginType $getOriginType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag $serialize() const;
#else // @header-generator platform
    MCAPI ::CompoundTag $serialize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCFOLD bool $isValid() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
