#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/scores/ScoreInfo.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/scores/ObjectiveRenderType.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/scores/ScoreboardId.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/scores/ScoreboardOperationResult.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CompoundTag;
#else // @header-generator platform
#endif // @header-generator platform
class ObjectiveCriteria;
#if defined(LL_PLAT_A) // @header-generator platform
class Scoreboard;
class ScoreboardIdentityRef;
struct ScoreInfo;
struct ScoreInfoRef;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class Objective : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, std::unordered_map<ScoreboardId, int>> mScores;
    ::ll::TypedStorage<8, 24, std::string const>                     mName;
    ::ll::TypedStorage<8, 24, std::string>                           mDisplayName;
    ::ll::TypedStorage<8, 8, ::ObjectiveCriteria const&>             mCriteria;
#else // @header-generator platform
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ScoreboardId, int>> mScores;
    ::ll::TypedStorage<8, 32, ::std::string const>                       mName;
    ::ll::TypedStorage<8, 32, ::std::string>                             mDisplayName;
    ::ll::TypedStorage<8, 8, ::ObjectiveCriteria const&>                 mCriteria;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    [[nodiscard]] ScoreInfo getPlayerScore(::ScoreboardId const& id) const {
        auto it = mScores->find(id);
        if (it == mScores->end()) {
            return ScoreInfo{nullptr, false, 0};
        }
        return ScoreInfo{this, true, it->second};
    }
#endif // @header-generator platform

public:
    // prevent constructor by default
    Objective& operator=(Objective const&);
    Objective(Objective const&);
    Objective();

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
    virtual ~Objective();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Objective(std::string const&, ::ObjectiveCriteria const&);
#else // @header-generator platform
    MCAPI Objective(::std::string const& name, ::ObjectiveCriteria const& criteria);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScoreboardOperationResult _modifyPlayerScore(int&, ::ScoreboardId const&, int, ::PlayerScoreSetFunction);

    MCNAPI ::ObjectiveCriteria const& getCriteria() const;

    MCNAPI std::string const& getDisplayName() const;

    MCNAPI std::string const& getName() const;

    MCNAPI ::ScoreInfo getPlayerScore(::ScoreboardId const&) const;

    MCNAPI std::vector<ScoreboardId> getPlayers() const;

    MCNAPI std::unordered_map<ScoreboardId, int> const& getScores() const;

    MCNAPI bool hasScore(::ScoreboardId const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::std::vector<::ScoreboardId> getPlayers() const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, ::ObjectiveCriteria const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string const& name, ::ObjectiveCriteria const& criteria);
#endif // @header-generator platform
    // NOLINTEND
};
