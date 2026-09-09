#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSource.h"
#include "mc/platform/brstd/move_only_function.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
struct ContentItem;
// clang-format on

struct WorldContentSource : public ::ContentSource {
public:
    // WorldContentSource inner types define
    using CanAccessWorldCallback = ::brstd::move_only_function<bool(const LevelSummary&) const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache*> mLevelListCache;
    ::ll::UntypedStorage<8, 32>                  mLevelSummaryList;
    ::ll::UntypedStorage<8, 64>                  mCanAccessWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldContentSource();

    virtual void load();

    virtual void generateItems(std::vector<std::shared_ptr<ContentItem>>&);

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

    MCNAPI void $deleteContentFiles(std::vector<std::shared_ptr<const ContentItem>> const&);

    MCNAPI void $postDeleteContent(std::vector<std::shared_ptr<const ContentItem>> const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
