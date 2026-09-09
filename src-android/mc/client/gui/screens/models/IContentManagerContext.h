#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ContentView;
struct ContentItem;
// clang-format on

class IContentManagerContext {
public:
    // IContentManagerContext inner types define
    using ConstContentItemPtr = std::shared_ptr<const ContentItem>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IContentManagerContext() = default;

    virtual ::ContentView& getContentView(::brstd::move_only_function<bool (const std::shared_ptr<const ContentItem>&)>) = 0;

    virtual std::vector<std::unique_ptr<ContentView>> const& getContentViews() const = 0;

    virtual void onLanguageChanged() = 0;
    // clang-format on
    // NOLINTEND
};
