#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct InterfaceBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                             name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                       type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                       baseType;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::PropertyBinding>> properties;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>          requiredRuntimeConditions;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>          missingRuntimeConditions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk64d7ec;
    ::ll::UntypedStorage<8, 16> mUnk96316b;
    ::ll::UntypedStorage<8, 16> mUnke35bb1;
    ::ll::UntypedStorage<8, 24> mUnk1e9e9e;
    ::ll::UntypedStorage<8, 24> mUnk5db97e;
    ::ll::UntypedStorage<8, 24> mUnkbb4feb;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    InterfaceBinding& operator=(InterfaceBinding const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    InterfaceBinding(InterfaceBinding const&);
    InterfaceBinding();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI InterfaceBinding(::Scripting::InterfaceBinding const&);
#else // @header-generator platform
    MCNAPI ~InterfaceBinding();
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Scripting::InterfaceBinding const&);
#else // @header-generator platform
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
