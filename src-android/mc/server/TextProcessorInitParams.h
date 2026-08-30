#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/network/services/auth/AuthTokenRetrievalType.h"
#include "mc/network/services/discovery/DiscoveryConfig.h"
#include "mc/server/safety/SafetyServiceTextFilteringConfig.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { struct Url; }
// clang-format on

struct TextProcessorInitParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>                                    mPlayerSafetyServiceTextProcessorConfig;
    ::ll::UntypedStorage<8, 48>                                    mGetDiscoveryUrlCallback;
    ::ll::UntypedStorage<8, 48>                                    mGetAuthCallback;
    ::ll::TypedStorage<4, 8, ::Bedrock::Services::DiscoveryConfig> mDiscoveryConfig;
    ::ll::TypedStorage<8, 24, std::string>                         mServerIdentifier;
    // NOLINTEND

public:
    // prevent constructor by default
    TextProcessorInitParams& operator=(TextProcessorInitParams const&);
    TextProcessorInitParams(TextProcessorInitParams const&);
    TextProcessorInitParams();

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
};
