#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/services/auth/AuthTokenRetrievalType.h"
#include "mc/network/services/discovery/DiscoveryConfig.h"
#include "mc/server/safety/SafetyServiceTextFilteringConfig.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

struct TextProcessorInitParams {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 96>                                    mPlayerSafetyServiceTextProcessorConfig;
    ::ll::UntypedStorage<8, 48>                                    mGetDiscoveryUrlCallback;
    ::ll::UntypedStorage<8, 48>                                    mGetAuthCallback;
    ::ll::TypedStorage<4, 8, ::Bedrock::Services::DiscoveryConfig> mDiscoveryConfig;
    ::ll::TypedStorage<8, 24, std::string>                         mServerIdentifier;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 104> mUnk6c820b;
    ::ll::UntypedStorage<8, 64>  mUnk208261;
    ::ll::UntypedStorage<8, 64>  mUnk5d0ec6;
    ::ll::UntypedStorage<4, 8>   mUnk4d3f52;
    ::ll::UntypedStorage<8, 32>  mUnkcb05cd;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TextProcessorInitParams& operator=(TextProcessorInitParams const&);
    TextProcessorInitParams(TextProcessorInitParams const&);
    TextProcessorInitParams();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextProcessorInitParams();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
