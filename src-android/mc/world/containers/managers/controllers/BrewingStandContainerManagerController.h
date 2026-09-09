#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class BrewingStandContainerManagerModel;
class ItemInstance;
struct SlotData;
// clang-format on

class BrewingStandContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<BrewingStandContainerManagerModel>> mBrewingContainerManagerModel;
    // NOLINTEND

public:
    // prevent constructor by default
    BrewingStandContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BrewingStandContainerManagerController();

    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BrewingStandContainerManagerController(std::weak_ptr<BrewingStandContainerManagerModel>);

    MCNAPI int getBrewProgress(int);

    MCNAPI int getBubbleProgress(int);

    MCNAPI int getFuelProgress(int);

    MCNAPI bool isFinished(int&, int&, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<BrewingStandContainerManagerModel>);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
