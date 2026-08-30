#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
class Container;
class ContainerScreenContext;
class ContainerScreenValidatorBase;
class ContainerValidationBase;
struct FullContainerName;
// clang-format on

class ContainerValidatorFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::shared_ptr<const ContainerValidationBase> createContainerValidator(
        ::FullContainerName const&,
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller const
    );
    // NOLINTEND
};
