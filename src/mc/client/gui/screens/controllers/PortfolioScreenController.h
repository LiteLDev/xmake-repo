#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImageExportSubController;
class PortfolioScreenManager;
class UIPropertyBag;
struct PhotoRecord;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class PortfolioScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
class PortfolioScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PortfolioScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class PortfolioView : uchar {
        Viewing   = 0,
        Picking   = 1,
        Exporting = 2,
    };

    using ImageMetaDataLoadorFunction = ::std::function<bool(::std::string&, ::Core::Path const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PortfolioScreenManager>>                 mPortfolioScreenManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>>           mScreenshots;
    ::ll::TypedStorage<8, 24, ::std::vector<::PhotoRecord>>                               mPhotoRecords;
    ::ll::TypedStorage<1, 1, ::PortfolioScreenController::PortfolioView>                  mCurrentView;
    ::ll::TypedStorage<4, 4, int>                                                         mCurrentPage;
    ::ll::TypedStorage<4, 4, int>                                                         mLastPage;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ImageExportSubController>>                mImageExportSubController;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string&, ::Core::Path const&)>> mImageMetaDataLoader;
    // NOLINTEND

public:
    // prevent constructor by default
    PortfolioScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PortfolioScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual bool _isStillValid() const /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PortfolioScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);

    MCAPI void _createPhotoItem(uint64 index);

    MCAPI void _deletePhoto(uint64 index);

    MCAPI void _loadCaptionIfUnloaded(::PhotoRecord& record);

    MCAPI void _saveCaptions(bool forceSaveAll);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int _getPickIndex(::UIPropertyBag& bag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onTerminate();

    MCAPI bool $_isStillValid() const;

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);
    // NOLINTEND
#else // @header-generator platform
    enum class PortfolioView : uchar {};
#endif // @header-generator platform
#endif // @header-generator platform
};
