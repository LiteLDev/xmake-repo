#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct PlatformRuntimeInfo; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class SentryUploadManager : public ::Bedrock::EnableNonOwnerReferences,
#if defined(LL_PLAT_A) // @header-generator platform
                            public ::Bedrock::ImplBase<Bedrock::SentryUploadManager> {
public:
    // SentryUploadManager inner types define
    using UploadResult = ::Bedrock::Result<void, std::error_code>;

#else // @header-generator platform
                            public ::Bedrock::ImplBase<::Bedrock::SentryUploadManager> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SentryUploadManager() = default;
#else // @header-generator platform
    virtual ::std::string getParameters(::Bedrock::SessionInfo const&, ::Bedrock::PlatformRuntimeInfo const*) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getParameters(::Bedrock::SessionInfo const&, ::Bedrock::PlatformRuntimeInfo const*) const = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Result<void>>
    uploadMinidump(::TaskGroup&, ::Core::Path const&, ::std::string const&) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<Bedrock::Result<void, std::error_code>> uploadMinidump(::TaskGroup&, ::Core::Path const&, std::string const&) const = 0;

    virtual std::string const& getMinidumpUploadUri() const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::string const& getMinidumpUploadUri() const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
