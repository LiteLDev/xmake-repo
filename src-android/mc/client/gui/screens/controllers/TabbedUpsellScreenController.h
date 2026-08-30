#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/TabbedUpsellScreenDefaultTab.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
namespace Json { class Value; }
// clang-format on

class TabbedUpsellScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TabbedUpsellScreenDefaultTab> mActiveTabIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    TabbedUpsellScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TabbedUpsellScreenController();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual std::string getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TabbedUpsellScreenController(std::shared_ptr<MinecraftScreenModel>, ::TabbedUpsellScreenDefaultTab);

    MCNAPI std::string _getActiveTab() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<MinecraftScreenModel>, ::TabbedUpsellScreenDefaultTab);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI std::string $getAdditionalScreenInfo() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
