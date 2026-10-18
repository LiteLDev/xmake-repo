#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItemCollectionVersion.h"
#include "mc/client/gui/screens/models/IVersionedContentItemCollection.h"

// auto generated forward declare list
// clang-format off
struct ContentItem;
// clang-format on

class MutableContentItemCollection : public ::IVersionedContentItemCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContentItemCollectionVersion>                            mVersion;
    ::ll::TypedStorage<8, 24, std::vector<gsl::not_null<std::shared_ptr<ContentItem>>>> mItems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~MutableContentItemCollection();

    virtual void appendLatest(::ContentItemCollectionVersion&, std::vector<gsl::not_null<std::shared_ptr<const ContentItem>>>&) const;

    virtual ::ContentItemCollectionVersion getVersion() const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void forceVersion();

    MCNAPI std::vector<gsl::not_null<std::shared_ptr<ContentItem>>> const& get() const;

    MCNAPI void set(std::vector<gsl::not_null<std::shared_ptr<ContentItem>>>&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $appendLatest(
        ::ContentItemCollectionVersion&,
        std::vector<gsl::not_null<std::shared_ptr<const ContentItem>>>&
    ) const;

    MCNAPI ::ContentItemCollectionVersion $getVersion() const;
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
#include "mc/client/gui/screens/models/ContentItemCollectionVersion.h"
#include "mc/client/gui/screens/models/IVersionedContentItemCollection.h"

// auto generated forward declare list
// clang-format off
struct ContentItem;
// clang-format on

class MutableContentItemCollection : public ::IVersionedContentItemCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContentItemCollectionVersion>                                    mVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::std::shared_ptr<::ContentItem>>>> mItems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void appendLatest(
        ::ContentItemCollectionVersion&                                         version,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::ContentItem const>>>& output
    ) const /*override*/;

    virtual ::ContentItemCollectionVersion getVersion() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendLatest(
        ::ContentItemCollectionVersion&                                         version,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::ContentItem const>>>& output
    ) const;

    MCAPI ::ContentItemCollectionVersion $getVersion() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class MutableContentItemCollection {};
#endif // @header-generator platform
#endif // @header-generator platform
