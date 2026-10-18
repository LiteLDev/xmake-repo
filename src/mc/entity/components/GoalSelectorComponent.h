#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/entity/components/PrioritizedGoal.h"
#include "mc/world/actor/ai/goal/GoalId.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BaseGoal;
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PrioritizedGoal;
#endif // @header-generator platform
struct DimensionType;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct GoalId;
#endif // @header-generator platform
// clang-format on

class GoalSelectorComponent {
public:
    // GoalSelectorComponent inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using GoalMap = std::vector<std::pair<GoalId, PrioritizedGoal>>;
#else // @header-generator platform
    using GoalCondition = bool (*)(::std::pair<::GoalId, ::PrioritizedGoal>&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using GoalCondition = bool (*)(std::pair<GoalId, PrioritizedGoal>&);
#else // @header-generator platform
    using GoalElement = ::std::pair<::GoalId, ::PrioritizedGoal>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using GoalElement = std::pair<GoalId, PrioritizedGoal>;
#else // @header-generator platform
    using GoalMap = ::std::vector<::std::pair<::GoalId, ::PrioritizedGoal>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::pair<GoalId, PrioritizedGoal>>> mGoalMap;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::GoalId, ::PrioritizedGoal>>> mGoalMap;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    GoalSelectorComponent& operator=(GoalSelectorComponent const&);
    GoalSelectorComponent(GoalSelectorComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI const std::pair<GoalId, PrioritizedGoal>* _findGoalByKey(::GoalId) const;
#else // @header-generator platform
    MCAPI void addGoal(int priority, ::std::unique_ptr<::BaseGoal> goal);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addGoal(int, std::unique_ptr<BaseGoal>);
#else // @header-generator platform
    MCAPI void buildDebugInfo(::std::string& out) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void buildDebugInfo(std::string&) const;
#else // @header-generator platform
    MCAPI void clearAllGoals();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearAllGoals();
#else // @header-generator platform
    MCAPI void onPlayerDimensionChanged(::Player* player, ::DimensionType fromDimension, ::DimensionType toDimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearNonTargetedGoals();
#else // @header-generator platform
    MCAPI bool removeGoal(::GoalId typeId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearTargetGoals();

    MCNAPI void onPlayerDimensionChanged(::Player*, ::DimensionType, ::DimensionType);

    MCNAPI bool removeGoal(::GoalId);

    MCNAPI void stopAllGoals();

    MCNAPI void stopNonTargetedGoals();
#else // @header-generator platform
    MCAPI void stopNonTargetedGoals();
#endif // @header-generator platform
    // NOLINTEND
};
