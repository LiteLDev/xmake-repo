#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContentItemCollectionVersion;
struct ContentItem;
// clang-format on

class IVersionedContentItemCollection {
public:
    // IVersionedContentItemCollection inner types define
    using ItemCollection = std::vector<gsl::not_null<std::shared_ptr<const ContentItem>>>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IVersionedContentItemCollection() = default;

    virtual void appendLatest(::ContentItemCollectionVersion&, std::vector<gsl::not_null<std::shared_ptr<const ContentItem>>>&) const = 0;

    virtual ::ContentItemCollectionVersion getVersion() const = 0;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class ContentItemCollectionVersion;
struct ContentItem;
// clang-format on

class IVersionedContentItemCollection {
public:
    // IVersionedContentItemCollection inner types define
    using ItemCollection = ::std::vector<::gsl::not_null<::std::shared_ptr<::ContentItem const>>>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IVersionedContentItemCollection() = default;

    virtual void appendLatest(
        ::ContentItemCollectionVersion&                                         version,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::ContentItem const>>>& output
    ) const = 0;

    virtual ::ContentItemCollectionVersion getVersion() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IVersionedContentItemCollection {};
#endif // @header-generator platform
#endif // @header-generator platform
