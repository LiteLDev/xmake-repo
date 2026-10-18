#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandSelectionOrder.h"
#include "mc/server/commands/CommandSelectionType.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/selectors/InvertableFilter.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/GameType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class CommandIntegerRange;
#else // @header-generator platform
#endif // @header-generator platform
class CommandOrigin;
#if defined(LL_PLAT_A) // @header-generator platform
class CommandRationalRange;
struct HasPermissionFilter;
#else // @header-generator platform
class HashedString;
struct ActorDefinitionIdentifier;
#endif // @header-generator platform
// clang-format on

class CommandSelectorBase {
public:
    // CommandSelectorBase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using FilterFunc = std::function<bool(const CommandOrigin&, const Actor&)>;
#else // @header-generator platform
    using FilterFunc = ::std::function<bool(::CommandOrigin const&, ::Actor const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    int                                                                          mVersion{};
    ::CommandSelectionType                                                       mType{};
    ::CommandSelectionOrder                                                      mOrder{};
    ::std::vector<::InvertableFilter<::std::string>>                             mNameFilters{};
    ::std::vector<::InvertableFilter<::ActorDefinitionIdentifier>>               mTypeFilters{};
    ::std::vector<::InvertableFilter<::HashedString>>                            mFamilyFilters{};
    ::std::vector<::InvertableFilter<::std::string>>                             mTagFilters{};
    ::std::vector<::std::function<bool(::CommandOrigin const&, ::Actor const&)>> mFilterChain{};
    ::CommandPosition                                                            mPosition{};
    ::Vec3                                                                       mBoxDeltas{};
    float                                                                        mRadiusMinSqr{0.0f};
    float  mRadiusMaxSqr{std::numeric_limits<float>::max()};
    uint64 mCount{std::numeric_limits<uint>::max()};
    bool   mIncludeDeadPlayers{};
    bool   mIsPositionBound{};
    bool   mDistanceFiltered{};
    bool   mPositionFiltered{};
    bool   mCountFiltered{};
    bool   mHaveDeltas{};
    bool   mForcePlayer{};
    bool   mExcludeAgents{};
    bool   mIsExplicitIdSelector{};
    bool   mForceDimensionFiltering{};
    bool   mIsNameFiltersOnlyInChain{};
#endif // @header-generator platform
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // prevent constructor by default
    CommandSelectorBase& operator=(CommandSelectorBase const&);
    CommandSelectorBase();
#else // @header-generator platform
    CommandSelectorBase() = default;
    CommandSelectorBase(bool forcePlayer) : mForcePlayer(forcePlayer) {}
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addFilter(std::function<bool(const CommandOrigin&, const Actor&)>);
#else // @header-generator platform
    MCAPI void addFilter(::std::function<bool(::CommandOrigin const&, ::Actor const&)> filter);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addHasPermissionFilters(std::vector<HasPermissionFilter> const&);
#else // @header-generator platform
    MCAPI bool compile(::CommandOrigin const& origin, ::std::string& error);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addLevelFilter(std::pair<int, int> const&);
#else // @header-generator platform
    MCAPI bool filter(::CommandOrigin const& origin, ::Actor& actor) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addXRotationFilter(std::pair<float, float> const&);
#else // @header-generator platform
    MCAPI ::std::string getName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addYRotationFilter(std::pair<float, float> const&);
#else // @header-generator platform
    MCAPI bool isExpansionAllowed(::CommandOrigin const& origin) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool compile(::CommandOrigin const&, std::string&);
#else // @header-generator platform
    MCAPI bool matchFamily(::Actor const& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool filter(::CommandOrigin const&, ::Actor&) const;
#else // @header-generator platform
    MCAPI bool matchName(::Actor const& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getName() const;
#else // @header-generator platform
    MCAPI bool matchTag(::Actor const& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong getResultCount() const;
#else // @header-generator platform
    MCAPI bool matchType(::Actor const& entity) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasName() const;
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::std::vector<::Actor*>> newResults(::CommandOrigin const& origin) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~CommandSelectorBase();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Vec3 const getFeetPos(int const, ::Actor const&);
#else // @header-generator platform
    MCAPI static ::Vec3 const getFeetPos(int const version, ::Actor const& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
