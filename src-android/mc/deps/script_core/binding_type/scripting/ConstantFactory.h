#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Scripting {

struct ConstantFactory : public ::Scripting::TaggedBinding {
public:
    // ConstantFactory inner types define
    using FnType = std::function<entt::meta_any(Scripting::WeakLifetimeScope&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>       name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> type;
    ::ll::UntypedStorage<1, 16>                  primitive;
    ::ll::UntypedStorage<8, 48>                  func;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstantFactory& operator=(ConstantFactory const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ConstantFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
