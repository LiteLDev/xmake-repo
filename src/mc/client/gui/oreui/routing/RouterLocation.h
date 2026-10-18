#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RouteType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/interface/RouteMode.h"
#include "mc/client/gui/oreui/interface/RouteType.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RouterLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::AbstractScene>> mScene;
    ::ll::TypedStorage<8, 32, ::std::string>                    mUrl;
    ::ll::TypedStorage<8, 32, ::std::string>                    mPath;
    ::ll::TypedStorage<8, 32, ::std::string>                    mQuery;
    ::ll::TypedStorage<8, 32, ::std::string>                    mFragment;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteMode>                mMode;
    ::ll::TypedStorage<4, 4, ::OreUI::RouteType>                mType;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterLocation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RouterLocation(::OreUI::RouterLocation const&);

    MCAPI RouterLocation(
        ::std::weak_ptr<::AbstractScene> scene,
        ::std::string const&             url,
        ::OreUI::RouteMode               mode,
        ::OreUI::RouteType               routeType
    );

    MCFOLD ::std::string const& getFragment() const;

    MCFOLD ::std::string const& getPath() const;

    MCFOLD ::std::string const& getQuery() const;

    MCAPI ::std::unordered_map<::std::string, ::std::string> getTelemetryEventProperties() const;

    MCAPI ::std::string getTelemetryId() const;

    MCAPI bool isValid() const;

    MCAPI ::OreUI::RouterLocation& operator=(::OreUI::RouterLocation const&);

    MCAPI ~RouterLocation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isRealmsStoriesScreen(::std::string const& routeName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::RouterLocation const&);

    MCAPI void* $ctor(
        ::std::weak_ptr<::AbstractScene> scene,
        ::std::string const&             url,
        ::OreUI::RouteMode               mode,
        ::OreUI::RouteType               routeType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class RouterLocation {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
