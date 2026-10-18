#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class BedrockLoadContext;
namespace cereal { class SerializerContext; }
// clang-format on

struct ActorDefinitionIdentifier {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>    mNamespace;
    ::ll::TypedStorage<8, 24, std::string>    mIdentifier;
    ::ll::TypedStorage<8, 24, std::string>    mInitEvent;
    ::ll::TypedStorage<8, 24, std::string>    mFullName;
    ::ll::TypedStorage<8, 40, ::HashedString> mCanonicalName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>  mNamespace;
    ::ll::TypedStorage<8, 32, ::std::string>  mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>  mInitEvent;
    ::ll::TypedStorage<8, 32, ::std::string>  mFullName;
    ::ll::TypedStorage<8, 48, ::HashedString> mCanonicalName;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorDefinitionIdentifier();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorDefinitionIdentifier(std::string const&);
#else // @header-generator platform
    MCAPI explicit ActorDefinitionIdentifier(::std::string const& fullName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorDefinitionIdentifier(char const*);
#else // @header-generator platform
    MCAPI explicit ActorDefinitionIdentifier(char const* fullName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorDefinitionIdentifier(std::string_view);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI explicit ActorDefinitionIdentifier(::std::string_view fullName);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionIdentifier(::ActorDefinitionIdentifier const&);
#else // @header-generator platform
    MCAPI ActorDefinitionIdentifier(::ActorDefinitionIdentifier const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionIdentifier(::ActorType, std::string);
#else // @header-generator platform
    MCAPI ActorDefinitionIdentifier(::ActorType type, ::std::string initEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionIdentifier(std::string, std::string, std::string);
#else // @header-generator platform
    MCAPI ActorDefinitionIdentifier(::std::string nameSpace, ::std::string identifier, ::std::string initEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorType _getLegacyActorType() const;
#else // @header-generator platform
    MCAPI void _initialize();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _initialize();
#else // @header-generator platform
    MCAPI bool isVanilla() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::HashedString const& getCanonicalHash() const;
#else // @header-generator platform
    MCAPI ::ActorDefinitionIdentifier& operator=(::ActorDefinitionIdentifier const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getCanonicalName() const;
#else // @header-generator platform
    MCAPI bool operator==(::ActorDefinitionIdentifier const& other) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getFullName() const;
#else // @header-generator platform
    MCAPI void setter(
        ::std::string const&               str,
        ::BedrockLoadContext               context,
        ::cereal::SerializerContext const& serializerContext
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getIdentifier() const;

    MCNAPI std::string const& getInitEvent() const;

    MCNAPI void initialize(std::string const&);

    MCNAPI void initialize(std::string const&, std::string const&, std::string const&);

    MCNAPI bool isEmpty() const;

    MCNAPI bool isVanilla() const;

    MCNAPI ::ActorDefinitionIdentifier& operator=(::ActorDefinitionIdentifier const&);

    MCNAPI bool operator==(::ActorDefinitionIdentifier const&) const;

    MCNAPI void setIdentifier(std::string const&);

    MCNAPI void setInitEvent(std::string const&);

    MCNAPI void setter(std::string const&, ::BedrockLoadContext, ::cereal::SerializerContext const&);

    MCNAPI ~ActorDefinitionIdentifier();
#else // @header-generator platform
    MCAPI ~ActorDefinitionIdentifier();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _extractIdentifier(std::string const&, ::ActorDefinitionIdentifier&);
#else // @header-generator platform
    MCAPI static void _extractIdentifier(::std::string const& name, ::ActorDefinitionIdentifier& id);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& fullName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(char const*);
#else // @header-generator platform
    MCAPI void* $ctor(char const* fullName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string_view);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::std::string_view fullName);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorDefinitionIdentifier const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorDefinitionIdentifier const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ActorType, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorType type, ::std::string initEvent);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string, std::string, std::string);
#else // @header-generator platform
    MCAPI void* $ctor(::std::string nameSpace, ::std::string identifier, ::std::string initEvent);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::ActorDefinitionIdentifier const *>();
// clang-format on
#endif // @header-generator platform
