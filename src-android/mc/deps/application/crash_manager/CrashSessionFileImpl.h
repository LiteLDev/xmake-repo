#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashSessionFile.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
namespace Bedrock { class SessionInfoManager; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class CrashSessionFileImpl : public ::Bedrock::CrashSessionFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSessionUpdateSubscription;
    ::ll::UntypedStorage<8, 24>                                mFilePath;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrashSessionFileImpl() = default;

    virtual ::Core::PathBuffer<std::string> const& configure(::Core::Path const&);
    // NOLINTEND
};

} // namespace Bedrock
