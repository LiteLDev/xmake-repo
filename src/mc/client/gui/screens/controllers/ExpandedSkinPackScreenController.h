#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/persona/SkinHandle.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class SkinPackCollectionModel;
class SkinPackModel;
class StoreCatalogItem;
namespace Json { class Value; }
// clang-format on

class ExpandedSkinPackScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SkinPackCollectionModel&> mSkinPackCollection;
    ::ll::TypedStorage<8, 8, ::SkinPackModel&>           mSkinPackModel;
    ::ll::TypedStorage<8, 96, ::SkinHandle>              mPreviewSkinHandle;
    ::ll::TypedStorage<8, 96, ::SkinHandle const>        mInitialSkinHandle;
    ::ll::TypedStorage<4, 4, int>                        mHoverSkin;
    ::ll::TypedStorage<1, 1, bool>                       mForceSkinUpdate;
    ::ll::TypedStorage<1, 1, bool>                       mContentAreaActive;
    ::ll::TypedStorage<1, 1, bool>                       mRightSideVisible;
    ::ll::TypedStorage<1, 1, bool>                       mLeftSideVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpandedSkinPackScreenController& operator=(ExpandedSkinPackScreenController const&);
    ExpandedSkinPackScreenController(ExpandedSkinPackScreenController const&);
    ExpandedSkinPackScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExpandedSkinPackScreenController() = default;

    virtual ::ui::DirtyFlag tick();

    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/persona/SkinHandle.h"

// auto generated forward declare list
// clang-format off
class SkinPackCollectionModel;
class SkinPackModel;
namespace Json { class Value; }
// clang-format on

class ExpandedSkinPackScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SkinPackCollectionModel&> mSkinPackCollection;
    ::ll::TypedStorage<8, 8, ::SkinPackModel&>           mSkinPackModel;
    ::ll::TypedStorage<8, 112, ::SkinHandle>             mPreviewSkinHandle;
    ::ll::TypedStorage<8, 112, ::SkinHandle const>       mInitialSkinHandle;
    ::ll::TypedStorage<4, 4, int>                        mHoverSkin;
    ::ll::TypedStorage<1, 1, bool>                       mForceSkinUpdate;
    ::ll::TypedStorage<1, 1, bool>                       mContentAreaActive;
    ::ll::TypedStorage<1, 1, bool>                       mRightSideVisible;
    ::ll::TypedStorage<1, 1, bool>                       mLeftSideVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    ExpandedSkinPackScreenController& operator=(ExpandedSkinPackScreenController const&);
    ExpandedSkinPackScreenController(ExpandedSkinPackScreenController const&);
    ExpandedSkinPackScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExpandedSkinPackScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class ExpandedSkinPackScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
