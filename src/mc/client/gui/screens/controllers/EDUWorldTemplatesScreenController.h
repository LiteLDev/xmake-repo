#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/edu_screen_helpers/InstanceType.h"
#include "mc/client/gui/screens/controllers/edu_screen_helpers/TemplateType.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class PackManifest;
class PlayScreenModel;
class UIPropertyBag;
struct LevelSummary;
namespace EDUScreenHelpers { class TemplateWrapper; }
// clang-format on

class EDUWorldTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::shared_ptr<PlayScreenModel>>   mPlayScreenModel;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LibraryCollection>> mLibraryCollection;
    ::ll::TypedStorage<1, 1, bool>                                mScreenNeedsRefresh;
    ::ll::TypedStorage<8, 24, std::string>                        mSearchString;
    ::ll::TypedStorage<8, 24, std::vector<ulong>>                 mMatchedTemplates;
    ::ll::UntypedStorage<8, 16>                                   mLocalTemplateCount;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUWorldTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUWorldTemplatesScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EDUWorldTemplatesScreenController(std::shared_ptr<PlayScreenModel>);

    MCNAPI void _createOrDeleteTemplate(::UIPropertyBag&, ::EDUScreenHelpers::InstanceType);

    MCNAPI ulong _getTileIndex(::UIPropertyBag&) const;

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();

    MCNAPI void _registerNestedControls();

    MCNAPI void _registerSubcontrollers();

    MCNAPI void _useTemplate(::PackManifest const&, ::EDUScreenHelpers::InstanceType, std::string_view);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<PlayScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/edu_screen_helpers/InstanceType.h"

// auto generated forward declare list
// clang-format off
class LibraryCollection;
class PackManifest;
class PlayScreenModel;
class UIPropertyBag;
// clang-format on

class EDUWorldTemplatesScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>   mPlayScreenModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LibraryCollection>> mLibraryCollection;
    ::ll::TypedStorage<1, 1, bool>                                    mScreenNeedsRefresh;
    ::ll::TypedStorage<8, 32, ::std::string>                          mSearchString;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                  mMatchedTemplates;
    ::ll::TypedStorage<8, 8, uint64>                                  mLocalTemplateCount;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUWorldTemplatesScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUWorldTemplatesScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EDUWorldTemplatesScreenController(::std::shared_ptr<::PlayScreenModel> model);

    MCAPI void _createOrDeleteTemplate(::UIPropertyBag& bag, ::EDUScreenHelpers::InstanceType instanceType);

    MCAPI void _useTemplate(
        ::PackManifest const&            manifest,
        ::EDUScreenHelpers::InstanceType type,
        ::std::string_view               templateName
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static uint64 _getTileIndex(::UIPropertyBag& bag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::PlayScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND
};
#else // @header-generator platform
class EDUWorldTemplatesScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
