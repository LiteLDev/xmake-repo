#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/ConstantFactory.h"
#include "mc/deps/script_core/binding_type/scripting/FunctionBinding.h"
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct IteratorBinding; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct ClassBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                 name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                           type;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                           baseType;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>>     constructors;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::IteratorBinding>> iterator;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>>     functions;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::PropertyBinding>>     properties;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ConstantFactory>>     constants;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>              requiredRuntimeConditions;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>              missingRuntimeConditions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd7d7d1;
    ::ll::UntypedStorage<8, 16> mUnk73d31d;
    ::ll::UntypedStorage<8, 16> mUnk14e611;
    ::ll::UntypedStorage<8, 24> mUnka427d8;
    ::ll::UntypedStorage<8, 16> mUnk7411e3;
    ::ll::UntypedStorage<8, 24> mUnk5a5946;
    ::ll::UntypedStorage<8, 24> mUnkdca5e0;
    ::ll::UntypedStorage<8, 24> mUnke39415;
    ::ll::UntypedStorage<8, 24> mUnk706766;
    ::ll::UntypedStorage<8, 24> mUnk77c25d;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ClassBinding(ClassBinding const&);
#else // @header-generator platform
    ClassBinding();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::ClassBinding& operator=(::Scripting::ClassBinding const&);
#else // @header-generator platform
    MCNAPI ClassBinding(::Scripting::ClassBinding&&);

    MCNAPI ClassBinding(::Scripting::ClassBinding const&);
#endif // @header-generator platform

    MCNAPI ::Scripting::ClassBinding& operator=(::Scripting::ClassBinding&&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ::Scripting::ClassBinding& operator=(::Scripting::ClassBinding const&);

    MCNAPI ~ClassBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ClassBinding&&);

    MCNAPI void* $ctor(::Scripting::ClassBinding const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
