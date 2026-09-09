#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct AzureIdentityConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> tenantId;
    ::ll::TypedStorage<8, 24, std::string> clientId;
    ::ll::TypedStorage<8, 24, std::string> scope;
    // NOLINTEND

public:
    // prevent constructor by default
    AzureIdentityConfig& operator=(AzureIdentityConfig const&);
    AzureIdentityConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AzureIdentityConfig(::Bedrock::Services::AzureIdentityConfig const&);

    MCNAPI ~AzureIdentityConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::Services::AzureIdentityConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Services
