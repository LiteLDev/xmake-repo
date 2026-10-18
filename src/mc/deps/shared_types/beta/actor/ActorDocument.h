#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/actor/ActorDefinitions.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/shared_types/v1_26_40/actor/ActorDocument.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { struct ReflectionCtx; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__ACTORDOCUMENT
#define LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__ACTORDOCUMENT
namespace SharedTypes::Comprehensive { class ActorDocument {}; }
#endif
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace SharedTypes::Beta {

#if defined(LL_PLAT_A) // @header-generator platform
struct ActorDocument : public ::SharedTypes::Comprehensive::ActorDocument {
#else // @header-generator platform
struct ActorDocument : public ::SharedTypes::v1_26_40::ActorDocument {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 48>                                                                     mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::Beta::ActorDefinitions>> mDefinitionGroups;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::SharedTypes::Beta::ActorDefinitions> mDefinitions;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::SharedTypes::Beta::ActorDefinitions>>
        mDefinitionGroups;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorDocument();
    // NOLINTEND
#else // @header-generator platform
    MCAPI ActorDocument();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI ActorDocument(::SharedTypes::Beta::ActorDocument const&);

    MCAPI ::SharedTypes::Beta::ActorDocument& operator=(::SharedTypes::Beta::ActorDocument const&);

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::Beta::ActorDocument const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Beta
