#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerValidationCaller.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Container;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerScreenContext;
#if defined(LL_PLAT_A) // @header-generator platform
class ContainerScreenValidatorBase;
#else // @header-generator platform
#endif // @header-generator platform
class ContainerValidationBase;
struct FullContainerName;
// clang-format on

class ContainerValidatorFactory {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::shared_ptr<const ContainerValidationBase> createContainerValidator(
        ::FullContainerName const&,
        ::ContainerScreenContext const&,
        ::ContainerValidationCaller const
#else // @header-generator platform
    MCAPI static ::std::shared_ptr<::ContainerValidationBase const> createContainerValidator(
        ::FullContainerName const&      containerId,
        ::ContainerScreenContext const& screenContext,
        ::ContainerValidationCaller     caller
#endif // @header-generator platform
    );
    // NOLINTEND
};
