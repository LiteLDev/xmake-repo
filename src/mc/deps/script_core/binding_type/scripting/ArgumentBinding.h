#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ArgumentDetails.h"
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct ArgumentBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                   name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>             type;
    ::ll::TypedStorage<8, 280, ::Scripting::ArgumentDetails> details;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32>  mUnk9a9c1d;
    ::ll::UntypedStorage<8, 16>  mUnk3a8eaa;
    ::ll::UntypedStorage<8, 280> mUnkb650d4;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ArgumentBinding& operator=(ArgumentBinding const&);
    ArgumentBinding(ArgumentBinding const&);
    ArgumentBinding();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ArgumentBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
