#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/IContainerTransfer.h"

// auto generated forward declare list
// clang-format off
class ContainerManagerController;
struct ContainerScreenActionResult;
struct ContainerTransferScope;
// clang-format on

class ContainerTransferClient : public ::IContainerTransfer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<ContainerManagerController>> mContainerManagerController;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerTransferClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContainerTransferClient();

    virtual std::unique_ptr<ContainerTransferScope> preTransfer();

    virtual void postTransfer(::ContainerTransferScope*, ::ContainerScreenActionResult const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ContainerTransferClient(std::weak_ptr<ContainerManagerController>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::weak_ptr<ContainerManagerController>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<ContainerTransferScope> $preTransfer();

    MCNAPI void $postTransfer(::ContainerTransferScope*, ::ContainerScreenActionResult const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
