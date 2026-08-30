#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/client/gui/screens/controllers/PhotoRecord.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImageExportSubController;
class PortfolioScreenManager;
class UIPropertyBag;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class PortfolioScreenController : public ::ClientInstanceScreenController {
public:
    // PortfolioScreenController inner types define
    enum class PortfolioView : uchar {
        Viewing   = 0,
        Picking   = 1,
        Exporting = 2,
    };

    using ImageMetaDataLoadorFunction = std::function<bool(std::string&, const Core::Path&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<PortfolioScreenManager>>    mPortfolioScreenManager;
    ::ll::UntypedStorage<8, 24>                                          mScreenshots;
    ::ll::TypedStorage<8, 24, std::vector<PhotoRecord>>                  mPhotoRecords;
    ::ll::TypedStorage<1, 1, ::PortfolioScreenController::PortfolioView> mCurrentView;
    ::ll::TypedStorage<4, 4, int>                                        mCurrentPage;
    ::ll::TypedStorage<4, 4, int>                                        mLastPage;
    ::ll::UntypedStorage<8, 16>                                          mImageExportSubController;
    ::ll::UntypedStorage<8, 48>                                          mImageMetaDataLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    PortfolioScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PortfolioScreenController();

    virtual void onOpen();

    virtual void onTerminate();

    virtual void addStaticScreenVars(::Json::Value&);

    virtual bool _isStillValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PortfolioScreenController(std::shared_ptr<ClientInstanceScreenModel>);

    MCNAPI void _deletePhoto(ulong);

    MCNAPI int _getPickIndex(::UIPropertyBag&);

    MCNAPI void _loadCaptionIfUnloaded(::PhotoRecord&);

    MCNAPI void _saveCaptions(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<ClientInstanceScreenModel>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onOpen();

    MCNAPI void $onTerminate();

    MCNAPI void $addStaticScreenVars(::Json::Value&);

    MCNAPI bool $_isStillValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
