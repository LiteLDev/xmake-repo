#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ClassBinding.h"
#include "mc/deps/script_core/binding_type/scripting/EnumBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ErrorBinding.h"
#include "mc/deps/script_core/binding_type/scripting/FunctionBinding.h"
#include "mc/deps/script_core/binding_type/scripting/InterfaceBinding.h"
#include "mc/deps/script_core/binding_type/scripting/ObjectFactory.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct GlobalBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ClassBinding>>     classBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::InterfaceBinding>> interfaceBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ErrorBinding>>     errorBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::EnumBinding>>      enumBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>>  functionBindings;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ObjectFactory>>    objectFactories;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk6790fa;
    ::ll::UntypedStorage<8, 24> mUnkc171fb;
    ::ll::UntypedStorage<8, 24> mUnk6497e0;
    ::ll::UntypedStorage<8, 24> mUnkf3c3d0;
    ::ll::UntypedStorage<8, 24> mUnk3bb4a0;
    ::ll::UntypedStorage<8, 24> mUnkf8d465;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    GlobalBinding& operator=(GlobalBinding const&);
    GlobalBinding(GlobalBinding const&);
    GlobalBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~GlobalBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
