#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/world/level/WorldPosition.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ActorUniqueID;
// clang-format on

class Waypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::WorldPosition>            mWorldPos;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>>  mColor;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mTexturePath;
    ::ll::TypedStorage<4, 8, ::Vec2>                      mIconSize;
    ::ll::TypedStorage<1, 1, bool>                        mIsVisible;
    ::ll::TypedStorage<1, 1, bool>                        mClientPositionAuthority;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Waypoint();

    virtual void setWorldPosition(::WorldPosition const&);

    virtual void setColor(std::optional<mce::Color> const&);

    virtual void setIsVisible(bool);

    virtual void setClientPositionAuthority(bool);

    virtual void setTexturePath(std::optional<std::string> const&);

    virtual void setIconSize(::Vec2 const&);

    virtual std::optional<ActorUniqueID> tryGetActorID() const;

    virtual void update(::Player const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<mce::Color> const& getColor() const;

    MCNAPI ::Vec2 const& getIconSize() const;

    MCNAPI std::optional<std::string> const& getTexturePath() const;

    MCNAPI ::WorldPosition const& getWorldPosition() const;

    MCNAPI bool isVisible() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setWorldPosition(::WorldPosition const&);

    MCNAPI void $setColor(std::optional<mce::Color> const&);

    MCNAPI void $setIsVisible(bool);

    MCNAPI void $setClientPositionAuthority(bool);

    MCNAPI void $setTexturePath(std::optional<std::string> const&);

    MCNAPI void $setIconSize(::Vec2 const&);

    MCNAPI std::optional<ActorUniqueID> $tryGetActorID() const;

    MCNAPI void $update(::Player const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
