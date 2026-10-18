#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
struct ContainerTransferScope;
// clang-format on

class IContainerTransfer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContainerTransfer() = default;

    virtual std::unique_ptr<ContainerTransferScope> preTransfer() = 0;

    virtual void postTransfer(::ContainerTransferScope*, ::ContainerScreenActionResult const&) = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IContainerTransfer {};
#endif // @header-generator platform
