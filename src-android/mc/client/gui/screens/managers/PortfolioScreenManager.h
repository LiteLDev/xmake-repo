#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
