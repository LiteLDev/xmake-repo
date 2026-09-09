#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/PackErrorInfo.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class FileDeleteProgressHandler;
class IContentKeyProvider;
class MinecraftScreenModel;
class PackError;
class PackManifest;
class PackManifestFactory;
struct PackContentItem;
namespace Core { class Path; }
// clang-format on

class ManifestValidationScreenController : public ::MinecraftScreenController {
public:
    // ManifestValidationScreenController inner types define
    enum class IssueType : int {
        None    = 0,
        Error   = 1,
        Warning = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                     mResourceLocation;
    ::ll::UntypedStorage<8, 24>                                       mOriginalPath;
    ::ll::TypedStorage<8, 24, std::vector<PackErrorInfo>>             mErrorContent;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDeleting;
    ::ll::TypedStorage<1, 1, bool>                                    mIsDoneValidating;
    ::ll::TypedStorage<1, 1, bool>                                    mPackInUserDataPath;
    ::ll::TypedStorage<1, 1, bool>                                    mShowCopyClipboard;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const PackContentItem>> mContentItem;
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                  mManifestFactory;
    ::ll::UntypedStorage<8, 24>                                       mKeyProvider;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PackManifest>>           mManifest;
    ::ll::UntypedStorage<8, 16>                                       mDeleteProgressHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    ManifestValidationScreenController& operator=(ManifestValidationScreenController const&);
    ManifestValidationScreenController(ManifestValidationScreenController const&);
    ManifestValidationScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ManifestValidationScreenController();

    virtual ::ui::DirtyFlag tick();

    virtual void onTerminate();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ManifestValidationScreenController(
        std::shared_ptr<MinecraftScreenModel>,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::ResourceLocation const&,
        ::Core::Path const&,
        bool,
        std::shared_ptr<const PackContentItem> const&
    );

    MCNAPI std::string _colorLocString(::ManifestValidationScreenController::IssueType, std::string const&) const;

    MCNAPI void _finishValidation();

    MCNAPI ::Core::PathBuffer<std::string> const _generateBaseIconPath(::PackManifest const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::shared_ptr<MinecraftScreenModel>,
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::ResourceLocation const&,
        ::Core::Path const&,
        bool,
        std::shared_ptr<const PackContentItem> const&
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

    MCNAPI void $onTerminate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
