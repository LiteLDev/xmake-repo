#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/client/services/catalog/SkinPackMeta.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class SearchQuery;
// clang-format on

class CatalogPackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                            mCatalog;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SearchQuery>> mQuery;
    ::ll::TypedStorage<8, 24, std::vector<SkinPackMeta>>   mSkinPackMeta;
    ::ll::TypedStorage<4, 4, int>                          mDocumentsRemoved;
    ::ll::TypedStorage<4, 4, int>                          mCatalogTotal;
    ::ll::TypedStorage<4, 4, int>                          mSkip;
    ::ll::TypedStorage<4, 4, int>                          mNumPacksRejected;
    ::ll::TypedStorage<1, 1, bool>                         mSearchActive;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogPackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CatalogPackCollector();

    virtual void start(bool);

    virtual bool exhausted() const;

    virtual ::HandleRangeResult handleRange(int, int);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CatalogPackCollector(::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&);

    MCNAPI void _search();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<ContentCatalogService>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start(bool);

    MCNAPI bool $exhausted() const;

    MCNAPI ::HandleRangeResult $handleRange(int, int);
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
#include "mc/client/gui/screens/models/HandleRangeResult.h"
#include "mc/client/gui/screens/models/SkinPackCollector.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentCatalogService;
class SearchQuery;
struct SkinPackMeta;
// clang-format on

class CatalogPackCollector : public ::SkinPackCollector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService>> mCatalog;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SearchQuery>>                        mQuery;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkinPackMeta>>                          mSkinPackMeta;
    ::ll::TypedStorage<4, 4, int>                                                     mDocumentsRemoved;
    ::ll::TypedStorage<4, 4, int>                                                     mCatalogTotal;
    ::ll::TypedStorage<4, 4, int>                                                     mSkip;
    ::ll::TypedStorage<4, 4, int>                                                     mNumPacksRejected;
    ::ll::TypedStorage<1, 1, bool>                                                    mSearchActive;
    // NOLINTEND

public:
    // prevent constructor by default
    CatalogPackCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CatalogPackCollector() /*override*/ = default;

    virtual void start(bool allowed) /*override*/;

    virtual bool exhausted() const /*override*/;

    virtual ::HandleRangeResult handleRange(int, int end) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CatalogPackCollector(::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& catalog);

    MCAPI void _search();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ContentCatalogService> const& catalog);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start(bool allowed);

    MCAPI bool $exhausted() const;

    MCAPI ::HandleRangeResult $handleRange(int, int end);
    // NOLINTEND
};
#else // @header-generator platform
class CatalogPackCollector {};
#endif // @header-generator platform
#endif // @header-generator platform
