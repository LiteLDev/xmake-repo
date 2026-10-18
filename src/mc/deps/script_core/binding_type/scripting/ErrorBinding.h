#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/FunctionBinding.h"
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

namespace Scripting {

struct ErrorBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                             name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                       type;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::FunctionBinding>> constructors;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::PropertyBinding>> properties;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk573a59;
    ::ll::UntypedStorage<8, 16> mUnkd85588;
    ::ll::UntypedStorage<8, 24> mUnk30992f;
    ::ll::UntypedStorage<8, 24> mUnkd8aa0c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ErrorBinding& operator=(ErrorBinding const&);
    ErrorBinding(ErrorBinding const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ErrorBinding();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ErrorBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
