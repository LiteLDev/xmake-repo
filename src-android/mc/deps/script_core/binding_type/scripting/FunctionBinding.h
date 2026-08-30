#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/ArgumentBinding.h"
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"
#include "mc/deps/script_core/runtime/scripting/RuntimeConditions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::Reflection { class IFunction; }
// clang-format on

namespace Scripting {

struct FunctionBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                       name;
    ::ll::TypedStorage<8, 24, std::vector<Scripting::ArgumentBinding>>           argDetails;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>> function;
    ::ll::TypedStorage<8, 24, ::Scripting::RuntimeConditions>                    requiredRuntimeConditions;
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionBinding& operator=(FunctionBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FunctionBinding(::Scripting::FunctionBinding const&);

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
