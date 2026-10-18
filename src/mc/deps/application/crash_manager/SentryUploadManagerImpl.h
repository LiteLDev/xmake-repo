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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::Http { class Response; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace Bedrock {

class SentryUploadManagerImpl : public ::Bedrock::SentryUploadManager {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mMinidumpUploadUri;
    ::ll::TypedStorage<8, 24, std::string> mMinidumpUploadUriWithSentryKey;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk7943f1;
    ::ll::UntypedStorage<8, 32> mUnke384dd;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SentryUploadManagerImpl& operator=(SentryUploadManagerImpl const&);
    SentryUploadManagerImpl(SentryUploadManagerImpl const&);
    SentryUploadManagerImpl();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~SentryUploadManagerImpl();
#else // @header-generator platform
    virtual ::std::string getParameters(::Bedrock::SessionInfo const&, ::Bedrock::PlatformRuntimeInfo const*) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getParameters(::Bedrock::SessionInfo const&, ::Bedrock::PlatformRuntimeInfo const*) const;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<::Bedrock::Result<void>>
    uploadMinidump(::TaskGroup&, ::Core::Path const&, ::std::string const&) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::std::string const& getMinidumpUploadUri() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
