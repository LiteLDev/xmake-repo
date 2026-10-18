#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImageExportSubController;
// clang-format on

class EduLessonCompleteScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImageExportSubController;
// clang-format on

class EduLessonCompleteScreenController : public ::ClientInstanceScreenController {
#else // @header-generator platform
class EduLessonCompleteScreenController {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // EduLessonCompleteScreenController inner types declare
    // clang-format off
    struct ImageRecord;
    // clang-format on

    // EduLessonCompleteScreenController inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct ImageRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string> path;
        ::ll::TypedStorage<1, 1, bool>         mIncludeInExport;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageRecord& operator=(ImageRecord const&);
        ImageRecord(ImageRecord const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<EduLessonCompleteScreenController::ImageRecord>> mImageRecords;
    ::ll::TypedStorage<4, 4, int>                                                          mCurrentImageIndex;
    ::ll::UntypedStorage<8, 24>                                                            mImageExportSubController;
    // NOLINTEND

public:
    // prevent constructor by default
    EduLessonCompleteScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduLessonCompleteScreenController();

    virtual bool _isStillValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit EduLessonCompleteScreenController(std::shared_ptr<ClientInstanceScreenModel>);

    MCNAPI void _buildImageRecords();

    MCNAPI void _registerBindings();

    MCNAPI void _registerEventHandlers();

    MCNAPI void _registerSubControllers();
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
    MCNAPI bool $_isStillValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct ImageRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> path;
        ::ll::TypedStorage<1, 1, bool>           mIncludeInExport;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::EduLessonCompleteScreenController::ImageRecord>> mImageRecords;
    ::ll::TypedStorage<4, 4, int>                                                              mCurrentImageIndex;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ImageExportSubController>> mImageExportSubController;
    // NOLINTEND

public:
    // prevent constructor by default
    EduLessonCompleteScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EduLessonCompleteScreenController() /*override*/ = default;

    virtual bool _isStillValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EduLessonCompleteScreenController(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::ClientInstanceScreenModel> model);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_isStillValid() const;
    // NOLINTEND
#else // @header-generator platform
    struct ImageRecord {};
#endif // @header-generator platform
#endif // @header-generator platform
};
