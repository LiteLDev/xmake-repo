#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/IContainerManager.h"
#include "mc/world/inventory/network/ContainerScreenContext.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class ContainerManagerController;
class ContainerModel;
class DynamicContainerTracker;
class HashedString;
class IContainerRegistryAccess;
class ItemStackNetManagerBase;
class Player;
struct ActorUniqueID;
struct FullContainerName;
struct PlayerContainerRefresher;
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class ContainerManagerModel : public ::IContainerManager {
public:
    // ContainerManagerModel inner types define
    using DynamicContainerPublisher = ::Bedrock::PubSub::
        Publisher<void(), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PlayerContainerRefresher>>> mContainerRefresher;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<std::shared_ptr<DynamicContainerTracker>>> mDynamicContainerTracker;
    ::ll::UntypedStorage<1, 16> mRegistryAccess;
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    ::ll::TypedStorage<8, 24, std::vector<ItemStack>> mLastSlots;
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Bedrock::PubSub::Publisher<void (SharedTypes::Legacy::ContainerType), Bedrock::PubSub::ThreadModel::SingleThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mContainerTypeSubscribers;
    ::ll::TypedStorage<8, 40, std::unordered_map<const ContainerManagerController*, std::function<void (ContainerManagerModel&)>>> mInformControllerOfDestructionCallbacks;
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext> mScreenContext;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<ContainerModel>>> mContainers;
    ::ll::UntypedStorage<8, 88> mOnDynamicContainerChangePublisher;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerManagerModel& operator=(ContainerManagerModel const&);
    ContainerManagerModel(ContainerManagerModel const&);
    ContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContainerManagerModel();

    virtual ::ContainerID getContainerId() const;

    virtual void setContainerId(::ContainerID);

    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const;

    virtual void setContainerType(::SharedTypes::Legacy::ContainerType);

    virtual ::Bedrock::PubSub::Subscription registerContainerTypeListener(std::function<void (SharedTypes::Legacy::ContainerType)>) const;

    virtual void serverInitItemStackIds();

    virtual void setFullContainerSlot(int, ::FullContainerName const&, ::ItemStack const&, bool);

    virtual ::ItemStack const& getFullContainerSlot(int, ::FullContainerName const&) const;

    virtual void broadcastChanges();

    virtual bool tick();

    virtual void debitPlayerLevels(int);

    virtual bool isCreativeMode() const;

    virtual bool isClientSide() const;

    virtual bool isServerAuthoritative() const;

    virtual bool isValid(float);

    virtual ::ContainerScreenContext _postInit() = 0;

    virtual void _onDynamicContainerContentsChanged();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContainerManagerModel(::ContainerID, ::Player&);

    MCNAPI void _addContainer(std::shared_ptr<ContainerModel>);

    MCNAPI ::ContainerScreenContext _containerScreenContext(::ActorUniqueID const);

    MCNAPI ::ContainerScreenContext _containerScreenContext(::BlockPos const&);

    MCNAPI std::shared_ptr<ContainerModel> _getContainer(::ContainerEnumName) const;

    MCNAPI bool _isPlayerInRangeOfPosition(::BlockPos const&, float) const;

    MCNAPI void addDynamicContainer(std::shared_ptr<ContainerModel>);

    MCNAPI std::string getBlockDisplayName(::BlockPos const&) const;

    MCNAPI ::HashedString getBlockLocName(::BlockPos const&) const;

    MCNAPI std::unordered_map<std::string, std::shared_ptr<ContainerModel>>& getContainers();

    MCNAPI std::shared_ptr<ContainerModel> getDynamicContainer(::FullContainerName const&);

    MCNAPI ::HashedString getEntityLocName(::ActorUniqueID const&) const;

    MCNAPI std::string getEntityName(::ActorUniqueID const&) const;

    MCNAPI ::Player& getPlayer() const;

    MCNAPI int getPlayerLevels() const;

    MCNAPI void grantExperience(int);

    MCNAPI void postInit();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _appendCopies(std::vector<ItemStack>&, std::vector<ItemStack> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContainerID, ::Player&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContainerID $getContainerId() const;

    MCNAPI void $setContainerId(::ContainerID);

    MCNAPI ::SharedTypes::Legacy::ContainerType $getContainerType() const;

    MCNAPI void $setContainerType(::SharedTypes::Legacy::ContainerType);

    MCNAPI ::Bedrock::PubSub::Subscription
        $registerContainerTypeListener(std::function<void(SharedTypes::Legacy::ContainerType)>) const;

    MCNAPI void $serverInitItemStackIds();

    MCNAPI void $setFullContainerSlot(int, ::FullContainerName const&, ::ItemStack const&, bool);

    MCNAPI ::ItemStack const& $getFullContainerSlot(int, ::FullContainerName const&) const;

    MCNAPI void $broadcastChanges();

    MCNAPI bool $tick();

    MCNAPI void $debitPlayerLevels(int);

    MCNAPI bool $isCreativeMode() const;

    MCNAPI bool $isClientSide() const;

    MCNAPI bool $isServerAuthoritative() const;

    MCNAPI bool $isValid(float);

    MCNAPI void $_onDynamicContainerContentsChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
