#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace CodeBuilder { struct AgentMessage; }
namespace CodeBuilder { struct ChatMessage; }
namespace CodeBuilder { struct CommandMessage; }
namespace CodeBuilder { struct ErrorMessage; }
namespace CodeBuilder { struct EventMessage; }
// clang-format on

#endif // @header-generator platform
namespace CodeBuilder {

#if defined(LL_PLAT_A) // @header-generator platform
class IClient : public ::Bedrock::EnableNonOwnerReferences {};
#else // @header-generator platform
class IClient : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClient() /*override*/ = default;

    virtual void send(::CodeBuilder::AgentMessage const& message) = 0;

    virtual void send(::CodeBuilder::CommandMessage const& message) = 0;

    virtual void send(::CodeBuilder::ErrorMessage const& message) = 0;

    virtual void send(::CodeBuilder::EventMessage const& message) = 0;

    virtual void send(::CodeBuilder::ChatMessage const& message) = 0;
    // NOLINTEND
};
#endif // @header-generator platform

} // namespace CodeBuilder
