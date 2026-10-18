#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/ArgumentBinding.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IFunction; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Scripting {

struct FunctionBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                       name;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ArgumentBinding>>           argDetails;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>> function;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>                    requiredRuntimeConditions;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk245df8;
    ::ll::UntypedStorage<8, 24> mUnka16366;
    ::ll::UntypedStorage<8, 16> mUnk5d6400;
    ::ll::UntypedStorage<8, 24> mUnk76729b;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    FunctionBinding& operator=(FunctionBinding const&);
#else // @header-generator platform
    FunctionBinding();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FunctionBinding(::Scripting::FunctionBinding const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ::Scripting::FunctionBinding& operator=(::Scripting::FunctionBinding const&);
#endif // @header-generator platform

    MCNAPI ~FunctionBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::FunctionBinding const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
