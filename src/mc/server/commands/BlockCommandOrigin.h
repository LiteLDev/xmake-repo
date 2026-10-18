#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BaseCommandBlock;
class BlockSource;
class CommandBlockActor;
class CompoundTag;
class Dimension;
class Level;
class Vec2;
class Vec3;
// clang-format on

class BlockCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>        mLevel;
    ::ll::TypedStorage<4, 12, ::BlockPos>     mPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    mName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  mName;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCommandOrigin& operator=(BlockCommandOrigin const&);
    BlockCommandOrigin(BlockCommandOrigin const&);
    BlockCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~BlockCommandOrigin();
#else // @header-generator platform
    virtual ~BlockCommandOrigin() /*override*/;
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
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BaseCommandBlock* _getBaseCommandBlock(::BlockSource&) const;
#else // @header-generator platform
    virtual ::BaseCommandBlock* _getBaseCommandBlock(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandBlockActor* _getBlockEntity(::BlockSource&) const;
#else // @header-generator platform
    virtual ::CommandBlockActor* _getBlockEntity(::BlockSource& region) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI BlockCommandOrigin(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI BlockCommandOrigin(::BlockSource& region, ::BlockPos const& pos);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _getName(::BlockSource&) const;
#else // @header-generator platform
    MCAPI ::std::string _getName(::BlockSource& region) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockSource&, ::BlockPos const&);
#else // @header-generator platform
    MCAPI void* $ctor(::BlockSource& region, ::BlockPos const& pos);
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
    MCFOLD ::std::string $getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $getBlockPosition() const;
#else // @header-generator platform
    MCAPI ::BlockPos $getBlockPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getWorldPosition() const;
#else // @header-generator platform
    MCAPI ::Vec3 $getWorldPosition() const;
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

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BaseCommandBlock* $_getBaseCommandBlock(::BlockSource&) const;
#else // @header-generator platform
    MCAPI ::BaseCommandBlock* $_getBaseCommandBlock(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandBlockActor* $_getBlockEntity(::BlockSource&) const;
#else // @header-generator platform
    MCAPI ::CommandBlockActor* $_getBlockEntity(::BlockSource& region) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
