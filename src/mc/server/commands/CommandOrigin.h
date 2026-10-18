#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/crypto/random/Random.h"
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    CommandOrigin() { mUUID = Crypto::Random::generateUUID(); }
    LLNDAPI std::string getLocaleCode() const;

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CommandOrigin();
#else // @header-generator platform
    virtual ~CommandOrigin() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getRequestId() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getRequestId() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const = 0;
#else // @header-generator platform
    virtual ::std::string getName() const = 0;
#endif // @header-generator platform

    virtual ::BlockPos getBlockPosition() const = 0;

    virtual ::Vec3 getWorldPosition() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Vec2> getRotation() const = 0;
#else // @header-generator platform
    virtual ::std::optional<::Vec2> getRotation() const = 0;
#endif // @header-generator platform

    virtual ::Level* getLevel() const = 0;

    virtual ::Dimension* getDimension() const = 0;

    virtual ::Actor* getEntity() const = 0;

    virtual ::CommandPermissionLevel getPermissionsLevel() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CommandOrigin> clone() const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CommandOrigin> clone() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> getCursorHitBlockPos() const;
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> getCursorHitBlockPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Vec3> getCursorHitPos() const;
#else // @header-generator platform
    virtual ::std::optional<::Vec3> getCursorHitPos() const;
#endif // @header-generator platform

    virtual bool hasChatPerms() const;

    virtual bool hasTellPerms() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUseAbility(::AbilitiesIndex) const;
#else // @header-generator platform
    virtual bool canUseAbility(::AbilitiesIndex ability) const;
#endif // @header-generator platform

    virtual bool isWorldBuilder() const;

    virtual bool canUseCommandsWithoutCheatsEnabled() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canChangePermissionsOfPlayer(::Player const&) const;
#else // @header-generator platform
    virtual bool canChangePermissionsOfPlayer(::Player const& player) const;
#endif // @header-generator platform

    virtual bool isSelectorExpansionAllowed() const;

    virtual ::NetworkIdentifier const& getSourceId() const;

    virtual ::SubClientId getSourceSubId() const;

    virtual ::CommandOrigin const& getOutputReceiver() const;

    virtual ::CommandOriginIdentity getIdentity() const;

    virtual ::CommandOriginType getOriginType() const = 0;

    virtual ::CommandOriginData toCommandOriginData() const;

    virtual ::mce::UUID const& getUUID() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleCommandOutputCallback(int, std::string&&) const;
#else // @header-generator platform
    virtual void handleCommandOutputCallback(int successCount, ::std::string&& messages) const;
#endif // @header-generator platform

    virtual void updateValues();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 const getExecutePosition(int, ::CommandPositionFloat const&) const;
#else // @header-generator platform
    virtual ::Vec3 const getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;
#endif // @header-generator platform

    virtual ::CompoundTag serialize() const;

    virtual bool isValid() const = 0;

    virtual bool requiresValidLevel() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _setUUID(::mce::UUID const&);
#else // @header-generator platform
    virtual void _setUUID(::mce::UUID const& uuid);
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CommandOrigin();

    MCNAPI std::unique_ptr<CommandArea> getAreaAt(::BlockPos const&, int) const;

    MCNAPI std::unique_ptr<CommandArea> getAreaAt(::BlockPos const&, ::BlockPos const&, int, bool) const;

    MCNAPI std::unique_ptr<CommandArea> getAreaAtWithBuffer(::BlockPos const&, int) const;

    MCNAPI std::unique_ptr<CommandArea> getAreaAtWithBuffer(::BlockPos const&, ::BlockPos const&, int, bool) const;

    MCNAPI bool isEditorWorld() const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CommandArea>
    getAreaAt(::BlockPos const& min, ::BlockPos const& max, int commandVersion, bool allowUnloadedChunks) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<CommandOrigin> fromCommandOriginData(
        ::CommandOriginData const&,
        ::Bedrock::NonOwnerPointer<ILevel> const&,
        ::NetworkIdentifier const&,
        ::SubClientId
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::CommandOrigin> fromCommandOriginData(
        ::CommandOriginData const&                  data,
        ::Bedrock::NonOwnerPointer<::ILevel> const& level,
        ::NetworkIdentifier const&                  sourceId,
        ::SubClientId                               sourceSubId
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::NetworkIdentifier& sUnknownSource();
#else // @header-generator platform
    MCAPI static ::NetworkIdentifier& sUnknownSource();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $getCursorHitBlockPos() const;
#else // @header-generator platform
    MCFOLD ::std::optional<::BlockPos> $getCursorHitBlockPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Vec3> $getCursorHitPos() const;
#else // @header-generator platform
    MCFOLD ::std::optional<::Vec3> $getCursorHitPos() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasChatPerms() const;
#else // @header-generator platform
    MCAPI bool $hasChatPerms() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasTellPerms() const;
#else // @header-generator platform
    MCAPI bool $hasTellPerms() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUseAbility(::AbilitiesIndex) const;
#else // @header-generator platform
    MCFOLD bool $canUseAbility(::AbilitiesIndex ability) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isWorldBuilder() const;
#else // @header-generator platform
    MCAPI bool $isWorldBuilder() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;
#else // @header-generator platform
    MCFOLD bool $canUseCommandsWithoutCheatsEnabled() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $canChangePermissionsOfPlayer(::Player const&) const;
#else // @header-generator platform
    MCAPI bool $canChangePermissionsOfPlayer(::Player const& player) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSelectorExpansionAllowed() const;
#else // @header-generator platform
    MCAPI bool $isSelectorExpansionAllowed() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::NetworkIdentifier const& $getSourceId() const;
#else // @header-generator platform
    MCAPI ::NetworkIdentifier const& $getSourceId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SubClientId $getSourceSubId() const;
#else // @header-generator platform
    MCFOLD ::SubClientId $getSourceSubId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOrigin const& $getOutputReceiver() const;
#else // @header-generator platform
    MCFOLD ::CommandOrigin const& $getOutputReceiver() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOriginIdentity $getIdentity() const;
#else // @header-generator platform
    MCAPI ::CommandOriginIdentity $getIdentity() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOriginData $toCommandOriginData() const;
#else // @header-generator platform
    MCAPI ::CommandOriginData $toCommandOriginData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::mce::UUID const& $getUUID() const;
#else // @header-generator platform
    MCFOLD ::mce::UUID const& $getUUID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleCommandOutputCallback(int, std::string&&) const;
#else // @header-generator platform
    MCFOLD void $handleCommandOutputCallback(int successCount, ::std::string&& messages) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $updateValues();
#else // @header-generator platform
    MCFOLD void $updateValues();
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
    MCNAPI bool $requiresValidLevel() const;
#else // @header-generator platform
    MCFOLD bool $requiresValidLevel() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_setUUID(::mce::UUID const&);
#else // @header-generator platform
    MCFOLD void $_setUUID(::mce::UUID const& uuid);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
