#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/models/IContentManagerContext.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ContentView;
class IContentManager;
struct ContentItem;
// clang-format on

class ContentManagerContext : public ::IContentManagerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>                                          mContextPredicate;
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<ContentView>>> mContentViews;
    ::ll::UntypedStorage<8, 24>                                          mManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentManagerContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ContentManagerContext();

    virtual ::ContentView& getContentView(::brstd::move_only_function<bool (const std::shared_ptr<const ContentItem>&)>);

    virtual std::vector<std::unique_ptr<ContentView>> const& getContentViews() const;

    virtual void onLanguageChanged();
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ContentView& $getContentView(::brstd::move_only_function<bool(const std::shared_ptr<const ContentItem>&)>);

    MCNAPI std::vector<std::unique_ptr<ContentView>> const& $getContentViews() const;

    MCNAPI void $onLanguageChanged();
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
#include "mc/client/gui/screens/models/IContentManagerContext.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ContentView;
class IContentManager;
struct ContentItem;
// clang-format on

class ContentManagerContext : public ::IContentManagerContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::shared_ptr<::ContentItem const>)>> mContextPredicate;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ContentView>>>               mContentViews;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IContentManager>>                            mManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentManagerContext() /*override*/ = default;

    virtual ::ContentView& getContentView(
        ::brstd::move_only_function<bool(::std::shared_ptr<::ContentItem const> const&)> predicate
    ) /*override*/;

    virtual ::std::vector<::std::unique_ptr<::ContentView>> const& getContentViews() const /*override*/;

    virtual void onLanguageChanged() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ContentView&
    $getContentView(::brstd::move_only_function<bool(::std::shared_ptr<::ContentItem const> const&)> predicate);

    MCFOLD ::std::vector<::std::unique_ptr<::ContentView>> const& $getContentViews() const;

    MCAPI void $onLanguageChanged();
    // NOLINTEND
};
#else // @header-generator platform
class ContentManagerContext {};
#endif // @header-generator platform
#endif // @header-generator platform
