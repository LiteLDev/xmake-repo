#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class TaskGroup;
#else // @header-generator platform
class IMinecraftEventing;
namespace CodeBuilder { class IRequestHandler; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct RequestHeader; }
namespace Json { class Value; }
#endif // @header-generator platform
// clang-format on

namespace CodeBuilder {

class RequestInterpreter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>    mTaskGroup;
    ::ll::TypedStorage<8, 16, std::shared_ptr<std::string>> mFilePath;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk180610;
    ::ll::UntypedStorage<8, 16> mUnk6fe2ec;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestInterpreter& operator=(RequestInterpreter const&);
    RequestInterpreter(RequestInterpreter const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RequestInterpreter();

    MCNAPI void process(
        ::CodeBuilder::IRequestHandler&     sender,
        ::CodeBuilder::RequestHeader const& header,
        ::Json::Value const&                body,
        ::IMinecraftEventing*               eventing
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _parse(::Json::Value const& command, ::CodeBuilder::CommandRequest& request);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace CodeBuilder
