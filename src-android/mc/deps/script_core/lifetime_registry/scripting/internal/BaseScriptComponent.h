#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandleValue.h"
#include "mc/deps/script_core/lifetime_registry/scripting/RetrievedHandleType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IScriptRef; }
namespace Scripting { class LifetimeRegistry; }
// clang-format on

namespace Scripting::internal {

struct BaseScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> isTrackedPointer;
    ::ll::TypedStorage<1, 1, bool> customFn;
    ::ll::TypedStorage<8, 8, ::entt::meta_any(*)(::entt::basic_registry<Scripting::ObjectHandleValue, std::allocator<Scripting::ObjectHandleValue>>&, ::Scripting::ObjectHandleValue)> fetchFunction;
    ::ll::UntypedStorage<8, 16> typedHandleFunction;
    ::ll::UntypedStorage<8, 48> getTypeFn;
    ::ll::TypedStorage<8, 8, ::entt::meta_type const*> scriptObjType;
    ::ll::TypedStorage<4, 4, uint> scriptObjSize;
    ::ll::TypedStorage<4, 4, uint> refCount;
    ::ll::UntypedStorage<8, 16> scriptRef;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::entt::meta_any asTypedObjectHandle(
        ::Scripting::ObjectHandle,
        ::Scripting::RetrievedHandleType,
        std::variant<std::monostate, Scripting::LifetimeRegistry*>&&
    );

    MCNAPI ::entt::meta_any fetch(
        ::entt::basic_registry<Scripting::ObjectHandleValue, std::allocator<Scripting::ObjectHandleValue>>&,
        ::Scripting::ObjectHandleValue
    ) const;
    // NOLINTEND
};

} // namespace Scripting::internal
