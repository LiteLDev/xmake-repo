#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/actor/player/Player.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/network/packet/ItemStackResponseContainerInfo.h"
#include "mc/world/SimpleSparseContainer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/TypedRuntimeId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ContainerScreenValidation;
class EntityContext;
class ItemInstance;
class ItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackNetManagerScreen;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackNetManagerServer;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestAction;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackRequestActionCraftHandler;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemStackRequestActionDestroy;
class ItemStackRequestActionDrop;
class ItemStackRequestActionPlace;
class ItemStackRequestActionSwap;
class ItemStackRequestActionTake;
#else // @header-generator platform
#endif // @header-generator platform
class ItemStackRequestActionTransferBase;
class Player;
class ScreenHandlerBase;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class SimpleSparseContainer;
struct ContainerRuntimeIdTag;
#endif // @header-generator platform
struct ContainerValidationCraftInputs;
#if defined(LL_PLAT_A) // @header-generator platform
struct ContainerValidationResult;
struct ContainerValidationSlotData;
#else // @header-generator platform
#endif // @header-generator platform
struct FullContainerName;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemStackLegacyRequestIdTag;
struct ItemStackNetIdTag;
#endif // @header-generator platform
struct ItemStackRequestHandlerSlotInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemStackRequestIdTag;
#endif // @header-generator platform
struct ItemStackRequestSlotInfo;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct ItemStackResponseContainerInfo;
#endif // @header-generator platform
// clang-format on

class ItemStackRequestActionHandler {
public:
    // ItemStackRequestActionHandler inner types declare
    // clang-format off
    struct PlayerLegacyRequestSlotIdAssignment;
    struct RequestSlotIdAssignment;
    struct RequestIdAssignments;
    struct ScreenData;
    // clang-format on

    // ItemStackRequestActionHandler inner types define
    enum class RemoveType : int {
        Drop         = 0,
        DropRandomly = 1,
        Destroy      = 2,
        Consume      = 3,
    };

    struct PlayerLegacyRequestSlotIdAssignment {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, ::ContainerEnumName const> mContainerName;
        ::ll::UntypedStorage<4, 0>                          mContainerRuntimeId;
        ::ll::UntypedStorage<8, 24>                         mSlots;
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, ::ContainerEnumName const>  mContainerName;
        ::ll::TypedStorage<4, 4, ::ContainerRuntimeId const> mContainerRuntimeId;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemStackLegacyRequestId, ::ItemStackNetId>>> mSlots;
#endif // @header-generator platform
        // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // prevent constructor by default
        PlayerLegacyRequestSlotIdAssignment();

#else // @header-generator platform
#ifdef LL_PLAT_S
#else // LL_PLAT_C
    public:
        // prevent constructor by default
        PlayerLegacyRequestSlotIdAssignment();

#endif
#endif // @header-generator platform
    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~PlayerLegacyRequestSlotIdAssignment();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI PlayerLegacyRequestSlotIdAssignment(::ContainerEnumName containerName, ::Container& container);
#endif
#endif // @header-generator platform
        // NOLINTEND

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // destructor thunk
#else // @header-generator platform
        // constructor thunks
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
        MCAPI void* $ctor(::ContainerEnumName containerName, ::Container& container);
#endif
#endif // @header-generator platform
        // NOLINTEND
    };

