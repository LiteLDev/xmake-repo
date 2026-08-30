#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/persistence/DynamicPropertyDefinePropertyError.h"
#include "mc/world/persistence/DynamicPropertyDefinition.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
// clang-format on

class DynamicPropertiesDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, DynamicPropertyDefinition>> mDynamicProperties;
    ::ll::TypedStorage<8, 8, ulong>                                                       mCost;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool
    _canMergeDefinitions(::DynamicPropertiesDefinition const&, std::string const&, ulong, std::string&) const;

    MCNAPI void clear();

    MCNAPI std::optional<DynamicPropertyDefinePropertyError>
           defineProperty(std::string const&, ::DynamicPropertyDefinition);

    MCNAPI ::DynamicPropertyDefinition const* tryGetPropertyDefinition(std::string const&) const;

    MCNAPI std::optional<std::string>
           tryMergeDefinitions(::DynamicPropertiesDefinition const&, std::string const&, ulong);

    MCNAPI ~DynamicPropertiesDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void clearAll(std::unordered_map<std::string, std::unique_ptr<ActorDefinition>> const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& ACTOR_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();

    MCNAPI static ulong const& IDENTIFIER_SIZE_LIMIT();

    MCNAPI static ulong const& WORLD_TOTAL_DYNAMIC_PROPERTY_SIZE_LIMIT();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
