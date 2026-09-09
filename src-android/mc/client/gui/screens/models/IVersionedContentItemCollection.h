#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
