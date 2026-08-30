#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class GoalDefinitionInstanceGroup;
class IJsonDefinitionSerializer;
// clang-format on

class EntityGoalFactory {
public:
    // EntityGoalFactory inner types define
    using iterator = std::__hash_map_iterator<std::__hash_iterator<
        std::__hash_node<std::__hash_value_type<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>, void*>*>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>> mDefinitionSerializers;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::__hash_map_iterator<std::__hash_iterator<
        std::__hash_node<std::__hash_value_type<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>, void*>*>>
           begin();

    MCNAPI ::IJsonDefinitionSerializer* tryGetDefinitionSerializer(std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void addGoals(::EntityContext&, ::GoalDefinitionInstanceGroup const&);

    MCNAPI static void removeGoals(::EntityContext&, ::GoalDefinitionInstanceGroup const&);
    // NOLINTEND
};
