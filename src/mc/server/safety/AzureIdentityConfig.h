#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Services {

struct AzureIdentityConfig {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> tenantId;
    ::ll::TypedStorage<8, 24, std::string> clientId;
    ::ll::TypedStorage<8, 24, std::string> scope;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkdbc3f9;
    ::ll::UntypedStorage<8, 32> mUnkf13a47;
    ::ll::UntypedStorage<8, 32> mUnk8a183b;
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    AzureIdentityConfig& operator=(AzureIdentityConfig const&);
    AzureIdentityConfig();

#else // @header-generator platform
#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    AzureIdentityConfig& operator=(AzureIdentityConfig const&);
    AzureIdentityConfig();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    AzureIdentityConfig& operator=(AzureIdentityConfig const&);
    AzureIdentityConfig(AzureIdentityConfig const&);
    AzureIdentityConfig();

#endif
#endif // @header-generator platform
public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AzureIdentityConfig(::Bedrock::Services::AzureIdentityConfig const&);

    MCNAPI ~AzureIdentityConfig();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI AzureIdentityConfig(::Bedrock::Services::AzureIdentityConfig const&);

    MCNAPI ~AzureIdentityConfig();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Bedrock::Services::AzureIdentityConfig const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Bedrock::Services::AzureIdentityConfig const&);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::Services
