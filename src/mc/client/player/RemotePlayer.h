#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/player/LocalPlayer.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ChunkSource;
class ComplexInventoryTransaction;
class Container;
class EntityContext;
class FrameUpdateContext;
class FrameUpdateContextBase;
class IContainerManager;
class InventoryTransaction;
class ItemStack;
class LocalPlayer;
class NetworkIdentifier;
class PacketSender;
class PlayerEventCoordinator;
class Vec2;
class Vec3;
struct Tick;
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class RemotePlayer : public ::Player, public ::LocalPlayer::RegionListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPartySubscription;
    ::ll::TypedStorage<1, 1, bool>                             mIsInParty;
    ::ll::TypedStorage<8, 8, ::LocalPlayer*>                   mLocalPlayer;
    ::ll::TypedStorage<8, 16, std::shared_ptr<bool>>           mExistenceTracker;
    ::ll::TypedStorage<8, 24, std::string>                     mQueuedEmote;
    ::ll::TypedStorage<4, 4, int>                              mEmoteQueuedTicks;
    ::ll::TypedStorage<1, 1, bool>                             mTicked;
    ::ll::TypedStorage<1, 1, bool>                             mQueuedEmotePlayChatMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    RemotePlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RemotePlayer();

    virtual void normalTick();

    virtual ::mce::Color getNameTagTextColor() const;

    virtual void feed(int);

    virtual void aiStep();

    virtual void prepareRegion(::ChunkSource&);

    virtual void destroyRegion();

    virtual void suspendRegion();

    virtual void tickWorld(::Tick const&);

    virtual void frameUpdate(::FrameUpdateContextBase&);

    virtual void playEmote(std::string const&, bool const);

    virtual void initHUDContainerManager();

    virtual void setContainerData(::IContainerManager&, int, int);

    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);

    virtual void refreshContainer(::IContainerManager&);

    virtual bool isTeacher() const;

    virtual void sendInventoryTransaction(::InventoryTransaction const&) const;

    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const;

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator();

    virtual void setRemotePlayerTicked(bool);

    virtual void onMovePlayerPacketNormal(::Vec3 const&, ::Vec2 const&, float);

    virtual ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> getEditorPlayer() const;

    virtual void destroyEditorPlayer();

    virtual void onRegionDestroyed();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RemotePlayer(
        ::LocalPlayer&,
        ::PacketSender&,
        ::GameType,
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::mce::UUID,
        std::string const&,
        ::EntityContext&
    );

    MCNAPI void _playEmote(std::string const&);

    MCNAPI void setIsInParty(bool);

    MCNAPI void setPartySubscription(::Bedrock::PubSub::Subscription);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::LocalPlayer&,
        ::PacketSender&,
        ::GameType,
        ::NetworkIdentifier const&,
        ::SubClientId,
        ::mce::UUID,
        std::string const&,
        ::EntityContext&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $normalTick();

    MCNAPI ::mce::Color $getNameTagTextColor() const;

    MCNAPI void $feed(int);

    MCNAPI void $aiStep();

    MCNAPI void $prepareRegion(::ChunkSource&);

    MCNAPI void $destroyRegion();

    MCNAPI void $suspendRegion();

    MCNAPI void $tickWorld(::Tick const&);

    MCNAPI void $frameUpdate(::FrameUpdateContextBase&);

    MCNAPI void $playEmote(std::string const&, bool const);

    MCNAPI void $initHUDContainerManager();

    MCNAPI void $setContainerData(::IContainerManager&, int, int);

    MCNAPI void $slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);

    MCNAPI void $refreshContainer(::IContainerManager&);

    MCNAPI bool $isTeacher() const;

    MCNAPI void $sendInventoryTransaction(::InventoryTransaction const&) const;

    MCNAPI void $sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction>) const;

    MCNAPI ::PlayerEventCoordinator& $getPlayerEventCoordinator();

    MCNAPI void $setRemotePlayerTicked(bool);

    MCNAPI void $onMovePlayerPacketNormal(::Vec3 const&, ::Vec2 const&, float);

    MCNAPI ::Bedrock::NonOwnerPointer<Editor::IEditorPlayer> $getEditorPlayer() const;

    MCNAPI void $destroyEditorPlayer();

    MCNAPI void $onRegionDestroyed();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class RemotePlayer {};
#endif // @header-generator platform
