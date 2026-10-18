#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/legacy/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::Legacy {

struct ActorDocumentCorrected {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue>                                                 mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ActorDefinitions>                                mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::Legacy::ActorDefinitions>> mDefinitionGroups;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue>                                                 mEvents;
#else // @header-generator platform
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue>                  mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SharedTypes::Legacy::ActorDefinitions>>
                                                      mDefinitionGroups;
    ::ll::TypedStorage<8, 72, ::cereal::DynamicValue> mEvents;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorDocumentCorrected();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDocumentCorrected(::SharedTypes::Legacy::ActorDocumentCorrected const&);
#else // @header-generator platform
    MCAPI ActorDocumentCorrected(::SharedTypes::Legacy::ActorDocumentCorrected const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::Legacy::ActorDocumentCorrected& operator=(::SharedTypes::Legacy::ActorDocumentCorrected&&);

    MCNAPI ::SharedTypes::Legacy::ActorDocumentCorrected&
#else // @header-generator platform
    MCFOLD ::SharedTypes::Legacy::ActorDocumentCorrected&
#endif // @header-generator platform
    operator=(::SharedTypes::Legacy::ActorDocumentCorrected const&);

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorDocumentCorrected();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI ~ActorDocumentCorrected();
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
    MCNAPI void* $ctor(::SharedTypes::Legacy::ActorDocumentCorrected const&);
#else // @header-generator platform
    MCFOLD void* $ctor(::SharedTypes::Legacy::ActorDocumentCorrected const&);
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

} // namespace SharedTypes::Legacy
