#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/v1_21_100/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::v1_21_100 {

struct ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mDescription;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                     mDescription;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SharedTypes::v1_21_100::ActorDefinitions> mDefinitions;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::v1_21_100::ActorDefinitions>> mDefinitionGroups;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue> mEvents;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SharedTypes::v1_21_100::ActorDefinitions>>
                                                      mDefinitionGroups;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mEvents;
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
    MCNAPI ActorDocument(::SharedTypes::v1_21_100::ActorDocument const&);
#else // @header-generator platform
    MCAPI ActorDocument(::SharedTypes::v1_21_100::ActorDocument const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_100::ActorDocument& operator=(::SharedTypes::v1_21_100::ActorDocument&&);
#else // @header-generator platform
    MCFOLD ::SharedTypes::v1_21_100::ActorDocument& operator=(::SharedTypes::v1_21_100::ActorDocument const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_100::ActorDocument& operator=(::SharedTypes::v1_21_100::ActorDocument const&);

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
    MCNAPI void* $ctor(::SharedTypes::v1_21_100::ActorDocument const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::SharedTypes::v1_21_100::ActorDocument const&);
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

} // namespace SharedTypes::v1_21_100
