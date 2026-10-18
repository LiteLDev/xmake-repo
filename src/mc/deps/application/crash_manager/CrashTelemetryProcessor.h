#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SessionInfo; }
namespace Bedrock { struct CrashUploadStatus; }
// clang-format on

namespace Bedrock {

class CrashTelemetryProcessor {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CrashTelemetryProcessor();
#else // @header-generator platform
    virtual ~CrashTelemetryProcessor() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendCrashTelemetryNow(std::shared_ptr<Bedrock::SessionInfo>) = 0;
#else // @header-generator platform
    virtual void sendCrashTelemetryNow(::std::shared_ptr<::Bedrock::SessionInfo> session) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addCrashTelemetryToBatch(std::shared_ptr<Bedrock::SessionInfo>) = 0;
#else // @header-generator platform
    virtual void addCrashTelemetryToBatch(::std::shared_ptr<::Bedrock::SessionInfo> session) = 0;
#endif // @header-generator platform

    virtual void sendBatchedCrashTelemetry() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    virtual void sendCrashStatusTelemetry(::Bedrock::CrashUploadStatus const& status) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
