#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/TaggedBinding.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting::Reflection { class IFunction; }
#else // @header-generator platform
namespace Scripting { class StrongObjectHandle; }
namespace Scripting { class WeakLifetimeScope; }
#endif // @header-generator platform
// clang-format on

namespace Scripting {

struct ObjectFactory : public ::Scripting::TaggedBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                       name;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Scripting::Reflection::IFunction>> func;
    ::ll::TypedStorage<8, 16, ::entt::meta_type>                                 type;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk695cd0;
    ::ll::UntypedStorage<8, 16> mUnkac19c1;
    ::ll::UntypedStorage<8, 16> mUnkf51b36;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ObjectFactory& operator=(ObjectFactory const&);
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ObjectFactory();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    ObjectFactory(ObjectFactory const&);
    ObjectFactory();
#endif // @header-generator platform
};

} // namespace Scripting
