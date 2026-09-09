#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/options/EduSharedUriResource.h"

// auto generated forward declare list
// clang-format off
class EduShareLinkScreenController;
class EducationContentManagerScreenController;
class IMinecraftEventing;
class IResourcePackRepository;
class LevelData;
class LibraryItem;
class LibrarySearchBarScreenController;
class PlayScreenModel;
class ResourcePackManager;
class ToastManager;
namespace Json { class Value; }
namespace LibraryInfo { struct BaseLibraryInfo; }
// clang-format on

class LibraryItemScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<LibraryInfo::BaseLibraryInfo>>> mInfoSections;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LibraryItem>> mItem;
    ::ll::TypedStorage<8, 16, std::shared_ptr<EducationContentManagerScreenController>> mEducationContentManagerScreenController;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mSearchableTags;
    ::ll::TypedStorage<8, 16, std::shared_ptr<EduShareLinkScreenController>> mEduShareLinkScreenController;
    ::ll::TypedStorage<8, 56, std::optional<EduSharedUriResource>> mAdditionalUriResource;
    ::ll::TypedStorage<8, 16, std::shared_ptr<LibrarySearchBarScreenController>> mSearchBarSubController;
    ::ll::UntypedStorage<1, 16> mCancelButtonPressed;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryItemScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LibraryItemScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onOpen();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual void addEventProperties(std::unordered_map<std::string, std::string>&) const;

    virtual ::ui::SceneType getSceneType() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LibraryItemScreenController(
        std::shared_ptr<PlayScreenModel>,
        std::shared_ptr<LibraryItem>,
        std::unordered_map<std::string, std::string>,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::ToastManager&
    );

    MCNAPI std::string const& getProductId() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<PlayScreenModel>,
        std::shared_ptr<LibraryItem>,
        std::unordered_map<std::string, std::string>,
        ::IResourcePackRepository&,
        ::ResourcePackManager&,
        ::IMinecraftEventing&,
        ::ToastManager&
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
    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI void $onOpen();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI void $addEventProperties(std::unordered_map<std::string, std::string>&) const;

    MCNAPI ::ui::SceneType $getSceneType() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
