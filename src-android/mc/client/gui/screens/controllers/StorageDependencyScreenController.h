#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class MainMenuScreenModel;
struct ContentItem;
struct PackContentItem;
// clang-format on

class StorageDependencyScreenController : public ::MainMenuScreenController {
public:
    // StorageDependencyScreenController inner types define
    using ConstPackContentItemPtr = std::shared_ptr<const PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                   mContentManager;
    ::ll::TypedStorage<8, 8, std::vector<std::shared_ptr<const ContentItem>>&>     mSelectedItems;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<const PackContentItem>>> mDependentItems;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageDependencyScreenController& operator=(StorageDependencyScreenController const&);
    StorageDependencyScreenController(StorageDependencyScreenController const&);
    StorageDependencyScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StorageDependencyScreenController();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _populateAllDependencies(std::vector<std::shared_ptr<const PackContentItem>> const&);

    MCNAPI void _populateDependencies();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
