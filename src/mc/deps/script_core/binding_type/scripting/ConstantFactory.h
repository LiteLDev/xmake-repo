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
#if defined(LL_PLAT_A) // @header-generator platform
    // ConstantFactory inner types define
    using FnType = std::function<entt::meta_any(Scripting::WeakLifetimeScope&)>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>       name;
    ::ll::TypedStorage<8, 16, ::entt::meta_type> type;
    ::ll::UntypedStorage<1, 16>                  primitive;
    ::ll::UntypedStorage<8, 48>                  func;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk9acbec;
    ::ll::UntypedStorage<8, 16> mUnk2f1d92;
    ::ll::UntypedStorage<1, 1>  mUnk35e387;
    ::ll::UntypedStorage<8, 64> mUnk88f6ea;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ConstantFactory& operator=(ConstantFactory const&);
#else // @header-generator platform
    ConstantFactory();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI ConstantFactory(::Scripting::ConstantFactory const&);

    MCNAPI ConstantFactory(
        ::std::string                                                      name_,
        ::entt::meta_type                                                  type_,
        bool                                                               primitive_,
        ::std::function<::entt::meta_any(::Scripting::WeakLifetimeScope&)> func_
    );

    MCNAPI ::Scripting::ConstantFactory& operator=(::Scripting::ConstantFactory const&);

#endif // @header-generator platform
    MCNAPI ~ConstantFactory();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::ConstantFactory const&);

    MCNAPI void* $ctor(
        ::std::string                                                      name_,
        ::entt::meta_type                                                  type_,
        bool                                                               primitive_,
        ::std::function<::entt::meta_any(::Scripting::WeakLifetimeScope&)> func_
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
