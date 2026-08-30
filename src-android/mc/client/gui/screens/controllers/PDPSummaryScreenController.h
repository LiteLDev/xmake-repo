#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ScreenExitBehavior.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class StoreCatalogItem;
namespace Json { class Value; }
// clang-format on

class PDPSummaryScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mItem;
    ::ll::UntypedStorage<4, 16> mCollectionIndexOffset;
    // NOLINTEND

public:
    // prevent constructor by default
    PDPSummaryScreenController& operator=(PDPSummaryScreenController const&);
    PDPSummaryScreenController(PDPSummaryScreenController const&);
    PDPSummaryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addStaticScreenVars(::Json::Value&);
    // NOLINTEND
};
