#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class ChestContainerManagerModel;
class ItemInstance;
struct SlotData;
// clang-format on

class ChestContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ChestContainerManagerModel>> mChestContainerManagerModel;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChestContainerManagerController();

    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);

    virtual void _onItemPlaced(::ItemInstance const&, ::SlotData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ChestContainerManagerController(std::weak_ptr<ChestContainerManagerModel>);

    MCNAPI void _setupCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<ChestContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_onItemAcquired(::ItemInstance const&, ::SlotData const&);

    MCNAPI void $_onItemPlaced(::ItemInstance const&, ::SlotData const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ChestContainerManagerController {};
#endif // @header-generator platform
