#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TaskQueueBase; }
namespace webrtc { struct TaskQueueDeleter; }
// clang-format on

namespace webrtc {

class TaskQueueFactory {
public:
    // TaskQueueFactory inner types define
    enum class Priority : int {
        Normal = 0,
        High   = 1,
        Low    = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TaskQueueFactory() = default;

    virtual ::std::unique_ptr<::webrtc::TaskQueueBase, ::webrtc::TaskQueueDeleter>
    CreateTaskQueue(::std::string_view name, ::webrtc::TaskQueueFactory::Priority priority) const = 0;
    // NOLINTEND
};

} // namespace webrtc
#endif // @header-generator platform
