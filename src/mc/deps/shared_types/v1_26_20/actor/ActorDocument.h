#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/v1_21_130/actor/brain/BrainDefinition.h"
#include "mc/deps/shared_types/v1_26_20/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_26_20 {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mDescription;
    ::ll::TypedStorage<8, 104, std::optional<SharedTypes::v1_21_130::Brain::BrainDefinition>> mBrainDefinition;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_20::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::v1_26_20::ActorDefinitions>> mDefinitionGroups;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mEvents;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mUpgrades;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                                             mDescription;
    ::ll::TypedStorage<8, 136, ::std::optional<::SharedTypes::v1_21_130::Brain::BrainDefinition>> mBrainDefinition;
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_26_20::ActorDefinitions>                          mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SharedTypes::v1_26_20::ActorDefinitions>>
                                                      mDefinitionGroups;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mEvents;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mUpgrades;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorDocument();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDocument(::SharedTypes::v1_26_20::ActorDocument const&);
#else // @header-generator platform
    MCAPI ActorDocument(::SharedTypes::v1_26_20::ActorDocument const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_20::ActorDocument& operator=(::SharedTypes::v1_26_20::ActorDocument&&);
#else // @header-generator platform
    MCFOLD ::SharedTypes::v1_26_20::ActorDocument& operator=(::SharedTypes::v1_26_20::ActorDocument&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_26_20::ActorDocument& operator=(::SharedTypes::v1_26_20::ActorDocument const&);
#else // @header-generator platform
    MCFOLD ::SharedTypes::v1_26_20::ActorDocument& operator=(::SharedTypes::v1_26_20::ActorDocument const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::SharedTypes::v1_26_20::ActorDocument const&) const;
#else // @header-generator platform
    MCFOLD bool operator==(::SharedTypes::v1_26_20::ActorDocument const&) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorDocument();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI ~ActorDocument();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::SemVersionConstant const& VERSION();
#else // @header-generator platform
    MCAPI static ::SemVersionConstant const& VERSION();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_26_20::ActorDocument const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::SharedTypes::v1_26_20::ActorDocument const&);
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

} // namespace SharedTypes::v1_26_20
