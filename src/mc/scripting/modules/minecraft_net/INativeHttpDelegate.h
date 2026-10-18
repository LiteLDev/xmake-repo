#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

namespace ScriptModuleMinecraftNet {

class INativeHttpDelegate {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~INativeHttpDelegate() = default;

    virtual bool isInitialized() const = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void send(::TaskGroup&, ::Bedrock::Http::Request&, std::function<void (const Bedrock::Http::Response&)>) = 0;
    // clang-format on
#else // @header-generator platform
    virtual void send(
        ::TaskGroup&                                            taskGroup,
        ::Bedrock::Http::Request&                               request,
        ::std::function<void(::Bedrock::Http::Response const&)> callback
    ) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
