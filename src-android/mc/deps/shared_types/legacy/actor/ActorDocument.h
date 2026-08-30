#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/deps/shared_types/legacy/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::variant<cereal::NullType, SharedTypes::Legacy::ActorDefinitions>>> mDefinitionGroups;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mEvents;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDocument(::SharedTypes::Legacy::ActorDocument const&);

    MCNAPI ::SharedTypes::Legacy::ActorDocument& operator=(::SharedTypes::Legacy::ActorDocument&&);

    MCNAPI ::SharedTypes::Legacy::ActorDocument& operator=(::SharedTypes::Legacy::ActorDocument const&);

    MCNAPI ~ActorDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::ActorDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
