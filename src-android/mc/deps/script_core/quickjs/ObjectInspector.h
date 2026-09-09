#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/script_engine/scripting/IObjectInspector.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
namespace Scripting { class ResultAny; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting::QuickJS {

class ObjectInspector : public ::Scripting::IObjectInspector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::JSContext*>                    mJsContext;
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectInspector();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ObjectInspector();

    virtual bool isSameObject(::Scripting::ObjectHandle, ::Scripting::ObjectHandle) const;

    virtual bool hasBooleanPropertyValue(::Scripting::ObjectHandle, char const*, bool) const;

    virtual std::optional<Scripting::ResultAny> getPropertyValue(::Scripting::ObjectHandle, char const*, ::entt::meta_type const&) const;

    virtual uint getDataBufferLength(::Scripting::ObjectHandle) const;

    virtual uint getDataBufferByteLength(::Scripting::ObjectHandle) const;

    virtual uchar* getDataBufferBytes(::Scripting::ObjectHandle) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint _getPropertyAsSize(::Scripting::ObjectHandle, char const*) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isSameObject(::Scripting::ObjectHandle, ::Scripting::ObjectHandle) const;

    MCNAPI bool $hasBooleanPropertyValue(::Scripting::ObjectHandle, char const*, bool) const;

    MCNAPI std::optional<Scripting::ResultAny>
           $getPropertyValue(::Scripting::ObjectHandle, char const*, ::entt::meta_type const&) const;

    MCNAPI uint $getDataBufferLength(::Scripting::ObjectHandle) const;

    MCNAPI uint $getDataBufferByteLength(::Scripting::ObjectHandle) const;

    MCNAPI uchar* $getDataBufferBytes(::Scripting::ObjectHandle) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
