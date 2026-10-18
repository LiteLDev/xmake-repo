#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/persona/ingest/IngestPackIdData.h"
#include "mc/client/services/persona/ingest/IngestPackIdDataCompare.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedAsync.h"

// auto generated forward declare list
// clang-format off
class IDlcBatchModel;
class IPersonaRepository;
class ISkinRepository;
class TaskGroup;
namespace mce { class UUID; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
class IngestTracker {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatchModel>> mDownloadBatchModel;
    ::ll::TypedStorage<8, 8, std::unique_ptr<IDlcBatchModel>> mLoadingBatchModel;
    ::ll::TypedStorage<8, 24, std::set<persona::IngestPackIdData, persona::IngestPackIdDataCompare, std::allocator<persona::IngestPackIdData>>> mPackIdDataList;
    ::ll::UntypedStorage<8, 16> mHandle;
    ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> mThreadRequeueTime;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    IngestTracker& operator=(IngestTracker const&);
    IngestTracker(IngestTracker const&);
    IngestTracker();
};
#else // @header-generator platform
class IngestTracker {};
#endif // @header-generator platform

} // namespace persona
