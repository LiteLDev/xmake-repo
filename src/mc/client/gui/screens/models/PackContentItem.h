#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ManifestContentItem.h"
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/client/gui/screens/models/PackReportState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/SubpackInfoCollection.h"

// auto generated forward declare list
// clang-format off
class PackSettingsFactory;
struct ContentSource;
struct PackContentItemListPosition;
// clang-format on

struct PackContentItem : public ::ManifestContentItem {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ManifestContentItem.h"
#include "mc/client/gui/screens/models/PackReportState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/SubpackInfoCollection.h"

// auto generated forward declare list
// clang-format off
class PackSettingsFactory;
struct ContentSource;
struct PackContentItemListPosition;
// clang-format on

struct PackContentItem : public ::ManifestContentItem {
#else // @header-generator platform
struct PackContentItem {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PackContentItem inner types declare
    // clang-format off
    struct PositionSort;
    // clang-format on

    // PackContentItem inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PositionSort {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool
        operator()(std::shared_ptr<const PackContentItem> const&, std::shared_ptr<const PackContentItem> const&) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 224>                                                            mPackReport;
    ::ll::UntypedStorage<8, 224>                                                            mLoadingReport;
    ::ll::TypedStorage<8, 24, std::string>                                                  mDateAvailable;
    ::ll::TypedStorage<1, 1, ::PackReportState>                                             mReportState;
    ::ll::TypedStorage<8, 24, ::SubpackInfoCollection>                                      mSubpackInfo;
    ::ll::TypedStorage<8, 8, ::PackSettingsFactory*>                                        mPackSettingsFactory;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>                                   mWorldId;
    ::ll::UntypedStorage<8, 32>                                                             mWorldPath;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<PackContentItemListPosition>>> mListPosition;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<const PackContentItem>>>            mDependencies;
    ::ll::TypedStorage<8, 24, std::vector<std::weak_ptr<const PackContentItem>>>            mDependentContent;
    // NOLINTEND

public:
    // prevent constructor by default
    PackContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackContentItem();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PackContentItem(::ContentSource*);

    MCNAPI std::vector<std::shared_ptr<const PackContentItem>> getDependentContent() const;

    MCNAPI ::PackListType getListType() const;

    MCNAPI ulong getPosition() const;

    MCNAPI int getSubpackIndex() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ContentSource*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct PositionSort {};
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 248, ::PackReport>                                                    mPackReport;
    ::ll::TypedStorage<8, 248, ::PackReport>                                                    mLoadingReport;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mDateAvailable;
    ::ll::TypedStorage<1, 1, ::PackReportState>                                                 mReportState;
    ::ll::TypedStorage<8, 24, ::SubpackInfoCollection>                                          mSubpackInfo;
    ::ll::TypedStorage<8, 8, ::PackSettingsFactory*>                                            mPackSettingsFactory;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                   mWorldId;
    ::ll::TypedStorage<8, 40, ::std::optional<::Core::PathBuffer<::std::string>>>               mWorldPath;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PackContentItemListPosition>>> mListPosition;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::PackContentItem const>>>          mDependencies;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::PackContentItem const>>>          mDependentContent;
    // NOLINTEND

public:
    // prevent constructor by default
    PackContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackContentItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PackContentItem(::ContentSource* src);

    MCAPI ::std::vector<::std::shared_ptr<::PackContentItem const>> getDependentContent() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContentSource* src);
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
};
