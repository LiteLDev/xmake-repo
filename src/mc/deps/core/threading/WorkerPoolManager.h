#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/profiler/ThreadFrameType.h"

// auto generated forward declare list
// clang-format off
struct WorkerPoolConfig;
namespace Bedrock { class WorkerPoolHandleInterface; }
// clang-format on

namespace Bedrock {

class WorkerPoolManager : public ::Bedrock::EnableNonOwnerReferences,
#if defined(LL_PLAT_A) // @header-generator platform
                          public ::Bedrock::ImplBase<Bedrock::WorkerPoolManager> {
#else // @header-generator platform
                          public ::Bedrock::ImplBase<::Bedrock::WorkerPoolManager> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~WorkerPoolManager() = default;

#else // @header-generator platform
#endif // @header-generator platform
    virtual void init() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<Bedrock::WorkerPoolHandleInterface> createWorkerPool(std::string_view, ::Core::Profile::ThreadFrameType, ::WorkerPoolConfig const&) = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::Bedrock::WorkerPoolHandleInterface> createWorkerPool(
        ::std::string_view               name,
        ::Core::Profile::ThreadFrameType frameType,
        ::WorkerPoolConfig const&        config
    ) = 0;
#endif // @header-generator platform

    virtual void tick() = 0;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock
