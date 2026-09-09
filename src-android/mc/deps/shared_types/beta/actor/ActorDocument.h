#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/actor/ActorDefinitions.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__ACTORDOCUMENT
#define LL_GENERATED_ANDROID_BASE_STUB_SHAREDTYPES__COMPREHENSIVE__ACTORDOCUMENT
namespace SharedTypes::Comprehensive { class ActorDocument {}; }
#endif
// clang-format on

namespace SharedTypes::Beta {

struct ActorDocument : public ::SharedTypes::Comprehensive::ActorDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 48>                                                                     mDefinitions;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SharedTypes::Beta::ActorDefinitions>> mDefinitionGroups;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta
