#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting::Reflection { class IFunction; }
namespace Scripting::Reflection { class IPropertyGetter; }
// clang-format on

namespace Scripting {

struct IteratorBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>>       mNextCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>>       mNextResultFunction;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IPropertyGetter>> mValueGetter;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IPropertyGetter>> mDoneGetter;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                                       mIteratorResultType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::ClassBinding>>                 mResultTypeBinding;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>>       mIteratorFunction;
    ::ll::TypedStorage<8, 24, std::string>                                             mIteratorClassName;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IteratorBinding();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting
