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
#if defined(LL_PLAT_A) // @header-generator platform
class Level;
#else // @header-generator platform
#endif // @header-generator platform
class Vec2;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
struct DimensionType;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~MinecartBlockCommandOrigin();
#else // @header-generator platform
    virtual ~MinecartBlockCommandOrigin() /*override*/ = default;
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
    virtual ::Actor* getEntity() const;
#else // @header-generator platform
    virtual ::Actor* getEntity() const /*override*/;
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
    virtual ::CommandBlockActor* _getBlockEntity(::BlockSource& region) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandBlockActor* _getBlockEntity(::BlockSource&) const;
#else // @header-generator platform
    virtual ::BaseCommandBlock* _getBaseCommandBlock(::BlockSource& region) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI MinecartBlockCommandOrigin(::BlockSource&, ::ActorUniqueID const&);
#else // @header-generator platform
    MCAPI MinecartBlockCommandOrigin(::BlockSource& region, ::ActorUniqueID const& minecartId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::BlockSource&, ::ActorUniqueID const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::BlockSource& region, ::ActorUniqueID const& minecartId);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::BlockPos $getBlockPosition() const;
#else // @header-generator platform
    MCFOLD ::BlockPos $getBlockPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 $getWorldPosition() const;
#else // @header-generator platform
    MCAPI ::Vec3 $getWorldPosition() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Vec2> $getRotation() const;
#else // @header-generator platform
    MCAPI ::std::optional<::Vec2> $getRotation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* $getEntity() const;
#else // @header-generator platform
    MCAPI ::Actor* $getEntity() const;
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
    MCFOLD ::CommandBlockActor* $_getBlockEntity(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandBlockActor* $_getBlockEntity(::BlockSource&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::BaseCommandBlock* $_getBaseCommandBlock(::BlockSource& region) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
