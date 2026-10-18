#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/IObjectInspector.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
struct JSContext;
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { class ResultAny; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting::QuickJS {

class ObjectInspector : public ::Scripting::IObjectInspector {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::JSContext*>                    mJsContext;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkfcc24f;
    ::ll::UntypedStorage<8, 8>  mUnk78ab83;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ObjectInspector& operator=(ObjectInspector const&);
    ObjectInspector(ObjectInspector const&);
#endif // @header-generator platform
    ObjectInspector();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ObjectInspector();
#else // @header-generator platform
    virtual ~ObjectInspector() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSameObject(::Scripting::ObjectHandle, ::Scripting::ObjectHandle) const;
#else // @header-generator platform
    virtual bool isSameObject(::Scripting::ObjectHandle handleA, ::Scripting::ObjectHandle handleB) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasBooleanPropertyValue(::Scripting::ObjectHandle, char const*, bool) const;
#else // @header-generator platform
    virtual bool hasBooleanPropertyValue(::Scripting::ObjectHandle handle, char const* name, bool expectedValue) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Scripting::ResultAny> getPropertyValue(::Scripting::ObjectHandle, char const*, ::entt::meta_type const&) const;
#else // @header-generator platform
    virtual ::std::optional<::Scripting::ResultAny>
    getPropertyValue(::Scripting::ObjectHandle handle, char const* name, ::entt::meta_type const& expectedType) const
        /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getDataBufferLength(::Scripting::ObjectHandle) const;
#else // @header-generator platform
    virtual uint getDataBufferLength(::Scripting::ObjectHandle handle) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uint getDataBufferByteLength(::Scripting::ObjectHandle) const;
#else // @header-generator platform
    virtual uint getDataBufferByteLength(::Scripting::ObjectHandle handle) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual uchar* getDataBufferBytes(::Scripting::ObjectHandle) const;
    // clang-format on
#else // @header-generator platform
    virtual uchar* getDataBufferBytes(::Scripting::ObjectHandle handle) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint _getPropertyAsSize(::Scripting::ObjectHandle, char const*) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI uint _getPropertyAsSize(::Scripting::ObjectHandle handle, char const* propertyName) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isSameObject(::Scripting::ObjectHandle, ::Scripting::ObjectHandle) const;
#else // @header-generator platform
    MCNAPI bool $isSameObject(::Scripting::ObjectHandle handleA, ::Scripting::ObjectHandle handleB) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasBooleanPropertyValue(::Scripting::ObjectHandle, char const*, bool) const;
#else // @header-generator platform
    MCNAPI bool $hasBooleanPropertyValue(::Scripting::ObjectHandle handle, char const* name, bool expectedValue) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::ResultAny>
           $getPropertyValue(::Scripting::ObjectHandle, char const*, ::entt::meta_type const&) const;
#else // @header-generator platform
    MCNAPI ::std::optional<::Scripting::ResultAny>
    $getPropertyValue(::Scripting::ObjectHandle handle, char const* name, ::entt::meta_type const& expectedType) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getDataBufferLength(::Scripting::ObjectHandle) const;
#else // @header-generator platform
    MCNAPI uint $getDataBufferLength(::Scripting::ObjectHandle handle) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint $getDataBufferByteLength(::Scripting::ObjectHandle) const;
#else // @header-generator platform
    MCNAPI uint $getDataBufferByteLength(::Scripting::ObjectHandle handle) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uchar* $getDataBufferBytes(::Scripting::ObjectHandle) const;
    // NOLINTEND
#else // @header-generator platform
    MCNAPI uchar* $getDataBufferBytes(::Scripting::ObjectHandle handle) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::QuickJS
