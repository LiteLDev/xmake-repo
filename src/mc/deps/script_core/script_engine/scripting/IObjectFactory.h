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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IObjectFactory() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<Scripting::PromiseType> makePromise() = 0;
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::PromiseType> makePromise() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<Scripting::DataBufferHandleType> makeDataBuffer(uchar const*, ulong, ::entt::meta_type const&) = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::Scripting::DataBufferHandleType>
    makeDataBuffer(uchar const* data, uint64 size, ::entt::meta_type const& dataType) = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
