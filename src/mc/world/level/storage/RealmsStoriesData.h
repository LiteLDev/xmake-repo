#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/storage/RealmEventForPlayer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/storage/RealmEventId.h"

// auto generated forward declare list
// clang-format off
class LevelStorage;
// clang-format on

class RealmsStoriesData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::set<RealmEventId>>        mPublishedWorldRealmEvents;
    ::ll::TypedStorage<8, 24, std::set<RealmEventForPlayer>> mPublishedPlayerRealmEvents;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                mLevelStorage;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk28ab59;
    ::ll::UntypedStorage<8, 16> mUnk61f101;
    ::ll::UntypedStorage<8, 8>  mUnk6e3afa;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesData& operator=(RealmsStoriesData const&);
    RealmsStoriesData(RealmsStoriesData const&);
    RealmsStoriesData();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit RealmsStoriesData(::LevelStorage&);
#else // @header-generator platform
    MCNAPI explicit RealmsStoriesData(::LevelStorage& levelStorage);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setPlayerRealmEventPublished(::RealmEventId, std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCNAPI void clearAllRealmEventsInLevelData();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setWorldRealmEventPublished(::RealmEventId);
#else // @header-generator platform
    MCNAPI void setPlayerRealmEventPublished(::RealmEventId eventId, ::std::string const& xuid);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool wasPlayerRealmEventPublished(::RealmEventId, std::string const&) const;
#else // @header-generator platform
    MCNAPI void setWorldRealmEventPublished(::RealmEventId eventId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool wasWorldRealmEventPublished(::RealmEventId) const;
#else // @header-generator platform
    MCNAPI bool wasPlayerRealmEventPublished(::RealmEventId eventId, ::std::string const& xuid) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::RealmEventId getRealmEventIdFromInternalName(std::string const&);

    MCNAPI static std::string const& getRealmEventInternalName(::RealmEventId);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI static ::RealmEventId getRealmEventIdFromInternalName(::std::string const& internalName);
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& REALMS_STORIES_PREFIX();
#else // @header-generator platform
    MCNAPI static ::std::string const& REALMS_STORIES_PREFIX();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::map<RealmEventId, std::string> const& mRealmEventInternalNames();
#else // @header-generator platform
    MCNAPI static ::std::map<::RealmEventId, ::std::string> const& mRealmEventInternalNames();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::LevelStorage&);
#else // @header-generator platform
    MCNAPI void* $ctor(::LevelStorage& levelStorage);
#endif // @header-generator platform
    // NOLINTEND
};
