#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
// clang-format on

namespace OreUI::EntryPoints {

class SingleRoute : public ::OreUI::IEntryPoint {
public:
    // SingleRoute inner types define
    using SceneCreationCallback = std::function<std::shared_ptr<AbstractScene>(SceneFactory&, const std::string&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mRoute;
    ::ll::UntypedStorage<8, 32>            mScreenId;
    ::ll::UntypedStorage<8, 48>            mSceneCreationCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleRoute();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~SingleRoute();

    virtual bool shouldAddToConfiguration() const;

    virtual void addToMatcher(::OreUI::RouteMatcher&, ::SceneFactory&, ::gsl::not_null<Bedrock::NonOwnerPointer<ISceneStack>> const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SingleRoute(
        std::string const&,
        std::string const&,
        std::function<std::shared_ptr<AbstractScene>(SceneFactory&, const std::string&)>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::string const&,
        std::string const&,
        std::function<std::shared_ptr<AbstractScene>(SceneFactory&, const std::string&)>
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
