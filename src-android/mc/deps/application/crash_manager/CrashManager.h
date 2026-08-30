#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
namespace Bedrock { class CrashFileProcessor; }
namespace Bedrock { class CrashTelemetryProcessor; }
namespace Bedrock { class WorkerPoolHandleInterface; }
namespace Bedrock { struct CrashManagerConfig; }
// clang-format on

namespace Bedrock {

class CrashManager : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::ImplBase<Bedrock::CrashManager> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CrashManager() = default;

    virtual void initialize(::Bedrock::CrashManagerConfig const&) = 0;

    virtual void setCrashProcessorForFileType(std::string_view, std::shared_ptr<Bedrock::CrashFileProcessor>) = 0;

    virtual void setCrashTelemetryProcessor(::gsl::not_null<Bedrock::CrashTelemetryProcessor*>) = 0;

    virtual void processCrashes(std::shared_ptr<Bedrock::WorkerPoolHandleInterface>, ::Scheduler&, bool) = 0;

    virtual void notifyCrashed() = 0;

    virtual void notifySystemError(uint, std::string const&) = 0;

    virtual void recordCrashedSession(std::string_view, std::string_view, long) = 0;

    virtual void stopProcessingCrashes() = 0;

    virtual bool isCrashProcessingActive() const = 0;

    virtual std::string const& getCrashDataRoot() const = 0;

    virtual std::string const& getCrashedSessionFileSuffix() const = 0;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[6]> DEFAULT_CRASH_DIRECTORY_NAME();
    // NOLINTEND
};

} // namespace Bedrock
