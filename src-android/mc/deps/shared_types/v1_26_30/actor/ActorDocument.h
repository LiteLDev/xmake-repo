#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/BrainDefinition.h"
#include "mc/deps/shared_types/v1_26_30/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_30 {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mDescription;
    ::ll::TypedStorage<8, 104, std::optional<SharedTypes::v1_21_130::Brain::BrainDefinition>> mBrainDefinition;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_30::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::v1_26_30::ActorDefinitions>> mDefinitionGroups;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mEvents;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mUpgrades;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDocument(::SharedTypes::v1_26_30::ActorDocument const&);

    MCNAPI ::SharedTypes::v1_26_30::ActorDocument& operator=(::SharedTypes::v1_26_30::ActorDocument&&);

    MCNAPI ::SharedTypes::v1_26_30::ActorDocument& operator=(::SharedTypes::v1_26_30::ActorDocument const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_30::ActorDocument const&) const;

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
    MCNAPI void* $ctor(::SharedTypes::v1_26_30::ActorDocument const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_30
