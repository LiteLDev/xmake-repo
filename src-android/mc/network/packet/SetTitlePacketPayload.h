#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResolvedTextObject;
// clang-format on

struct SetTitlePacketPayload {
public:
    // SetTitlePacketPayload inner types define
    enum class TitleType : int {
        Clear               = 0,
        Reset               = 1,
        Title               = 2,
        Subtitle            = 3,
        Actionbar           = 4,
        Times               = 5,
        TitleTextObject     = 6,
        SubtitleTextObject  = 7,
        ActionbarTextObject = 8,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SetTitlePacketPayload::TitleType> mType;
    ::ll::TypedStorage<8, 24, std::string>                       mTitleText;
    ::ll::TypedStorage<8, 24, std::string>                       mFilteredTitleText;
    ::ll::TypedStorage<4, 4, int>                                mFadeInTime;
    ::ll::TypedStorage<4, 4, int>                                mStayTime;
    ::ll::TypedStorage<4, 4, int>                                mFadeOutTime;
    ::ll::TypedStorage<8, 24, std::string>                       mXuid;
    ::ll::TypedStorage<8, 24, std::string>                       mPlatformOnlineId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SetTitlePacketPayload(::SetTitlePacketPayload::TitleType);

    MCNAPI SetTitlePacketPayload(::SetTitlePacketPayload const&);

    MCNAPI SetTitlePacketPayload(::SetTitlePacketPayload::TitleType, ::ResolvedTextObject const&);

    MCNAPI
    SetTitlePacketPayload(::SetTitlePacketPayload::TitleType, std::string const&, std::optional<std::string> const);

    MCNAPI SetTitlePacketPayload(int, int, int);

    MCNAPI ~SetTitlePacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SetTitlePacketPayload::TitleType);

    MCNAPI void* $ctor(::SetTitlePacketPayload const&);

    MCNAPI void* $ctor(::SetTitlePacketPayload::TitleType, ::ResolvedTextObject const&);

    MCNAPI void* $ctor(::SetTitlePacketPayload::TitleType, std::string const&, std::optional<std::string> const);

    MCNAPI void* $ctor(int, int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
