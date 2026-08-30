#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/network/packet/ItemStackResponseContainerInfo.h"
#include "mc/world/SimpleSparseContainer.h"
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
class ItemStackNetManagerScreen;
class ItemStackNetManagerServer;
class ItemStackRequestAction;
class ItemStackRequestActionCraftHandler;
class ItemStackRequestActionDestroy;
class ItemStackRequestActionDrop;
class ItemStackRequestActionPlace;
class ItemStackRequestActionSwap;
class ItemStackRequestActionTake;
class ItemStackRequestActionTransferBase;
class Player;
class ScreenHandlerBase;
struct ContainerValidationCraftInputs;
struct ContainerValidationResult;
struct ContainerValidationSlotData;
struct FullContainerName;
struct ItemStackRequestHandlerSlotInfo;
struct ItemStackRequestSlotInfo;
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
        ::ll::TypedStorage<1, 1, ::ContainerEnumName const> mContainerName;
        ::ll::UntypedStorage<4, 0>                          mContainerRuntimeId;
        ::ll::UntypedStorage<8, 24>                         mSlots;
        // NOLINTEND

    public:
        // prevent constructor by default
        PlayerLegacyRequestSlotIdAssignment();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PlayerLegacyRequestSlotIdAssignment();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RequestSlotIdAssignment {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, uchar> mSlot;
        ::ll::UntypedStorage<4, 4>      mServerNetId;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestSlotIdAssignment& operator=(RequestSlotIdAssignment const&);
    };

    struct RequestIdAssignments {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mExpireTime;
        ::ll::UntypedStorage<8, 40> mContainers;
        // clang-format on
        // NOLINTEND
    };

    struct ScreenData {
    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    ::ll::TypedStorage<8, 8, ::ItemStackNetManagerServer&> mItemStackNetManager;
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
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionHandler& operator=(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler(ItemStackRequestActionHandler const&);
    ItemStackRequestActionHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ItemStackRequestActionHandler(::ItemStackNetManagerServer&, ::Player&);

    MCNAPI void _addResponseSlotInfo(::ItemStackRequestHandlerSlotInfo const&, ::ItemStack const&);

    MCNAPI void _cacheSlotIdAssigment(
        ::TypedRuntimeId<ContainerRuntimeIdTag, uint, 0> const&,
        uchar const,
        uchar const,
        ::TypedServerNetId<ItemStackNetIdTag, int, 0> const&
    );

    MCNAPI ::ItemStackNetResult _getItemStackNetResult(::ContainerValidationResult const&);

    MCNAPI std::shared_ptr<SimpleSparseContainer> _getOrInitSparseContainer(::FullContainerName const&);

    MCNAPI ::ItemStackNetResult _handleRemove(
        ::ItemStackRequestActionTransferBase const&,
        ::ItemStack&,
        ::ItemStackRequestActionHandler::RemoveType
    );

    MCNAPI ::ItemStackNetResult
    _handleTransfer(::ItemStackRequestActionTransferBase const&, bool const, bool const, bool const);

    MCNAPI ::ItemStackRequestActionHandler::ScreenData* _tryGetCurrentScreenData() const;

    MCNAPI ::ItemStackRequestHandlerSlotInfo _validateRequestSlot(::ItemStackRequestSlotInfo const&, bool, bool);

    MCNAPI std::vector<std::string> const& getFilteredStrings(::TypedClientNetId<ItemStackRequestIdTag, int, 0>) const;

    MCNAPI ::TypedClientNetId<ItemStackRequestIdTag, int, 0> const& getRequestId() const;

    MCNAPI ::ContainerScreenContext const& getScreenContext() const;

    MCNAPI std::vector<std::string> const& getStrings(::TypedClientNetId<ItemStackRequestIdTag, int, 0>) const;

    MCNAPI bool isValidationCraftingImplemented();

    MCNAPI void normalTick();

    MCNAPI std::vector<ItemInstance> tryCraft(std::unique_ptr<ContainerValidationCraftInputs>, uchar const);

    MCNAPI ~ItemStackRequestActionHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ItemStackNetManagerServer&, ::Player&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
