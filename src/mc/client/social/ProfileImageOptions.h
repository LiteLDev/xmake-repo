#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class ProfileImageOptions {
public:
    // ProfileImageOptions inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ProfileImageQueryType : int {
        None                         = 0,
        MinecraftHeadshotByXuid      = 1,
        MinecraftHeadshotByPlayfabId = 2,
        MinecraftAvatarByXuid        = 3,
        MinecraftAvatarByPlayfabId   = 4,
        XboxLiveSmallGamerpicByXuid  = 5,
        XboxLiveSmallGamerpicByUrl   = 6,
        XboxLiveFullClubsImageByUrl  = 7,
        MinecraftSkinByXuid          = 8,
        MinecraftSkinByPlayfabId     = 9,
    };
#else // @header-generator platform
    enum class ImageSource : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    enum class ImageSource : int {
        None      = 0,
        Minecraft = 1,
        XboxLive  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Social::ProfileImageOptions::ProfileImageQueryType> mType;
    ::ll::TypedStorage<8, 24, std::string>                                         mUserId;
    ::ll::TypedStorage<8, 24, std::string>                                         mUrl;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfileImageOptions& operator=(ProfileImageOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool empty() const;

    MCNAPI ::Social::ProfileImageOptions::ImageSource getImageSource() const;

    MCNAPI ::Social::ProfileImageOptions::ProfileImageQueryType getQueryType() const;

    MCNAPI std::string const& getUrl() const;

    MCNAPI std::string const& getUserId() const;

    MCNAPI ulong hash() const;

    MCNAPI bool operator==(::Social::ProfileImageOptions const&) const;

    MCNAPI std::string toString() const;

    MCNAPI ~ProfileImageOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Social::ProfileImageOptions fromString(std::string_view);

    MCNAPI static ::Social::ProfileImageOptions getMinecraftAvatarByPlayfabId(std::string const&);

    MCNAPI static ::Social::ProfileImageOptions getMinecraftAvatarByXuid(std::string const&);

    MCNAPI static ::Social::ProfileImageOptions getMinecraftHeadshotByPlayfabId(std::string const&);

    MCNAPI static ::Social::ProfileImageOptions getMinecraftHeadshotByXuid(std::string const&);

    MCNAPI static ::Social::ProfileImageOptions getMinecraftSkinByPlayfabId(std::string const&);

    MCNAPI static ::Social::ProfileImageOptions getMinecraftSkinByXuid(std::string const&);

    MCNAPI static ::Social::ProfileImageOptions getXboxLiveFullClubsImageByUrl(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
    enum class ProfileImageQueryType : int {};
#endif // @header-generator platform
};

} // namespace Social
