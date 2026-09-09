#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ClientInstanceScreenController.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceScreenModel;
class ImageExportSubController;
// clang-format on

class EduLessonCompleteScreenController : public ::ClientInstanceScreenController {
public:
    // EduLessonCompleteScreenController inner types declare
    // clang-format off
    struct ImageRecord;
    // clang-format on

    // EduLessonCompleteScreenController inner types define
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
};
