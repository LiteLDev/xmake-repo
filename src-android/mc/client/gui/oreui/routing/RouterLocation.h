#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RouteType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
// clang-format on

namespace OreUI {

class RouterLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<AbstractScene>> mScene;
    ::ll::TypedStorage<8, 24, std::string>                  mUrl;
    ::ll::TypedStorage<8, 24, std::string>                  mPath;
    ::ll::TypedStorage<8, 24, std::string>                  mQuery;
    ::ll::TypedStorage<8, 24, std::string>                  mFragment;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>            mMode;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteType>            mType;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterLocation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RouterLocation(::OreUI::RouterLocation const&);

    MCNAPI
    RouterLocation(std::weak_ptr<AbstractScene> const, std::string const&, ::OreUI::RouteMode, ::OreUI::RouteType);

    MCNAPI bool _isRealmsStoriesScreen(std::string const&) const;

    MCNAPI std::string const& getFragment() const;

    MCNAPI ::OreUI::RouteMode getMode() const;

    MCNAPI std::string const& getPath() const;

    MCNAPI std::string const& getQuery() const;

    MCNAPI std::weak_ptr<AbstractScene> getScene() const;

    MCNAPI std::string getTelemetryId() const;

    MCNAPI ::OreUI::RouteType getType() const;

    MCNAPI std::string const& getUrl() const;

    MCNAPI bool hasSameSceneAs(::OreUI::RouterLocation const&) const;

    MCNAPI bool isValid() const;

    MCNAPI void setMode(::OreUI::RouteMode);

    MCNAPI ~RouterLocation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::RouterLocation const&);

    MCNAPI void* $ctor(std::weak_ptr<AbstractScene> const, std::string const&, ::OreUI::RouteMode, ::OreUI::RouteType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
