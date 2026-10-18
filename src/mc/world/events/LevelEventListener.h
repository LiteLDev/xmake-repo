#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
class Player;
struct LevelNotificationEvent;
// clang-format on

class LevelEventListener {
public:
    // LevelEventListener inner types define
    using EventType = ::LevelNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~LevelEventListener();
#else // @header-generator platform
    virtual ~LevelEventListener() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelInitialized(::Level&);
#else // @header-generator platform
    virtual ::EventResult onLevelInitialized(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelAddedPlayer(::Player&);
#else // @header-generator platform
    virtual ::EventResult onLevelAddedPlayer(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelRemovedPlayer(::Player&);
#else // @header-generator platform
    virtual ::EventResult onLevelRemovedPlayer(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelRemovedActor(::Actor&);
#else // @header-generator platform
    virtual ::EventResult onLevelRemovedActor(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelTick(::Level&);
#else // @header-generator platform
    virtual ::EventResult onLevelTick(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelTickStart(::Level&);
#else // @header-generator platform
    virtual ::EventResult onLevelTickStart(::Level& level);
#endif // @header-generator platform

    virtual ::EventResult onLevelTickEnd(::Level&);

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onLevelWeatherChange(std::string const&, bool, bool, bool, bool);
#else // @header-generator platform
    virtual ::EventResult onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onRealmsStory(std::string const&);
#else // @header-generator platform
    virtual ::EventResult onRealmsStory(::std::string const& storyData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::LevelNotificationEvent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::EventResult onEvent(::LevelNotificationEvent const& event);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelInitialized(::Level&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLevelInitialized(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelAddedPlayer(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLevelAddedPlayer(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelRemovedPlayer(::Player&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLevelRemovedPlayer(::Player& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelRemovedActor(::Actor&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLevelRemovedActor(::Actor& actor);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelTick(::Level&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLevelTick(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelTickStart(::Level&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLevelTickStart(::Level& level);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelTickEnd(::Level&);
#else // @header-generator platform
    MCFOLD ::EventResult $onLevelTickEnd(::Level&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onLevelWeatherChange(std::string const&, bool, bool, bool, bool);
#else // @header-generator platform
    MCFOLD ::EventResult $onLevelWeatherChange(
        ::std::string const& dimension,
        bool                 wasRaining,
        bool                 wasLightning,
        bool                 isRaining,
        bool                 isLightning
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onRealmsStory(std::string const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onRealmsStory(::std::string const& storyData);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::LevelNotificationEvent const&);
#else // @header-generator platform
    MCFOLD ::EventResult $onEvent(::LevelNotificationEvent const& event);


#endif // @header-generator platform
    // NOLINTEND
};
