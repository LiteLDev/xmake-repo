#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/CompoundContainerType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CraftableCompounds;
class LabTableContainerManagerModel;
// clang-format on

class LabTableContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<LabTableContainerManagerModel>> mModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CraftableCompounds>>           mCraftableCompounds;
    ::ll::TypedStorage<1, 1, ::CompoundContainerType>                       mResultContainer;
    // NOLINTEND

public:
    // prevent constructor by default
    LabTableContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LabTableContainerManagerController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LabTableContainerManagerController(std::weak_ptr<LabTableContainerManagerModel>);

    MCNAPI void _setupCallbacks();

    MCNAPI void combineInputs(::BlockPos const&);

    MCNAPI ::CompoundContainerType getResultContainer();

    MCNAPI bool hasInput();

    MCNAPI bool isStillValid(float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<LabTableContainerManagerModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
