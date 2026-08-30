#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
