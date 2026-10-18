#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
class Skin;
// clang-format on

struct PaperDollPlayerSkinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    ::ll::TypedStorage<8, 8, ::Skin const&>        mDefaultSkin;
    ::ll::TypedStorage<1, 1, bool>                 mCanUseSkin;
    ::ll::TypedStorage<1, 1, bool>                 mIsLocalPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollPlayerSkinInfo& operator=(PaperDollPlayerSkinInfo const&);
    PaperDollPlayerSkinInfo(PaperDollPlayerSkinInfo const&);
    PaperDollPlayerSkinInfo();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
class Skin;
// clang-format on

struct PaperDollPlayerSkinInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef> mSkin;
    ::ll::TypedStorage<8, 8, ::Skin const&>        mDefaultSkin;
    ::ll::TypedStorage<1, 1, bool>                 mCanUseSkin;
    ::ll::TypedStorage<1, 1, bool>                 mIsLocalPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PaperDollPlayerSkinInfo& operator=(PaperDollPlayerSkinInfo const&);
    PaperDollPlayerSkinInfo(PaperDollPlayerSkinInfo const&);
    PaperDollPlayerSkinInfo();
};
#else // @header-generator platform
struct PaperDollPlayerSkinInfo {};
#endif // @header-generator platform
#endif // @header-generator platform
