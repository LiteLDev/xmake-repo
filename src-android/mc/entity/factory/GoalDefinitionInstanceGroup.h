#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/ai/goal/GoalId.h"

// auto generated forward declare list
// clang-format off
class IDefinitionInstance;
// clang-format on

class GoalDefinitionInstanceGroup {
public:
    // GoalDefinitionInstanceGroup inner types define
    using DefinitionId = ::GoalId;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 56, ::entt::dense_map<ushort, std::shared_ptr<IDefinitionInstance>, std::hash<ushort>, std::equal_to<void>, std::allocator<std::pair<const ushort, std::shared_ptr<IDefinitionInstance>>>>> mUniqueDefinitionMap;
    ::ll::TypedStorage<8, 56, ::entt::dense_map<GoalId, std::shared_ptr<IDefinitionInstance>, std::hash<GoalId>, std::equal_to<void>, std::allocator<std::pair<const GoalId, std::shared_ptr<IDefinitionInstance>>>>> mGenericDefinitionMap;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    GoalDefinitionInstanceGroup& operator=(GoalDefinitionInstanceGroup const&);
    GoalDefinitionInstanceGroup(GoalDefinitionInstanceGroup const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addUnique(std::shared_ptr<IDefinitionInstance> const&);

    MCNAPI void combine(::GoalDefinitionInstanceGroup const&);

    MCNAPI bool contains(::GoalDefinitionInstanceGroup const&) const;

    MCNAPI void forEachDefinition(::brstd::function_ref<void(const std::shared_ptr<IDefinitionInstance>&)>) const;

    MCNAPI bool isEmpty() const;

    MCNAPI bool overlaps(::GoalDefinitionInstanceGroup const&) const;

    MCNAPI void remove(::GoalId const&, std::shared_ptr<IDefinitionInstance> const&);

    MCNAPI void subtract(::GoalDefinitionInstanceGroup const&);
    // NOLINTEND
};
