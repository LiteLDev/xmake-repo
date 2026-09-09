#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/selectors/InvertableFilter.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandIntegerRange;
class CommandOrigin;
class CommandRationalRange;
struct HasPermissionFilter;
// clang-format on

class CommandSelectorBase {
public:
    // CommandSelectorBase inner types define
    using FilterFunc = std::function<bool(const CommandOrigin&, const Actor&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                                   mVersion;
    ::ll::TypedStorage<4, 4, ::CommandSelectionType>                                                mType;
    ::ll::TypedStorage<4, 4, ::CommandSelectionOrder>                                               mOrder;
    ::ll::UntypedStorage<8, 24>                                                                     mNameFilters;
    ::ll::UntypedStorage<8, 24>                                                                     mTypeFilters;
    ::ll::UntypedStorage<8, 24>                                                                     mFamilyFilters;
    ::ll::UntypedStorage<8, 24>                                                                     mTagFilters;
    ::ll::TypedStorage<8, 24, std::vector<std::function<bool(const CommandOrigin&, const Actor&)>>> mFilterChain;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                                                    mPosition;
    ::ll::TypedStorage<4, 12, ::Vec3>                                                               mBoxDeltas;
    ::ll::TypedStorage<4, 4, float>                                                                 mRadiusMinSqr;
    ::ll::TypedStorage<4, 4, float>                                                                 mRadiusMaxSqr;
    ::ll::TypedStorage<8, 8, ulong>                                                                 mCount;
    ::ll::TypedStorage<1, 1, bool>                                                                  mIncludeDeadPlayers;
    ::ll::TypedStorage<1, 1, bool>                                                                  mIsPositionBound;
    ::ll::TypedStorage<1, 1, bool>                                                                  mDistanceFiltered;
    ::ll::TypedStorage<1, 1, bool>                                                                  mPositionFiltered;
    ::ll::TypedStorage<1, 1, bool>                                                                  mCountFiltered;
    ::ll::TypedStorage<1, 1, bool>                                                                  mHaveDeltas;
    ::ll::TypedStorage<1, 1, bool>                                                                  mForcePlayer;
    ::ll::TypedStorage<1, 1, bool>                                                                  mExcludeAgents;
    ::ll::TypedStorage<1, 1, bool> mIsExplicitIdSelector;
    ::ll::TypedStorage<1, 1, bool> mForceDimensionFiltering;
    ::ll::TypedStorage<1, 1, bool> mIsNameFiltersOnlyInChain;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandSelectorBase& operator=(CommandSelectorBase const&);
    CommandSelectorBase();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addFilter(std::function<bool(const CommandOrigin&, const Actor&)>);

    MCNAPI void addHasPermissionFilters(std::vector<HasPermissionFilter> const&);

    MCNAPI void addLevelFilter(std::pair<int, int> const&);

    MCNAPI void addXRotationFilter(std::pair<float, float> const&);

    MCNAPI void addYRotationFilter(std::pair<float, float> const&);

    MCNAPI bool compile(::CommandOrigin const&, std::string&);

    MCNAPI bool filter(::CommandOrigin const&, ::Actor&) const;

    MCNAPI std::string getName() const;

    MCNAPI ulong getResultCount() const;

    MCNAPI bool hasName() const;

    MCNAPI bool isExpansionAllowed(::CommandOrigin const&) const;

    MCNAPI bool isExplicitIdSelector() const;

    MCNAPI bool matchFamily(::Actor const&) const;

    MCNAPI bool matchName(::Actor const&) const;

    MCNAPI bool matchTag(::Actor const&) const;

    MCNAPI bool matchType(::Actor const&) const;

    MCNAPI std::shared_ptr<std::vector<Actor*>> newResults(::CommandOrigin const&) const;

    MCNAPI void setIncludeDeadPlayers(bool);

    MCNAPI void setType(::CommandSelectionType);

    MCNAPI void setVersion(int);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Vec3 const getFeetPos(int const, ::Actor const&);
    // NOLINTEND
};
