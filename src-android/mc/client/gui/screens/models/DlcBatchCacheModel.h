#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/DlcBatchModel.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DlcId;
class IContentAcquisition;
class IMinecraftGame;
class IStoreCatalogRepository;
struct PackIdVersion;
// clang-format on

class DlcBatchCacheModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<DlcBatchModel>> mDlcBatchList;
    ::ll::UntypedStorage<8, 24>                           mContentAcquisition;
    ::ll::UntypedStorage<8, 24>                           mStoreCatalog;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcBatchCacheModel();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DlcBatchCacheModel(::IMinecraftGame&);

    MCNAPI DlcBatchCacheModel(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAcquisition>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>
    );

    MCNAPI ::DlcBatchModel& getDlcBatchModel(std::vector<DlcId> const&);

    MCNAPI ::DlcBatchModel& getDlcBatchModel(std::string const&);

    MCNAPI ::DlcBatchModel& getDlcBatchModel(std::vector<std::string> const&);

    MCNAPI ~DlcBatchCacheModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame&);

    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IContentAcquisition>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<IStoreCatalogRepository>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
