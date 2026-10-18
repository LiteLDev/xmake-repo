#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/network/packet/AgentActionType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace CodeBuilder {

struct AgentMessage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::AgentActionType> action;
    ::ll::TypedStorage<8, 24, std::string>      requestId;
    ::ll::UntypedStorage<8, 16>                 body;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk5dde42;
    ::ll::UntypedStorage<8, 32> mUnkbbe0fa;
    ::ll::UntypedStorage<8, 16> mUnkb32a4b;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AgentMessage& operator=(AgentMessage const&);
    AgentMessage(AgentMessage const&);
    AgentMessage();
#endif // @header-generator platform
};

} // namespace CodeBuilder
