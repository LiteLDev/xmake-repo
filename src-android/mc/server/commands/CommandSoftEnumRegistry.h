#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SoftEnumUpdateType.h"

// auto generated forward declare list
// clang-format off
class CommandRegistry;
// clang-format on

class CommandSoftEnumRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CommandRegistry*> mRegistry;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CommandSoftEnumRegistry(::CommandRegistry*);

    MCNAPI void updateSoftEnum(::SoftEnumUpdateType, std::string const&, std::vector<std::string> const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommandRegistry*);
    // NOLINTEND
};