    struct RequestSlotIdAssignment {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, uchar> mSlot;
        ::ll::UntypedStorage<4, 4>      mServerNetId;
#else // @header-generator platform
        ::ll::TypedStorage<1, 1, uchar>            mSlot;
        ::ll::TypedStorage<4, 4, ::ItemStackNetId> mServerNetId;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        RequestSlotIdAssignment& operator=(RequestSlotIdAssignment const&);
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct RequestIdAssignments {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mExpireTime;
        ::ll::UntypedStorage<8, 40> mContainers;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mExpireTime;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<
                ::ContainerRuntimeId,
                ::std::unordered_map<uchar, ::ItemStackRequestActionHandler::RequestSlotIdAssignment>>>
            mContainers;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ScreenData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<ItemStackRequestActionCraftHandler>> mCraftRequestHandler;
        ::ll::TypedStorage<8, 8, std::unique_ptr<ScreenHandlerBase>>                  mScreenHandler;
        ::ll::UntypedStorage<8, 40>                                                   mRuntimeIdSparseContainerMap;
        ::ll::UntypedStorage<8, 40>                                                   mRecentRequests;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScreenData& operator=(ScreenData const&);
        ScreenData(ScreenData const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ScreenData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackRequestActionCraftHandler>> mCraftRequestHandler;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScreenHandlerBase>>                  mScreenHandler;
        ::ll::
            TypedStorage<8, 64, ::std::unordered_map<::ContainerRuntimeId, ::std::shared_ptr<::SimpleSparseContainer>>>
                mRuntimeIdSparseContainerMap;
        ::ll::TypedStorage<
            8,
            64,
            ::std::unordered_map<::ItemStackRequestId, ::ItemStackRequestActionHandler::RequestIdAssignments>>
            mRecentRequests;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Player&>                    mPlayer;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerServer&> mItemStackNetManager;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 4> mPlayerArmorContainerRuntimeId;
    ::ll::UntypedStorage<4, 4> mPlayerHandContainerRuntimeId;
    ::ll::UntypedStorage<4, 8> mPlayerUIContainerRuntimeId;
    ::ll::TypedStorage<8, 96, std::array<ItemStackRequestActionHandler::PlayerLegacyRequestSlotIdAssignment, 3>> mPlayerLegacyRequests;
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastTime;
    ::ll::UntypedStorage<1, 24> mCurrentRequestScreen;
    ::ll::UntypedStorage<8, 16> mClientRequestId;
    ::ll::TypedStorage<8, 24, std::vector<ItemStackResponseContainerInfo>> mResponseContainerInfos;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::vector<std::string>>> mFilteredStrings;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::vector<std::string>>> mStrings;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ContainerScreenValidation>> mScreenValidation;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::ContainerRuntimeId const>   mPlayerArmorContainerRuntimeId;
    ::ll::TypedStorage<4, 4, ::ContainerRuntimeId const>   mPlayerHandContainerRuntimeId;
    ::ll::TypedStorage<4, 4, ::ContainerRuntimeId const>   mPlayerUIContainerRuntimeId;
    ::ll::TypedStorage<8, 96, ::std::array<::ItemStackRequestActionHandler::PlayerLegacyRequestSlotIdAssignment, 3>>
                                                                                       mPlayerLegacyRequests;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                  mLastTime;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                              mCurrentRequestScreen;
    ::ll::TypedStorage<8, 16, ::ItemStackRequestId>                                    mClientRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStackResponseContainerInfo>>         mResponseContainerInfos;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::vector<::std::string>>> mFilteredStrings;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::vector<::std::string>>> mStrings;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContainerScreenValidation>>           mScreenValidation;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionHandler& operator=(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ItemStackRequestActionHandler(::ItemStackNetManagerServer&, ::Player&);
#else // @header-generator platform
    MCAPI ItemStackRequestActionHandler(::ItemStackNetManagerServer& itemStackNetManager, ::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addResponseSlotInfo(::ItemStackRequestHandlerSlotInfo const&, ::ItemStack const&);
#else // @header-generator platform
    MCAPI void _addResponseSlotInfo(::ItemStackRequestHandlerSlotInfo const& slotInfo, ::ItemStack const& item);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _cacheSlotIdAssigment(
        ::TypedRuntimeId<ContainerRuntimeIdTag, uint, 0> const&,
        uchar const,
        uchar const,
        ::TypedServerNetId<ItemStackNetIdTag, int, 0> const&
#else // @header-generator platform
    MCAPI void _cacheSlotIdAssigment(
        ::ContainerRuntimeId const& containerRuntimeId,
        uchar                       requestSlot,
        uchar                       slot,
        ::ItemStackNetId const&     serverNetId
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult _getItemStackNetResult(::ContainerValidationResult const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::SimpleSparseContainer>
    _getOrInitSparseContainer(::FullContainerName const& openContainerId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<SimpleSparseContainer> _getOrInitSparseContainer(::FullContainerName const&);

    MCNAPI ::ItemStackNetResult _handleRemove(
        ::ItemStackRequestActionTransferBase const&,
        ::ItemStack&,
        ::ItemStackRequestActionHandler::RemoveType
#else // @header-generator platform
    MCAPI ::ItemStackNetResult _handleRemove(
        ::ItemStackRequestActionTransferBase const& requestAction,
        ::ItemStack&                                removedItem,
        ::ItemStackRequestActionHandler::RemoveType removeType
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackNetResult
    _handleTransfer(::ItemStackRequestActionTransferBase const&, bool const, bool const, bool const);
#else // @header-generator platform
    MCAPI ::ItemStackNetResult _handleTransfer(
        ::ItemStackRequestActionTransferBase const& requestAction,
        bool const                                  isSrcHintSlot,
        bool const                                  isDstHintSlot,
        bool const                                  isSwap
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackRequestActionHandler::ScreenData* _tryGetCurrentScreenData() const;
#else // @header-generator platform
    MCAPI ::ItemStackRequestActionHandler::ScreenData* _tryGetCurrentScreenData() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ItemStackRequestHandlerSlotInfo _validateRequestSlot(::ItemStackRequestSlotInfo const&, bool, bool);
#else // @header-generator platform
    MCAPI ::ItemStackRequestHandlerSlotInfo
    _validateRequestSlot(::ItemStackRequestSlotInfo const& requestSlotInfo, bool isItemRequired, bool isHintSlot);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> const& getFilteredStrings(::TypedClientNetId<ItemStackRequestIdTag, int, 0>) const;
#else // @header-generator platform
    MCAPI void addStrings(::ItemStackRequestId requestId, ::std::vector<::std::string> strings);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const& getRequestId() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::std::string> const& getFilteredStrings(::ItemStackRequestId requestId) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenContext const& getScreenContext() const;
#else // @header-generator platform
    MCAPI ::ContainerScreenContext const& getScreenContext() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> const& getStrings(::TypedClientNetId<ItemStackRequestIdTag, int, 0>) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::std::string> const& getStrings(::ItemStackRequestId requestId) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool isValidationCraftingImplemented();
#else // @header-generator platform
    MCAPI void normalTick();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void normalTick();
#else // @header-generator platform
    MCAPI ::std::vector<::ItemInstance>
    tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs, uchar numCrafts);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<ItemInstance> tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);

    MCNAPI ~ItemStackRequestActionHandler();
#else // @header-generator platform
    MCAPI ~ItemStackRequestActionHandler();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ItemStackNetManagerServer&, ::Player&);
#else // @header-generator platform
    MCAPI void* $ctor(::ItemStackNetManagerServer& itemStackNetManager, ::Player& player);
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
};
