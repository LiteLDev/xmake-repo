#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class Player;
// clang-format on

class PortfolioScreenManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>       mPlayer;
    ::ll::TypedStorage<8, 8, ::PacketSender&> mPacketSender;
    ::ll::UntypedStorage<8, 24>               mPickPictures;
    ::ll::TypedStorage<1, 1, bool>            mIsEdu;
    ::ll::TypedStorage<1, 1, bool>            mEdited;
    // NOLINTEND

public:
    // prevent constructor by default
    PortfolioScreenManager& operator=(PortfolioScreenManager const&);
    PortfolioScreenManager(PortfolioScreenManager const&);
    PortfolioScreenManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addPickPicture(::Core::PathBuffer<std::string> const&);

    MCNAPI std::string getPickPhotoName(int);

    MCNAPI void getPickPics();

    MCNAPI ::Core::PathBuffer<std::string> const* getPickPicture(int);

    MCNAPI ulong getPickPictureSize();

    MCNAPI void removePickPicture(int);

    MCNAPI ~PortfolioScreenManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class Player;
// clang-format on

class PortfolioScreenManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                         mPlayer;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                   mPacketSender;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>> mPickPictures;
    ::ll::TypedStorage<1, 1, bool>                                              mIsEdu;
    ::ll::TypedStorage<1, 1, bool>                                              mEdited;
    // NOLINTEND

public:
    // prevent constructor by default
    PortfolioScreenManager& operator=(PortfolioScreenManager const&);
    PortfolioScreenManager(PortfolioScreenManager const&);
    PortfolioScreenManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getPickPhotoName(int index);

    MCAPI void getPickPics();
    // NOLINTEND
};
#else // @header-generator platform
class PortfolioScreenManager {};
#endif // @header-generator platform
#endif // @header-generator platform
