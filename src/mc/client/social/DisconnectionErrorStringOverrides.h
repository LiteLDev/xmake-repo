#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DisconnectionErrorStringOverrides {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::optional<std::string>> codewordOverride;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> titleOverride;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> bodyOverride;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> webUrlOverride;
    ::ll::TypedStorage<1, 2, std::optional<bool>>         isReconnectableOverride;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DisconnectionErrorStringOverrides(::DisconnectionErrorStringOverrides const&);

    MCNAPI ::DisconnectionErrorStringOverrides& operator=(::DisconnectionErrorStringOverrides&&);

    MCNAPI ::DisconnectionErrorStringOverrides& operator=(::DisconnectionErrorStringOverrides const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DisconnectionErrorStringOverrides const&);
    // NOLINTEND
};
#else // @header-generator platform
struct DisconnectionErrorStringOverrides {};
#endif // @header-generator platform
