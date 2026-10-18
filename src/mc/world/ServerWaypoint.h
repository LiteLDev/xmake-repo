#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/Waypoint.h"
#include "mc/world/level/WorldPosition.h"

// auto generated forward declare list
// clang-format off
class Player;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ServerWaypoint : public ::Waypoint {
public:
    // ServerWaypoint inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Payload;
#endif // @header-generator platform
    struct Texture;
    struct TextureSelector;
#if defined(LL_PLAT_A) // @header-generator platform
    struct Payload;
#else // @header-generator platform
#endif // @header-generator platform
    // clang-format on

    // ServerWaypoint inner types define
    enum class UpdateFlags : uint {
        // bitfield representation
        Position                = 1u << 0,
        Visibility              = 1u << 1,
        TexturePath             = 1u << 2,
        IconSize                = 1u << 3,
        Color                   = 1u << 4,
        ClientPositionAuthority = 1u << 5,
        All                     = Position | Visibility | TexturePath | IconSize | Color | ClientPositionAuthority,
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct Payload {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                              mUpdateFlag;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>             mIsVisible;
        ::ll::TypedStorage<4, 20, ::std::optional<::WorldPosition>> mWorldPosition;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>   mTexturePath;
        ::ll::TypedStorage<4, 12, ::std::optional<::Vec2>>          mIconSize;
        ::ll::TypedStorage<4, 20, ::std::optional<::mce::Color>>    mColor;
        ::ll::TypedStorage<1, 2, ::std::optional<bool>>             mClientPositionAuthority;
        ::ll::TypedStorage<8, 16, ::std::optional<::ActorUniqueID>> mActorID;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::ServerWaypoint::Payload const&) const;

        MCAPI ~Payload();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

#endif // @header-generator platform
    struct Texture {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, int>                mLowerBound;
        ::ll::TypedStorage<4, 8, std::optional<int>> mUpperBound;
        ::ll::TypedStorage<8, 24, std::string>       mTexturePath;
        ::ll::TypedStorage<4, 8, ::Vec2>             mIconSize;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, int>                  mLowerBound;
        ::ll::TypedStorage<4, 8, ::std::optional<int>> mUpperBound;
        ::ll::TypedStorage<8, 32, ::std::string>       mTexturePath;
        ::ll::TypedStorage<4, 8, ::Vec2>               mIconSize;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct TextureSelector {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<ServerWaypoint::Texture>> mTextures;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextureSelector();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~TextureSelector();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Payload {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                          mUpdateFlag;
        ::ll::TypedStorage<1, 2, std::optional<bool>>           mIsVisible;
        ::ll::TypedStorage<4, 20, std::optional<WorldPosition>> mWorldPosition;
        ::ll::TypedStorage<8, 32, std::optional<std::string>>   mTexturePath;
        ::ll::TypedStorage<4, 12, std::optional<Vec2>>          mIconSize;
        ::ll::TypedStorage<4, 20, std::optional<mce::Color>>    mColor;
        ::ll::TypedStorage<1, 2, std::optional<bool>>           mClientPositionAuthority;
        ::ll::TypedStorage<8, 16, std::optional<ActorUniqueID>> mActorID;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::ServerWaypoint::Payload const&) const;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<::ServerWaypoint::Texture>> mTextures;
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                               mIsEnabled;
    ::ll::TypedStorage<8, 24, ::ServerWaypoint::TextureSelector> mTextureSelector;
    ::ll::TypedStorage<4, 4, uint>                               mUpdateFlags;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ServerWaypoint();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ServerWaypoint();
#else // @header-generator platform
    virtual void setWorldPosition(::WorldPosition const& worldPosition) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setWorldPosition(::WorldPosition const&);
#else // @header-generator platform
    virtual void setColor(::std::optional<::mce::Color> const& color) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setColor(std::optional<mce::Color> const&);
#else // @header-generator platform
    virtual void setIsVisible(bool isVisible) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setIsVisible(bool);
#else // @header-generator platform
    virtual void setClientPositionAuthority(bool clientPositionAuthority) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setClientPositionAuthority(bool);
#else // @header-generator platform
    virtual void setTexturePath(::std::optional<::std::string> const& texturePath) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void setTexturePath(std::optional<std::string> const&);

    virtual void setIconSize(::Vec2 const&);

    virtual void update(::Player const&);
#else // @header-generator platform
    virtual void setIconSize(::Vec2 const& iconSize) /*override*/;
#endif // @header-generator platform

    virtual bool isValid() const;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool calculateIsVisible(::Player const&) const;
#else // @header-generator platform
    virtual bool calculateIsVisible(::Player const& viewingPlayer) const;

    virtual void update(::Player const& viewingPlayer) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ServerWaypoint::Payload generatePayload(uint);

    MCNAPI void setIsEnabled(bool);

    MCNAPI void setTextureSelector(::ServerWaypoint::TextureSelector const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI ::ServerWaypoint::Payload generatePayload(uint updateFlag);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $setWorldPosition(::WorldPosition const&);
#else // @header-generator platform
    MCAPI void $setWorldPosition(::WorldPosition const& worldPosition);
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
    MCAPI void $setClientPositionAuthority(bool clientPositionAuthority);
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
    MCNAPI void $update(::Player const&);
#else // @header-generator platform
    MCFOLD bool $isValid() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isValid() const;
#else // @header-generator platform
    MCAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $calculateIsVisible(::Player const&) const;
#else // @header-generator platform
    MCAPI void $update(::Player const& viewingPlayer);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
