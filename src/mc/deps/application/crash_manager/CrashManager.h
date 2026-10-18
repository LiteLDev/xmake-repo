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

#if defined(LL_PLAT_A) // @header-generator platform
class CrashManager : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::ImplBase<Bedrock::CrashManager> {
#else // @header-generator platform
class CrashManager : public ::Bedrock::EnableNonOwnerReferences, public ::Bedrock::ImplBase<::Bedrock::CrashManager> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CrashManager() = default;
#else // @header-generator platform
    virtual void initialize(::Bedrock::CrashManagerConfig const& config) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void initialize(::Bedrock::CrashManagerConfig const&) = 0;
#else // @header-generator platform
    virtual void setCrashProcessorForFileType(
        ::std::string_view                               fileExtension,
        ::std::shared_ptr<::Bedrock::CrashFileProcessor> processor
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCrashProcessorForFileType(std::string_view, std::shared_ptr<Bedrock::CrashFileProcessor>) = 0;
#else // @header-generator platform
    virtual void setCrashTelemetryProcessor(::gsl::not_null<::Bedrock::CrashTelemetryProcessor*> processor) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setCrashTelemetryProcessor(::gsl::not_null<Bedrock::CrashTelemetryProcessor*>) = 0;

    virtual void processCrashes(std::shared_ptr<Bedrock::WorkerPoolHandleInterface>, ::Scheduler&, bool) = 0;
#else // @header-generator platform
    virtual void processCrashes(
        ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> workerPool,
        ::Scheduler&                                            scheduler,
        bool                                                    isNetworkAvailable
    ) = 0;
#endif // @header-generator platform

    virtual void notifyCrashed() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void notifySystemError(uint, std::string const&) = 0;
#else // @header-generator platform
    virtual void notifySystemError(uint errorCode, ::std::string const& errorMessage) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void recordCrashedSession(std::string_view, std::string_view, long) = 0;
#else // @header-generator platform
    virtual void
    recordCrashedSession(::std::string_view sessionId, ::std::string_view serializedSession, int64 crashTime) = 0;
#endif // @header-generator platform

    virtual void stopProcessingCrashes() = 0;

    virtual bool isCrashProcessingActive() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getCrashDataRoot() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getCrashDataRoot() const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getCrashedSessionFileSuffix() const = 0;
#else // @header-generator platform
    virtual ::std::string const& getCrashedSessionFileSuffix() const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::std::add_lvalue_reference_t<char const[6]> DEFAULT_CRASH_DIRECTORY_NAME();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::std::add_lvalue_reference_t<char const[6]> DEFAULT_CRASH_DIRECTORY_NAME();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
