#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/dynamic/DynamicValue.h"
#include "mc/deps/shared_types/legacy/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct ActorDocumentCorrected {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue>                                                 mDescription;
    ::ll::TypedStorage<8, 48, ::SharedTypes::Legacy::ActorDefinitions>                                mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::Legacy::ActorDefinitions>> mDefinitionGroups;
    ::ll::TypedStorage<8, 48, ::cereal::DynamicValue>                                                 mEvents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorDocumentCorrected(::SharedTypes::Legacy::ActorDocumentCorrected const&);

    MCNAPI ::SharedTypes::Legacy::ActorDocumentCorrected& operator=(::SharedTypes::Legacy::ActorDocumentCorrected&&);

    MCNAPI ::SharedTypes::Legacy::ActorDocumentCorrected&
    operator=(::SharedTypes::Legacy::ActorDocumentCorrected const&);

    MCNAPI ~ActorDocumentCorrected();
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
    MCNAPI void* $ctor(::SharedTypes::Legacy::ActorDocumentCorrected const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
