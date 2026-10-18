#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting::Reflection { class IFunction; }
namespace Scripting::Reflection { class IPropertyGetter; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting {

struct IteratorBinding : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>>       mNextCallback;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>>       mNextResultFunction;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IPropertyGetter>> mValueGetter;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IPropertyGetter>> mDoneGetter;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                                       mIteratorResultType;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Scripting::ClassBinding>>                 mResultTypeBinding;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>>       mIteratorFunction;
    ::ll::TypedStorage<8, 24, std::string>                                             mIteratorClassName;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk1afcd4;
    ::ll::UntypedStorage<8, 16> mUnkb3a8f1;
    ::ll::UntypedStorage<8, 16> mUnk6d4a21;
    ::ll::UntypedStorage<8, 16> mUnk947f9a;
    ::ll::UntypedStorage<8, 16> mUnk5f052a;
    ::ll::UntypedStorage<8, 8>  mUnke000b6;
    ::ll::UntypedStorage<8, 16> mUnk54998d;
    ::ll::UntypedStorage<8, 32> mUnk57ee14;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    IteratorBinding& operator=(IteratorBinding const&);
    IteratorBinding(IteratorBinding const&);
    IteratorBinding();
#endif // @header-generator platform

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
