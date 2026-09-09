#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/IResourceLoadEventing.h"

// auto generated forward declare list
// clang-format off
class IEventRecorder;
// clang-format on

namespace ResourceLoadEventing {

class ResourceLoadEventingImpl : public ::IResourceLoadEventing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<IEventRecorder>>> mRecorder;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, float>>>      mProgressHandlerTimes;
    ::ll::TypedStorage<1, 1, bool>                                             mProgressHandlersComplete;
    // NOLINTEND
};

} // namespace ResourceLoadEventing
