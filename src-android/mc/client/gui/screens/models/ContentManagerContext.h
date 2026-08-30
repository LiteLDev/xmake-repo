#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
