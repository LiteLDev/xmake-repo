#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSource.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
struct ContentItem;
struct LevelSummary;
// clang-format on

struct WorldContentSource : public ::ContentSource {
public:
    // WorldContentSource inner types define
    using CanAccessWorldCallback = ::brstd::move_only_function<bool(::LevelSummary const&) const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache*>             mLevelListCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelSummary>> mLevelSummaryList;
    ::ll::TypedStorage<8, 64, ::gsl::not_null<::brstd::move_only_function<bool(::LevelSummary const&) const>> const>
        mCanAccessWorld;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldContentSource() /*override*/ = default;

    virtual void load() /*override*/;

    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content) /*override*/;

    virtual void deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;

    virtual void postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load();

    MCAPI void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);

    MCAPI void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);

    MCAPI void $postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND
};
#else // @header-generator platform
struct WorldContentSource {};
#endif // @header-generator platform
#endif // @header-generator platform
