#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/AgentActionType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

struct AgentMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::AgentActionType> action;
    ::ll::TypedStorage<8, 24, std::string>      requestId;
    ::ll::UntypedStorage<8, 16>                 body;
    // NOLINTEND
};

} // namespace CodeBuilder
