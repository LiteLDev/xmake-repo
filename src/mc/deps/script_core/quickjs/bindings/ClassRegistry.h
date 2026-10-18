#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/binding_type/scripting/EqualPropertyBinding.h"
#include "mc/deps/script_core/binding_type/scripting/HashPropertyBinding.h"
#include "mc/deps/script_core/binding_type/scripting/PropertyBinding.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
struct JSContext;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct EqualPropertyBinding; }
#endif // @header-generator platform
namespace Scripting { struct ErrorBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct HashPropertyBinding; }
#endif // @header-generator platform
namespace Scripting { struct InterfaceBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Scripting { struct PropertyBinding; }
#endif // @header-generator platform
namespace Scripting { struct TypeNameInfo; }
namespace Scripting::QuickJS { class RegisteredClass; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting::QuickJS { class RegisteredEnum; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnkbd88e5;
    ::ll::UntypedStorage<8, 64> mUnkcb84ca;
    ::ll::UntypedStorage<8, 64> mUnk7668c8;
    ::ll::UntypedStorage<8, 64> mUnk167758;
    ::ll::UntypedStorage<8, 64> mUnk8a16c7;
    ::ll::UntypedStorage<8, 64> mUnk85c83f;
    ::ll::UntypedStorage<8, 64> mUnkfb655b;
    ::ll::UntypedStorage<8, 64> mUnkb30580;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ClassRegistry& operator=(ClassRegistry const&);
    ClassRegistry(ClassRegistry const&);
    ClassRegistry();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _collectAllInterfaceProperties(
#if defined(LL_PLAT_A) // @header-generator platform
        std::unordered_set<
            Scripting::PropertyBinding,
            Scripting::HashPropertyBinding,
            Scripting::EqualPropertyBinding,
            std::allocator<Scripting::PropertyBinding>>&,
        ::Scripting::InterfaceBinding const&
#else // @header-generator platform
        ::std::unordered_set<
            ::Scripting::PropertyBinding,
            ::Scripting::HashPropertyBinding,
            ::Scripting::EqualPropertyBinding>& allProperties,
        ::Scripting::InterfaceBinding const&    interfaceBinding
#endif // @header-generator platform
    );

    MCNAPI void _collectAllProperties(
#if defined(LL_PLAT_A) // @header-generator platform
        std::unordered_set<
            Scripting::PropertyBinding,
            Scripting::HashPropertyBinding,
            Scripting::EqualPropertyBinding,
            std::allocator<Scripting::PropertyBinding>>&,
        ::Scripting::ClassBinding const&
#else // @header-generator platform
        ::std::unordered_set<
            ::Scripting::PropertyBinding,
            ::Scripting::HashPropertyBinding,
            ::Scripting::EqualPropertyBinding>& allProperties,
        ::Scripting::ClassBinding const&        classBinding
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Scripting::TypeNameInfo>
           getNameForType(::Scripting::QuickJS::ResolvedTypes const&, ::entt::meta_type const&, bool) const;
#else // @header-generator platform
    MCNAPI ::std::optional<::Scripting::TypeNameInfo> getNameForType(
        ::Scripting::QuickJS::ResolvedTypes const& resolvedTypes,
        ::entt::meta_type const&                   type,
        bool                                       allowUnknownTypes
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::QuickJS::RegisteredClass& registerClass(::JSContext*, ::Scripting::ClassBinding const&, bool);
#else // @header-generator platform
    MCNAPI ::Scripting::QuickJS::RegisteredClass&
    registerClass(::JSContext* ctx, ::Scripting::ClassBinding const& classBinding, bool forModule);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerEnum(::JSContext*, ::Scripting::EnumBinding const&);
#else // @header-generator platform
    MCNAPI void registerEnum(::JSContext*, ::Scripting::EnumBinding const& enumBinding);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::QuickJS::RegisteredError& registerError(::JSContext*, ::Scripting::ErrorBinding const&);
#else // @header-generator platform
    MCNAPI ::Scripting::QuickJS::RegisteredError&
    registerError(::JSContext* ctx, ::Scripting::ErrorBinding const& errorBinding);
#endif // @header-generator platform

    MCNAPI ::Scripting::QuickJS::RegisteredInterface&
#if defined(LL_PLAT_A) // @header-generator platform
    registerInterface(::JSContext*, ::Scripting::InterfaceBinding const&);

    MCNAPI ~ClassRegistry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    registerInterface(::JSContext*, ::Scripting::InterfaceBinding const& interfaceBinding);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting::QuickJS
