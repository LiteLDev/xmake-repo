#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ResultAny; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting {

class IObjectInspector {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~IObjectInspector() = default;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSameObject(::Scripting::ObjectHandle, ::Scripting::ObjectHandle) const = 0;
#else // @header-generator platform
    virtual bool isSameObject(::Scripting::ObjectHandle handleA, ::Scripting::ObjectHandle handleB) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBooleanPropertyValue(::Scripting::ObjectHandle, char const*, bool) const = 0;
#else // @header-generator platform
    virtual bool
    hasBooleanPropertyValue(::Scripting::ObjectHandle handle, char const* name, bool expectedValue) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::ResultAny> getPropertyValue(::Scripting::ObjectHandle, char const*, ::entt::meta_type const&) const = 0;
#else // @header-generator platform
    virtual ::std::optional<::Scripting::ResultAny> getPropertyValue(
        ::Scripting::ObjectHandle handle,
        char const*               name,
        ::entt::meta_type const&  expectedType
    ) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getDataBufferLength(::Scripting::ObjectHandle) const = 0;
#else // @header-generator platform
    virtual uint getDataBufferLength(::Scripting::ObjectHandle handle) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getDataBufferByteLength(::Scripting::ObjectHandle) const = 0;
#else // @header-generator platform
    virtual uint getDataBufferByteLength(::Scripting::ObjectHandle handle) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar* getDataBufferBytes(::Scripting::ObjectHandle) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual uchar* getDataBufferBytes(::Scripting::ObjectHandle handle) const = 0;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
