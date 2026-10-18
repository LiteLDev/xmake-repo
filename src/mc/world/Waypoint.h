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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, ::WorldPosition>            mWorldPos;
    ::ll::TypedStorage<4, 20, std::optional<mce::Color>>  mColor;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mTexturePath;
    ::ll::TypedStorage<4, 8, ::Vec2>                      mIconSize;
    ::ll::TypedStorage<1, 1, bool>                        mIsVisible;
    ::ll::TypedStorage<1, 1, bool>                        mClientPositionAuthority;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::WorldPosition>                mWorldPos;
    ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>  mColor;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mTexturePath;
    ::ll::TypedStorage<4, 8, ::Vec2>                          mIconSize;
    ::ll::TypedStorage<1, 1, bool>                            mIsVisible;
    ::ll::TypedStorage<1, 1, bool>                            mClientPositionAuthority;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Waypoint();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWorldPosition(::WorldPosition const&);
#else // @header-generator platform
    virtual void setWorldPosition(::WorldPosition const& worldPosition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setColor(std::optional<mce::Color> const&);
#else // @header-generator platform
    virtual void setColor(::std::optional<::mce::Color> const& color);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setIsVisible(bool);
#else // @header-generator platform
    virtual void setIsVisible(bool isVisible);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setClientPositionAuthority(bool);
#else // @header-generator platform
    virtual void setClientPositionAuthority(bool clientPositionAuthority);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTexturePath(std::optional<std::string> const&);
#else // @header-generator platform
    virtual void setTexturePath(::std::optional<::std::string> const& texturePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setIconSize(::Vec2 const&);
#else // @header-generator platform
    virtual void setIconSize(::Vec2 const& iconSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<ActorUniqueID> tryGetActorID() const;
#else // @header-generator platform
    virtual ::std::optional<::ActorUniqueID> tryGetActorID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual void update(::Player const& viewingPlayer);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setWorldPosition(::WorldPosition const&);
#else // @header-generator platform
    MCFOLD void $setWorldPosition(::WorldPosition const& worldPosition);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setColor(std::optional<mce::Color> const&);
#else // @header-generator platform
    MCAPI void $setColor(::std::optional<::mce::Color> const& color);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setIsVisible(bool);
#else // @header-generator platform
    MCAPI void $setIsVisible(bool isVisible);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setClientPositionAuthority(bool);
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI void $setClientPositionAuthority(bool clientPositionAuthority);
#else // LL_PLAT_C
    MCFOLD void $setClientPositionAuthority(bool clientPositionAuthority);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setTexturePath(std::optional<std::string> const&);
#else // @header-generator platform
    MCAPI void $setTexturePath(::std::optional<::std::string> const& texturePath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setIconSize(::Vec2 const&);
#else // @header-generator platform
    MCAPI void $setIconSize(::Vec2 const& iconSize);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ActorUniqueID> $tryGetActorID() const;
#else // @header-generator platform
    MCFOLD ::std::optional<::ActorUniqueID> $tryGetActorID() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $update(::Player const&);
#else // @header-generator platform
    MCFOLD void $update(::Player const& viewingPlayer);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
