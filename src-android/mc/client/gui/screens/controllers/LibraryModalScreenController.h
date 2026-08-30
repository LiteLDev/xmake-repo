#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/LibraryModalScreenType.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class LibraryModalScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                                 mOnModalDismissed;
    ::ll::TypedStorage<1, 1, ::LibraryModalScreenType>                          mType;
    ::ll::TypedStorage<8, 24, std::vector<std::pair<std::string, std::string>>> mEventProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryModalScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryModalScreenController();

    virtual std::string getTelemetryOverride() const;

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibraryModalScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        ::LibraryModalScreenType,
        std::function<void(bool)>,
        std::vector<std::pair<std::string, std::string>>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        ::LibraryModalScreenType,
        std::function<void(bool)>,
        std::vector<std::pair<std::string, std::string>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string $getTelemetryOverride() const;

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
