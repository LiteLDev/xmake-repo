#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/download/IDlcBatcher.h"

// auto generated forward declare list
// clang-format off
class DlcBatchModel;
class DlcId;
class IContentAcquisition;
class IDlcBatchModel;
class IStoreCatalogRepository;
struct PackIdVersion;
// clang-format on

class DlcBatcher : public ::IDlcBatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>                                             mStoreCatalogRepository;
    ::ll::TypedStorage<8, 8, ::IContentAcquisition&>                       mContentAcquisition;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<DlcBatchModel>>> mDlcBatchList;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcBatcher& operator=(DlcBatcher const&);
    DlcBatcher(DlcBatcher const&);
    DlcBatcher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DlcBatcher();

    virtual ::IDlcBatchModel& getDlcBatchModel(std::vector<PackIdVersion> const&);

    virtual ::IDlcBatchModel& getDlcBatchModel(std::vector<std::string> const&);

    virtual ::IDlcBatchModel& getDlcBatchModel(std::vector<DlcId> const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DlcBatcher(::IStoreCatalogRepository&, ::IContentAcquisition&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IStoreCatalogRepository&, ::IContentAcquisition&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::IDlcBatchModel& $getDlcBatchModel(std::vector<PackIdVersion> const&);

    MCNAPI ::IDlcBatchModel& $getDlcBatchModel(std::vector<std::string> const&);

    MCNAPI ::IDlcBatchModel& $getDlcBatchModel(std::vector<DlcId> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DlcBatcher {};
#endif // @header-generator platform
