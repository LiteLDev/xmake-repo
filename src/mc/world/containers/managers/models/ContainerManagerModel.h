#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/world/ContainerID.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/managers/IContainerManager.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#endif // @header-generator platform
#include "mc/world/inventory/network/ContainerScreenContext.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/item/ItemStack.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
class ContainerManagerController;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerModel;
class DynamicContainerTracker;
class HashedString;
class IContainerRegistryAccess;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackNetManagerBase;
#else // @header-generator platform
class ItemStack;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    using DynamicContainerPublisher = ::Bedrock::PubSub::
        Publisher<void(), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>;
#else // @header-generator platform
    using DynamicContainerPublisher =
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PlayerContainerRefresher>>> mContainerRefresher;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::DynamicContainerTracker>>> mDynamicContainerTracker;
    ::ll::TypedStorage<8, 16, ::WeakRef<::IContainerRegistryAccess>>                         mRegistryAccess;
    ::ll::TypedStorage<8, 8, ::Player&>                                                      mPlayer;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>                                    mLastSlots;
    ::ll::TypedStorage<1, 1, ::ContainerID>                                                  mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType>                           mContainerType;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::ContainerType),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded,
            0>>>
        mContainerTypeSubscribers;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::ContainerManagerController const*, ::std::function<void(::ContainerManagerModel&)>>>
                                                        mInformControllerOfDestructionCallbacks;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 40, ::ContainerScreenContext> mScreenContext;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::shared_ptr<ContainerModel>>> mContainers;
    ::ll::UntypedStorage<8, 88> mOnDynamicContainerChangePublisher;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::shared_ptr<::ContainerModel>>> mContainers;
    ::ll::TypedStorage<8, 128, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnDynamicContainerChangePublisher;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerManagerModel& operator=(ContainerManagerModel const&);
    ContainerManagerModel(ContainerManagerModel const&);
    ContainerManagerModel();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ~ContainerManagerModel() /*override*/;
#endif // @header-generator platform

    virtual bool tick();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void debitPlayerLevels(int);
#else // @header-generator platform
    virtual ::ContainerID getContainerId() const /*override*/;

    virtual void setContainerId(::ContainerID id) /*override*/;

    virtual ::SharedTypes::Legacy::ContainerType getContainerType() const /*override*/;

    virtual void setContainerType(::SharedTypes::Legacy::ContainerType type) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const
        /*override*/;

    virtual void debitPlayerLevels(int levels);
#endif // @header-generator platform

    virtual bool isCreativeMode() const;

    virtual bool isClientSide() const;

    virtual bool isServerAuthoritative() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid(float);
#else // @header-generator platform
    virtual bool isValid(float pickRange);

    virtual void serverInitItemStackIds() /*override*/;

    virtual void
    setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool) /*override*/;

    virtual ::ItemStack const& getFullContainerSlot(int slot, ::FullContainerName const& name) const /*override*/;

    virtual void broadcastChanges() /*override*/;
#endif // @header-generator platform

    virtual ::ContainerScreenContext _postInit() = 0;

    virtual void _onDynamicContainerContentsChanged();
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ContainerManagerModel(::ContainerID, ::Player&);
#else // @header-generator platform
    MCAPI ContainerManagerModel(::ContainerID containerId, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addContainer(std::shared_ptr<ContainerModel>);
#else // @header-generator platform
    MCAPI void _addContainer(::std::shared_ptr<::ContainerModel> containerModel);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenContext _containerScreenContext(::ActorUniqueID const);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ContainerModel> _getContainer(::ContainerEnumName collectionEnumName) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenContext _containerScreenContext(::BlockPos const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addDynamicContainer(::std::shared_ptr<::ContainerModel> model);

    MCAPI ::std::string getBlockDisplayName(::BlockPos const& blockPos) const;

    MCAPI ::HashedString getBlockLocName(::BlockPos const& blockPos) const;

    MCAPI ::HashedString getEntityLocName(::ActorUniqueID const& actorUniqueID) const;

    MCAPI ::std::string getEntityName(::ActorUniqueID const& actorUniqueID) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI void postInit();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ContainerID, ::Player&);
#else // @header-generator platform
    MCAPI void* $ctor(::ContainerID containerId, ::Player& player);
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
    MCNAPI ::ContainerID $getContainerId() const;
#else // @header-generator platform
    MCFOLD bool $tick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerId(::ContainerID);
#else // @header-generator platform
    MCFOLD ::ContainerID $getContainerId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ContainerType $getContainerType() const;
#else // @header-generator platform
    MCAPI void $setContainerId(::ContainerID id);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setContainerType(::SharedTypes::Legacy::ContainerType);
#else // @header-generator platform
    MCFOLD ::SharedTypes::Legacy::ContainerType $getContainerType() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::PubSub::Subscription
        $registerContainerTypeListener(std::function<void(SharedTypes::Legacy::ContainerType)>) const;
#else // @header-generator platform
    MCAPI void $setContainerType(::SharedTypes::Legacy::ContainerType type);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serverInitItemStackIds();
#else // @header-generator platform
    MCAPI ::Bedrock::PubSub::Subscription
    $registerContainerTypeListener(::std::function<void(::SharedTypes::Legacy::ContainerType)> callback) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setFullContainerSlot(int, ::FullContainerName const&, ::ItemStack const&, bool);
#else // @header-generator platform
    MCAPI void $debitPlayerLevels(int levels);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStack const& $getFullContainerSlot(int, ::FullContainerName const&) const;
#else // @header-generator platform
    MCAPI bool $isCreativeMode() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $broadcastChanges();
#else // @header-generator platform
    MCAPI bool $isClientSide() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $tick();
#else // @header-generator platform
    MCAPI bool $isServerAuthoritative() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $debitPlayerLevels(int);
#else // @header-generator platform
    MCAPI bool $isValid(float pickRange);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isCreativeMode() const;
#else // @header-generator platform
    MCAPI void $serverInitItemStackIds();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isClientSide() const;
#else // @header-generator platform
    MCAPI void $setFullContainerSlot(int slot, ::FullContainerName const& name, ::ItemStack const& item, bool);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isServerAuthoritative() const;
#else // @header-generator platform
    MCAPI ::ItemStack const& $getFullContainerSlot(int slot, ::FullContainerName const& name) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid(float);
#else // @header-generator platform
    MCAPI void $broadcastChanges();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_onDynamicContainerContentsChanged();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void $_onDynamicContainerContentsChanged();
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
