#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PrioritizedGoal.h"
#include "mc/world/actor/ai/goal/GoalId.h"

// auto generated forward declare list
// clang-format off
class BaseGoal;
class Player;
struct DimensionType;
// clang-format on

class GoalSelectorComponent {
public:
    // GoalSelectorComponent inner types define
    using GoalMap = std::vector<std::pair<GoalId, PrioritizedGoal>>;

    using GoalCondition = bool (*)(std::pair<GoalId, PrioritizedGoal>&);

    using GoalElement = std::pair<GoalId, PrioritizedGoal>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::pair<GoalId, PrioritizedGoal>>> mGoalMap;
    // NOLINTEND

public:
    // prevent constructor by default
    GoalSelectorComponent& operator=(GoalSelectorComponent const&);
    GoalSelectorComponent(GoalSelectorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI const std::pair<GoalId, PrioritizedGoal>* _findGoalByKey(::GoalId) const;

    MCNAPI void addGoal(int, std::unique_ptr<BaseGoal>);

    MCNAPI void buildDebugInfo(std::string&) const;

    MCNAPI void clearAllGoals();

    MCNAPI void clearNonTargetedGoals();

    MCNAPI void clearTargetGoals();

    MCNAPI void onPlayerDimensionChanged(::Player*, ::DimensionType, ::DimensionType);

    MCNAPI bool removeGoal(::GoalId);

    MCNAPI void stopAllGoals();

    MCNAPI void stopNonTargetedGoals();
    // NOLINTEND
};
