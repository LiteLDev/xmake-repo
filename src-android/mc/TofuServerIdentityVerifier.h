#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/ServerIdentityAssertionVerifier.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
class TrustStore;
// clang-format on

class TofuServerIdentityVerifier : public ::ServerIdentityAssertionVerifier {
public:
    // TofuServerIdentityVerifier inner types define
    using PromptCallback = ::brstd::move_only_function<Bedrock::Threading::Async<bool>()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mTrustStore;
    ::ll::UntypedStorage<8, 64> mPrompt;
    ::ll::UntypedStorage<8, 16> mTaskGroup;
    // NOLINTEND
};
