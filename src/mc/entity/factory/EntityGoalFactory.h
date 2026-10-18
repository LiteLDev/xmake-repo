#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class EntityContext;
class GoalDefinitionInstanceGroup;
#else // @header-generator platform
class HashedString;
#endif // @header-generator platform
class IJsonDefinitionSerializer;
// clang-format on

class EntityGoalFactory {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // EntityGoalFactory inner types define
    using iterator = std::__hash_map_iterator<std::__hash_iterator<
        std::__hash_node<std::__hash_value_type<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>, void*>*>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::unique_ptr<IJsonDefinitionSerializer>>> mDefinitionSerializers;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 64> mUnk5eecb6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EntityGoalFactory& operator=(EntityGoalFactory const&);
    EntityGoalFactory(EntityGoalFactory const&);
    EntityGoalFactory();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCNAPI ::IJsonDefinitionSerializer* tryGetDefinitionSerializer(::std::string const& name);
#endif // @header-generator platform
    // NOLINTEND
};
