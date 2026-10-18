#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DlcBatchModel;
class DlcId;
class IContentAcquisition;
class IMinecraftGame;
class IStoreCatalogRepository;
// clang-format on

class DlcBatchCacheModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::DlcBatchModel>>                           mDlcBatchList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentAcquisition>>     mContentAcquisition;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository>> mStoreCatalog;
    // NOLINTEND

public:
    // prevent constructor by default
    DlcBatchCacheModel();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DlcBatchCacheModel(::IMinecraftGame& minecraft);

    MCAPI DlcBatchCacheModel(
        ::Bedrock::NotNullNonOwnerPtr<::IContentAcquisition>     contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalog
    );

    MCAPI ::DlcBatchModel& getDlcBatchModel(::std::vector<::DlcId> const& dlcIds);

    MCAPI ::DlcBatchModel& getDlcBatchModel(::std::string const& productId);

    MCAPI ::DlcBatchModel& getDlcBatchModel(::std::vector<::std::string> const& productIds);

    MCAPI ~DlcBatchCacheModel();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IMinecraftGame& minecraft);

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IContentAcquisition>     contentAcquisition,
        ::Bedrock::NotNullNonOwnerPtr<::IStoreCatalogRepository> storeCatalog
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class DlcBatchCacheModel {};
#endif // @header-generator platform
#endif // @header-generator platform
