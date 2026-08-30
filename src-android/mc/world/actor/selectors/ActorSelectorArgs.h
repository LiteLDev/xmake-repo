#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/server/commands/CommandIntegerRange.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/world/actor/selectors/ActorSelectorType.h"
#include "mc/world/actor/selectors/CodeBuilderSelectorFilter.h"
#include "mc/world/actor/selectors/HasItemFilter.h"
#include "mc/world/actor/selectors/HasPermissionFilter.h"
#include "mc/world/actor/selectors/HasPropertyFilter.h"
#include "mc/world/actor/selectors/InvertableFilter.h"
#include "mc/world/level/GameType.h"

struct ActorSelectorArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorSelectorType>                                       mSelectionType;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                               mExplicitId;
    ::ll::UntypedStorage<8, 24>                                                         mTypeFilters;
    ::ll::UntypedStorage<8, 24>                                                         mTagFilters;
    ::ll::UntypedStorage<8, 24>                                                         mNameFilters;
    ::ll::UntypedStorage<8, 24>                                                         mFamilyFilters;
    ::ll::UntypedStorage<8, 24>                                                         mGameModeFilters;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                        mCount;
    ::ll::TypedStorage<4, 8, std::optional<float>>                                      mRadiusMax;
    ::ll::TypedStorage<4, 8, std::optional<float>>                                      mRadiusMin;
    ::ll::TypedStorage<4, 20, std::optional<CommandPosition>>                           mPosition;
    ::ll::TypedStorage<4, 16, std::optional<Vec3>>                                      mDeltas;
    ::ll::TypedStorage<4, 12, std::optional<std::pair<float, float>>>                   mXRotation;
    ::ll::TypedStorage<4, 12, std::optional<std::pair<float, float>>>                   mYRotation;
    ::ll::TypedStorage<4, 12, std::optional<std::pair<int, int>>>                       mLevel;
    ::ll::TypedStorage<1, 2, std::optional<bool>>                                       mForceDimensionFiltering;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, CommandIntegerRange>>> mScoreFilters;
    ::ll::TypedStorage<8, 24, std::vector<HasItemFilter>>                               mHasItemFilters;
    ::ll::TypedStorage<8, 24, std::vector<HasPermissionFilter>>                         mHasPermissionFilters;
    ::ll::TypedStorage<8, 24, std::vector<HasPropertyFilter>>                           mHasPropertyFilters;
    ::ll::TypedStorage<8, 24, std::vector<CodeBuilderSelectorFilter>>                   mCodeBuilderFilters;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorSelectorArgs();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::pair<int, int> const& DEFAULT_LEVEL();

    MCNAPI static std::pair<float, float> const& DEFAULT_X_ROTATION();

    MCNAPI static std::pair<float, float> const& DEFAULT_Y_ROTATION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
