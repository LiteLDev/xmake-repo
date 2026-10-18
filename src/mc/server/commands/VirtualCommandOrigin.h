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
#if defined(LL_PLAT_A) // @header-generator platform
class ServerLevel;
#else // @header-generator platform
#endif // @header-generator platform
class Vec2;
struct CommandOriginIdentity;
// clang-format on

class VirtualCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                        mPos;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mOrigin;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mOutputReceiver;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>        mCommandPosition;
    ::ll::TypedStorage<4, 4, int>                            mVersion;
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::Vec3>                            mPos;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mOrigin;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mOutputReceiver;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>            mCommandPosition;
    ::ll::TypedStorage<4, 4, int>                                mVersion;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    VirtualCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VirtualCommandOrigin();
#else // @header-generator platform
    virtual ::std::string const& getRequestId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getRequestId() const;
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual ::BlockPos getBlockPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos getBlockPosition() const;
#else // @header-generator platform
    virtual ::Vec3 getWorldPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getWorldPosition() const;
#else // @header-generator platform
    virtual ::std::optional<::Vec2> getRotation() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Vec2> getRotation() const;
#else // @header-generator platform
    virtual ::Level* getLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Level* getLevel() const;
#else // @header-generator platform
    virtual ::Dimension* getDimension() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Dimension* getDimension() const;
#else // @header-generator platform
    virtual ::Actor* getEntity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* getEntity() const;
#else // @header-generator platform
    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandPermissionLevel getPermissionsLevel() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CommandOrigin> clone() const;
#else // @header-generator platform
    virtual ::CommandOrigin const& getOutputReceiver() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasChatPerms() const;
#else // @header-generator platform
    virtual bool hasChatPerms() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasTellPerms() const;
#else // @header-generator platform
    virtual bool hasTellPerms() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUseAbility(::AbilitiesIndex) const;
#else // @header-generator platform
    virtual bool canUseAbility(::AbilitiesIndex abilityIndex) const /*override*/;
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
    virtual ::NetworkIdentifier const& getSourceId() const;
#else // @header-generator platform
    virtual ::CommandOriginType getOriginType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandOrigin const& getOutputReceiver() const;
#else // @header-generator platform
    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandOriginIdentity getIdentity() const;
#else // @header-generator platform
    virtual ::CommandOriginIdentity getIdentity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandOriginType getOriginType() const;
#else // @header-generator platform
    virtual void updateValues() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void updateValues();
#else // @header-generator platform
    virtual ::Vec3 const getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 const getExecutePosition(int, ::CommandPositionFloat const&) const;
#else // @header-generator platform
    virtual ::CompoundTag serialize() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const;
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI VirtualCommandOrigin(::CommandOrigin const&, ::CommandOrigin const&, ::CommandPositionFloat const&, int);
#else // @header-generator platform
    MCAPI VirtualCommandOrigin(
        ::CommandOrigin const&        outputReceiver,
        ::Actor&                      entity,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI VirtualCommandOrigin(::CommandOrigin const&, ::Actor&, ::CommandPositionFloat const&, int);
#else // @header-generator platform
    MCAPI VirtualCommandOrigin(
        ::CommandOrigin const&        outputReceiver,
        ::CommandOrigin const&        source,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOrigin* getOrigin() const;
#else // @header-generator platform
    MCAPI VirtualCommandOrigin(
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CommandOrigin const&, ::CommandOrigin const&, ::CommandPositionFloat const&, int);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::CommandOrigin const&        outputReceiver,
        ::Actor&                      entity,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CommandOrigin const&, ::Actor&, ::CommandPositionFloat const&, int);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void* $ctor(
        ::CommandOrigin const&        outputReceiver,
        ::CommandOrigin const&        source,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getRequestId() const;
#else // @header-generator platform
    MCAPI ::std::string const& $getRequestId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCAPI ::std::string $getName() const;
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
    MCAPI ::std::optional<::Vec2> $getRotation() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Level* $getLevel() const;
#else // @header-generator platform
    MCAPI ::Level* $getLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Dimension* $getDimension() const;
#else // @header-generator platform
    MCAPI ::Dimension* $getDimension() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Actor* $getEntity() const;
#else // @header-generator platform
    MCAPI ::Actor* $getEntity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandPermissionLevel $getPermissionsLevel() const;
#else // @header-generator platform
    MCAPI ::CommandPermissionLevel $getPermissionsLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CommandOrigin> $clone() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasChatPerms() const;
#else // @header-generator platform
    MCFOLD ::CommandOrigin const& $getOutputReceiver() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasTellPerms() const;
#else // @header-generator platform
    MCAPI bool $hasChatPerms() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUseAbility(::AbilitiesIndex) const;
#else // @header-generator platform
    MCAPI bool $hasTellPerms() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;
#else // @header-generator platform
    MCAPI bool $canUseAbility(::AbilitiesIndex abilityIndex) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSelectorExpansionAllowed() const;
#else // @header-generator platform
    MCAPI bool $canUseCommandsWithoutCheatsEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkIdentifier const& $getSourceId() const;
#else // @header-generator platform
    MCAPI bool $isSelectorExpansionAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOrigin const& $getOutputReceiver() const;
#else // @header-generator platform
    MCFOLD ::CommandOriginType $getOriginType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOriginIdentity $getIdentity() const;
#else // @header-generator platform
    MCAPI ::NetworkIdentifier const& $getSourceId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOriginType $getOriginType() const;
#else // @header-generator platform
    MCAPI ::CommandOriginIdentity $getIdentity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateValues();
#else // @header-generator platform
    MCAPI void $updateValues();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Vec3 const $getExecutePosition(int, ::CommandPositionFloat const&) const;
#else // @header-generator platform
    MCAPI ::Vec3 const $getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CompoundTag $serialize() const;
#else // @header-generator platform
    MCAPI ::CompoundTag $serialize() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCAPI bool $isValid() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
