#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class ResolvedTextObject;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                       mTitleText;
    ::ll::TypedStorage<8, 24, std::string>                       mFilteredTitleText;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                     mTitleText;
    ::ll::TypedStorage<8, 32, ::std::string>                     mFilteredTitleText;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                mFadeInTime;
    ::ll::TypedStorage<4, 4, int>                                mStayTime;
    ::ll::TypedStorage<4, 4, int>                                mFadeOutTime;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                       mXuid;
    ::ll::TypedStorage<8, 24, std::string>                       mPlatformOnlineId;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                     mXuid;
    ::ll::TypedStorage<8, 32, ::std::string>                     mPlatformOnlineId;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SetTitlePacketPayload& operator=(SetTitlePacketPayload const&);
    SetTitlePacketPayload();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit SetTitlePacketPayload(::SetTitlePacketPayload::TitleType);
#else // @header-generator platform
    MCAPI SetTitlePacketPayload(::SetTitlePacketPayload const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SetTitlePacketPayload(::SetTitlePacketPayload const&);
#else // @header-generator platform
    MCAPI SetTitlePacketPayload(
        ::SetTitlePacketPayload::TitleType type,
        ::std::string const&               titleText,
        ::std::optional<::std::string>     filteredTitleText
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SetTitlePacketPayload(::SetTitlePacketPayload::TitleType, ::ResolvedTextObject const&);
#else // @header-generator platform
    MCAPI ::SetTitlePacketPayload& operator=(::SetTitlePacketPayload&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI
    SetTitlePacketPayload(::SetTitlePacketPayload::TitleType, std::string const&, std::optional<std::string> const);

    MCNAPI SetTitlePacketPayload(int, int, int);

    MCNAPI ~SetTitlePacketPayload();
#else // @header-generator platform
    MCAPI ~SetTitlePacketPayload();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SetTitlePacketPayload::TitleType);
#else // @header-generator platform
    MCAPI void* $ctor(::SetTitlePacketPayload const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SetTitlePacketPayload const&);

    MCNAPI void* $ctor(::SetTitlePacketPayload::TitleType, ::ResolvedTextObject const&);

    MCNAPI void* $ctor(::SetTitlePacketPayload::TitleType, std::string const&, std::optional<std::string> const);

    MCNAPI void* $ctor(int, int, int);
#else // @header-generator platform
    MCAPI void* $ctor(
        ::SetTitlePacketPayload::TitleType type,
        ::std::string const&               titleText,
        ::std::optional<::std::string>     filteredTitleText
    );
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
};
