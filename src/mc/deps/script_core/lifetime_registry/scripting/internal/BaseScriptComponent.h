#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/ObjectHandleValue.h"
#include "mc/deps/script_core/lifetime_registry/scripting/RetrievedHandleType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IScriptRef; }
namespace Scripting { class LifetimeRegistry; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting::internal {

struct BaseScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<1, 1>  mUnka330d8;
    ::ll::UntypedStorage<1, 1>  mUnke616b9;
    ::ll::UntypedStorage<8, 8>  mUnk3eb531;
    ::ll::UntypedStorage<8, 8>  mUnkab9030;
    ::ll::UntypedStorage<8, 64> mUnkecd3c1;
    ::ll::UntypedStorage<8, 8>  mUnkabf9b0;
    ::ll::UntypedStorage<4, 4>  mUnkb11791;
    ::ll::UntypedStorage<4, 4>  mUnk9bc6bc;
    ::ll::UntypedStorage<8, 8>  mUnk380bc2;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    // prevent constructor by default
    BaseScriptComponent& operator=(BaseScriptComponent const&);
    BaseScriptComponent(BaseScriptComponent const&);
    BaseScriptComponent();
#endif // @header-generator platform
};

} // namespace Scripting::internal
