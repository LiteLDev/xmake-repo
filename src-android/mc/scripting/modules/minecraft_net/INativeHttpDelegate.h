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
    // clang-format off
    virtual ~INativeHttpDelegate() = default;

    virtual bool isInitialized() const = 0;

    virtual void send(::TaskGroup&, ::Bedrock::Http::Request&, std::function<void (const Bedrock::Http::Response&)>) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
