#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/actor/ActorFilterGroup.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct VariantParameterListConst;
namespace SharedTypes::v1_21_120 { struct ActorDefinitionTrigger; }
// clang-format on

class ActorDefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                         mType;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mTarget;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                  mFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDefinitionTrigger();

    MCNAPI explicit ActorDefinitionTrigger(::SharedTypes::v1_21_120::ActorDefinitionTrigger const&);

    MCNAPI bool canTrigger(::Actor const&, ::VariantParameterListConst const&) const;

    MCNAPI void convertToSharedTypeActorDefinitionTrigger(::SharedTypes::v1_21_120::ActorDefinitionTrigger&) const;

    MCNAPI ~ActorDefinitionTrigger();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_120::ActorDefinitionTrigger const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
