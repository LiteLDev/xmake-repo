#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSourceType.h"

// auto generated forward declare list
// clang-format off
struct ContentItem;
// clang-format on

struct ContentSource {
public:
    // ContentSource inner types define
    using ConstContentItemPtr = std::shared_ptr<const ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ContentItem>>> mLoadedItems;
    ::ll::TypedStorage<4, 4, ::ContentSourceType>                        mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentSource();

    virtual void load();

    virtual void generateItems(std::vector<std::shared_ptr<ContentItem>>&);

    virtual void save();

    virtual void saveAllPacks();

    virtual void deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    virtual void postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load();

    MCNAPI void $generateItems(std::vector<std::shared_ptr<ContentItem>>&);

    MCNAPI void $save();

    MCNAPI void $saveAllPacks();

    MCNAPI void $deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    MCNAPI void $postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
