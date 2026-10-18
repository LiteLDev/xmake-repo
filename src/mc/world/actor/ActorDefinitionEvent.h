#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorDefinitionEventType.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/response/ActorEventResponseCollection.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorDefinitionModifier;
struct VariantParameterListConst;
// clang-format on

class ActorDefinitionEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                           mProbability;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>             mFilter;
    ::ll::TypedStorage<8, 24, std::string>                    mName;
    ::ll::TypedStorage<4, 4, ::ActorDefinitionEventType>      mType;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mGroups;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>       mRemoveGroups;
    ::ll::TypedStorage<8, 96, ::ActorDefinitionTrigger>       mTrigger;
    ::ll::UntypedStorage<8, 24>                               mChildren;
    ::ll::TypedStorage<8, 24, ::ActorEventResponseCollection> mResponses;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                                  mProbability;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                    mFilter;
    ::ll::TypedStorage<8, 32, ::std::string>                         mName;
    ::ll::TypedStorage<4, 4, ::ActorDefinitionEventType>             mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>          mGroups;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>          mRemoveGroups;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>             mTrigger;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionEvent>> mChildren;
    ::ll::TypedStorage<8, 24, ::ActorEventResponseCollection>        mResponses;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ActorDefinitionEvent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionEvent();
#else // @header-generator platform
    MCAPI ActorDefinitionEvent(::ActorDefinitionEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ActorDefinitionEvent(::ActorDefinitionEvent const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void _evaluateGroups(
        ::Actor&                                  entity,
        ::std::vector<::ActorDefinitionModifier>& modifications,
        ::VariantParameterListConst const&        list
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    _evaluateGroups(::Actor&, std::vector<ActorDefinitionModifier>&, ::VariantParameterListConst const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void _evaluateGroups(
        ::Actor&                                  entity,
        ::std::vector<::ActorDefinitionModifier>& modifications,
        ::VariantParameterListConst const&        list
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    evaluateGroups(::Actor&, std::vector<ActorDefinitionModifier>&, ::VariantParameterListConst const&) const;
#else // @header-generator platform
    MCAPI ::ActorDefinitionEvent& operator=(::ActorDefinitionEvent const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorDefinitionEventType getType() const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void setName(::std::string name);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ActorDefinitionEvent& operator=(::ActorDefinitionEvent const&);

    MCNAPI void setName(std::string);

    MCNAPI ~ActorDefinitionEvent();
#else // @header-generator platform
    MCAPI ~ActorDefinitionEvent();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ActorDefinitionEvent const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ActorDefinitionEvent const&);
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
