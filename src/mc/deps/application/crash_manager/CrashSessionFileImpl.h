#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/crash_manager/CrashSessionFile.h"
#include "mc/deps/core/file/PathBuffer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock { class SessionInfo; }
namespace Bedrock { class SessionInfoManager; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Core { class Path; }
// clang-format on

namespace Bedrock {

class CrashSessionFileImpl : public ::Bedrock::CrashSessionFile {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSessionUpdateSubscription;
    ::ll::UntypedStorage<8, 24>                                mFilePath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkb9e9ac;
    ::ll::UntypedStorage<8, 32> mUnke8c00b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CrashSessionFileImpl& operator=(CrashSessionFileImpl const&);
    CrashSessionFileImpl(CrashSessionFileImpl const&);
    CrashSessionFileImpl();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CrashSessionFileImpl() = default;
#else // @header-generator platform
    virtual ~CrashSessionFileImpl() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Core::PathBuffer<std::string> const& configure(::Core::Path const&);
#else // @header-generator platform
    virtual ::Core::PathBuffer<::std::string> const& configure(::Core::Path const&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
