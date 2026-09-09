#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/SentryUploadManager.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct PlatformRuntimeInfo; }
namespace Bedrock::Http { class Response; }
namespace Core { class Path; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Bedrock {

class SentryUploadManagerImpl : public ::Bedrock::SentryUploadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mMinidumpUploadUri;
    ::ll::TypedStorage<8, 24, std::string> mMinidumpUploadUriWithSentryKey;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SentryUploadManagerImpl();

    virtual std::string getParameters(::Bedrock::SessionInfo const&, ::Bedrock::PlatformRuntimeInfo const*) const;

    virtual ::Bedrock::Threading::Async<Bedrock::Result<void, std::error_code>> uploadMinidump(::TaskGroup&, ::Core::Path const&, std::string const&) const;

    virtual std::string const& getMinidumpUploadUri() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryUploadManagerImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getParameters(::Bedrock::SessionInfo const&, ::Bedrock::PlatformRuntimeInfo const*) const;

    MCNAPI ::Bedrock::Threading::Async<Bedrock::Result<void, std::error_code>>
    $uploadMinidump(::TaskGroup&, ::Core::Path const&, std::string const&) const;

    MCNAPI std::string const& $getMinidumpUploadUri() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
