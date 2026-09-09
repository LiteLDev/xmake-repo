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
    ::ll::TypedStorage<8, 24, std::string>    mNamespace;
    ::ll::TypedStorage<8, 24, std::string>    mIdentifier;
    ::ll::TypedStorage<8, 24, std::string>    mInitEvent;
    ::ll::TypedStorage<8, 24, std::string>    mFullName;
    ::ll::TypedStorage<8, 40, ::HashedString> mCanonicalName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ActorDefinitionIdentifier(std::string const&);

    MCNAPI explicit ActorDefinitionIdentifier(char const*);

    MCNAPI explicit ActorDefinitionIdentifier(std::string_view);

    MCNAPI ActorDefinitionIdentifier(::ActorDefinitionIdentifier const&);

    MCNAPI ActorDefinitionIdentifier(::ActorType, std::string);

    MCNAPI ActorDefinitionIdentifier(std::string, std::string, std::string);

    MCNAPI ::ActorType _getLegacyActorType() const;

    MCNAPI void _initialize();

    MCNAPI ::HashedString const& getCanonicalHash() const;

    MCNAPI std::string const& getCanonicalName() const;

    MCNAPI std::string const& getFullName() const;

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _extractIdentifier(std::string const&, ::ActorDefinitionIdentifier&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&);

    MCNAPI void* $ctor(char const*);

    MCNAPI void* $ctor(std::string_view);

    MCNAPI void* $ctor(::ActorDefinitionIdentifier const&);

    MCNAPI void* $ctor(::ActorType, std::string);

    MCNAPI void* $ctor(std::string, std::string, std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
