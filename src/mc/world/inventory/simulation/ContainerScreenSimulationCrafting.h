#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/simulation/ContainerScreenSimulation.h"

// auto generated forward declare list
// clang-format off
struct ContainerScreenActionResult;
struct ContainerValidationCraftInputs;
struct ContainerValidationCraftResult;
// clang-format on

class ContainerScreenSimulationCrafting : public ::ContainerScreenSimulation {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ContainerScreenActionResult tryCraft(std::unique_ptr<ContainerValidationCraftInputs>);
#else // @header-generator platform
    virtual ::ContainerScreenActionResult tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs);
#endif // @header-generator platform

    virtual ::ContainerValidationCraftResult getCraftPreview();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ContainerScreenActionResult $tryCraft(std::unique_ptr<ContainerValidationCraftInputs>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::ContainerScreenActionResult $tryCraft(::std::unique_ptr<::ContainerValidationCraftInputs> craftInputs);
#endif


#endif // @header-generator platform
    // NOLINTEND
};
