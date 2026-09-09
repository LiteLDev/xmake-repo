#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct DataBufferHandleType; }
namespace Scripting { struct PromiseType; }
// clang-format on

namespace Scripting {

class IObjectFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IObjectFactory() = default;

    virtual ::Scripting::StrongTypedObjectHandle<Scripting::PromiseType> makePromise() = 0;

    virtual ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType> makeDataBuffer(uchar const*, ulong, ::entt::meta_type const&) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Scripting
