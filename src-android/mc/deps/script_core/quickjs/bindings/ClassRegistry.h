#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/EqualPropertyBinding.h"
#include "mc/deps/script_core/binding_type/scripting/HashPropertyBinding.h"
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"

// auto generated forward declare list
// clang-format off
struct JSContext;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct ErrorBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace Scripting { struct TypeNameInfo; }
namespace Scripting::QuickJS { class RegisteredClass; }
namespace Scripting::QuickJS { class RegisteredEnum; }
namespace Scripting::QuickJS { class RegisteredError; }
namespace Scripting::QuickJS { class RegisteredInterface; }
namespace Scripting::QuickJS { struct ResolvedTypes; }
// clang-format on

namespace Scripting::QuickJS {

class ClassRegistry {
public:
    // ClassRegistry inner types declare
    // clang-format off
    struct TypeHash;
    // clang-format on

    // ClassRegistry inner types define
    struct TypeHash {};

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<entt::meta_type, std::unique_ptr<Scripting::QuickJS::RegisteredClass>, Scripting::QuickJS::ClassRegistry::TypeHash, std::equal_to<entt::meta_type>, std::allocator<std::pair<const entt::meta_type, std::unique_ptr<Scripting::QuickJS::RegisteredClass>>>>> mRegisteredClassesByType;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, Scripting::QuickJS::RegisteredClass*>> mRegisteredClassesByClassId;
    ::ll::TypedStorage<8, 40, std::unordered_set<Scripting::QuickJS::RegisteredClass*>> mRegisteredClassesByPtr;
    ::ll::TypedStorage<8, 40, std::unordered_map<entt::meta_type, std::unique_ptr<Scripting::QuickJS::RegisteredInterface>, Scripting::QuickJS::ClassRegistry::TypeHash, std::equal_to<entt::meta_type>, std::allocator<std::pair<const entt::meta_type, std::unique_ptr<Scripting::QuickJS::RegisteredInterface>>>>> mRegisteredInterfaces;
    ::ll::TypedStorage<8, 40, std::unordered_map<entt::meta_type, std::unique_ptr<Scripting::QuickJS::RegisteredEnum>, Scripting::QuickJS::ClassRegistry::TypeHash, std::equal_to<entt::meta_type>, std::allocator<std::pair<const entt::meta_type, std::unique_ptr<Scripting::QuickJS::RegisteredEnum>>>>> mRegisteredEnums;
    ::ll::TypedStorage<8, 40, std::unordered_map<entt::meta_type, std::unique_ptr<Scripting::QuickJS::RegisteredError>, Scripting::QuickJS::ClassRegistry::TypeHash, std::equal_to<entt::meta_type>, std::allocator<std::pair<const entt::meta_type, std::unique_ptr<Scripting::QuickJS::RegisteredError>>>>> mRegisteredErrors;
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, Scripting::QuickJS::RegisteredError*>> mRegisteredErrorsByClassId;
    ::ll::TypedStorage<8, 40, std::unordered_map<entt::meta_type, std::unordered_set<Scripting::PropertyBinding, Scripting::HashPropertyBinding, Scripting::EqualPropertyBinding, std::allocator<Scripting::PropertyBinding>>, Scripting::QuickJS::ClassRegistry::TypeHash, std::equal_to<entt::meta_type>, std::allocator<std::pair<const entt::meta_type, std::unordered_set<Scripting::PropertyBinding, Scripting::HashPropertyBinding, Scripting::EqualPropertyBinding, std::allocator<Scripting::PropertyBinding>>>>>> mRegisteredBakedPropertiesByType;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _collectAllInterfaceProperties(
        std::unordered_set<
            Scripting::PropertyBinding,
            Scripting::HashPropertyBinding,
            Scripting::EqualPropertyBinding,
            std::allocator<Scripting::PropertyBinding>>&,
        ::Scripting::InterfaceBinding const&
    );

    MCNAPI void _collectAllProperties(
        std::unordered_set<
            Scripting::PropertyBinding,
            Scripting::HashPropertyBinding,
            Scripting::EqualPropertyBinding,
            std::allocator<Scripting::PropertyBinding>>&,
        ::Scripting::ClassBinding const&
    );

    MCNAPI std::optional<Scripting::TypeNameInfo>
           getNameForType(::Scripting::QuickJS::ResolvedTypes const&, ::entt::meta_type const&, bool) const;

    MCNAPI ::Scripting::QuickJS::RegisteredClass& registerClass(::JSContext*, ::Scripting::ClassBinding const&, bool);

    MCNAPI void registerEnum(::JSContext*, ::Scripting::EnumBinding const&);

    MCNAPI ::Scripting::QuickJS::RegisteredError& registerError(::JSContext*, ::Scripting::ErrorBinding const&);

    MCNAPI ::Scripting::QuickJS::RegisteredInterface&
    registerInterface(::JSContext*, ::Scripting::InterfaceBinding const&);

    MCNAPI ~ClassRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
