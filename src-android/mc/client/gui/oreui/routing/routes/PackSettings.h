#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IContentManager;
class IContentTierManager;
class ISceneStack;
class PackManifestFactory;
class SceneFactory;
struct ContentItem;
struct PackContentItem;
namespace OreUI { class RouteMatcher; }
// clang-format on

namespace OreUI::EntryPoints {

class PackSettings : public ::OreUI::IEntryPoint {
public:
    // PackSettings inner types define
    using PackContentItemPtr = std::shared_ptr<PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&> mManifestFactory;
    ::ll::UntypedStorage<8, 24>                      mContentKeyProvider;
    ::ll::UntypedStorage<8, 24>                      mContentTierManager;
    ::ll::UntypedStorage<8, 48>                      mGetContentManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PackSettings& operator=(PackSettings const&);
    PackSettings(PackSettings const&);
    PackSettings();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~PackSettings();

    virtual bool shouldAddToConfiguration() const;

    virtual void addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackSettings(
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        std::function<IContentManager&()>
    );

    MCNAPI std::shared_ptr<PackContentItem>
           _findPackFromId(std::string_view, std::string_view, std::vector<std::shared_ptr<ContentItem>> const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[14]> BASE_SCREEN_ID();

    MCNAPI static ::OreUI::EntryPoints::RouteFlags const& FLAGS();

    MCNAPI static ::std::add_lvalue_reference_t<char const[15]> ROUTE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::PackManifestFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentKeyProvider>> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const IContentTierManager>> const&,
        std::function<IContentManager&()>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldAddToConfiguration() const;

    MCNAPI void $addToMatcher(
        ::OreUI::RouteMatcher&,
        ::SceneFactory&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::EntryPoints
