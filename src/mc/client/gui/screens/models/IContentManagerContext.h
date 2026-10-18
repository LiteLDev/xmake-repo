#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
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
    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IContentManagerContext() = default;

    virtual ::ContentView&
    getContentView(::brstd::move_only_function<bool(::std::shared_ptr<::ContentItem const> const&)> predicate) = 0;

    virtual ::std::vector<::std::unique_ptr<::ContentView>> const& getContentViews() const = 0;

    virtual void onLanguageChanged() = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IContentManagerContext {};
#endif // @header-generator platform
#endif // @header-generator platform
