#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>                              mOnModalDismissed;
    ::ll::TypedStorage<1, 1, ::LibraryModalScreenType>                                  mType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::std::string>>> mEventProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryModalScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryModalScreenController() /*override*/ = default;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string getTelemetryOverride() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LibraryModalScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>                model,
        ::LibraryModalScreenType                                 type,
        ::std::function<void(bool)>                              onModalDismissed,
        ::std::vector<::std::pair<::std::string, ::std::string>> eventProperties
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                model,
        ::LibraryModalScreenType                                 type,
        ::std::function<void(bool)>                              onModalDismissed,
        ::std::vector<::std::pair<::std::string, ::std::string>> eventProperties
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ui::SceneType $getSceneType() const;

    MCAPI ::std::string $getTelemetryOverride() const;

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;
    // NOLINTEND
};
#else // @header-generator platform
class LibraryModalScreenController {};
#endif // @header-generator platform
#endif // @header-generator platform
