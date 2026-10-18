#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Actor;
struct VariantParameterListConst;
#else // @header-generator platform
#endif // @header-generator platform
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
// clang-format on

class ActorDefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                         mType;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                       mType;
#endif // @header-generator platform
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mTarget;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                  mFilter;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    ActorDefinitionTrigger& operator=(ActorDefinitionTrigger const&);
    ActorDefinitionTrigger();

public:
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionTrigger();
#else // @header-generator platform
    MCAPI ActorDefinitionTrigger(::ActorDefinitionTrigger const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ActorDefinitionTrigger(::SharedTypes::v1_21_120::ActorDefinitionTrigger const&);
#else // @header-generator platform
    MCAPI explicit ActorDefinitionTrigger(::SharedTypes::v1_21_120::ActorDefinitionTrigger const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool canTrigger(::Actor const&, ::VariantParameterListConst const&) const;
#else // @header-generator platform
    MCAPI void convertToSharedTypeActorDefinitionTrigger(
        ::SharedTypes::v1_21_120::ActorDefinitionTrigger& outputSharedTypeTrigger
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void convertToSharedTypeActorDefinitionTrigger(::SharedTypes::v1_21_120::ActorDefinitionTrigger&) const;
#else // @header-generator platform
    MCAPI ::ActorDefinitionTrigger& operator=(::ActorDefinitionTrigger&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~ActorDefinitionTrigger();
#else // @header-generator platform
    MCAPI ~ActorDefinitionTrigger();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCAPI void* $ctor(::ActorDefinitionTrigger const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_120::ActorDefinitionTrigger const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_120::ActorDefinitionTrigger const& other);
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
